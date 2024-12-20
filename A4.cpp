// A4. Implement Polymorphism for Banking Transactions

#include <iostream>

using namespace std;

typedef unsigned int uint;

class Account {
    protected:
        uint Acc_Id;
        uint Acc_Balance;

    public:
        Account(uint Acc_Id, uint Acc_Balance) {
            this->Acc_Id = Acc_Id;
            this->Acc_Balance = Acc_Balance;
        }
        virtual ~Account() = default;
        virtual void calculate_interest() = 0;
};

class Savings_Account : public Account {
    private:
        float rate;
        uint time;

    public:
        Savings_Account(uint Acc_Id, uint Acc_Balance, float rate, uint time)
            : Account(Acc_Id, Acc_Balance) {
            this->rate = rate;
            this->time = time;
        }
        void calculate_interest() {
            float interest = this->rate * this->time * this->Acc_Balance;
            cout << "\nCurrent Balance : " << this->Acc_Balance + interest << "\n";
        }
};

class Current_Account : public Account {
    private:
        uint monthly_maintenance;
        uint months_elapsed;

    public:
        Current_Account(uint Acc_Id, uint Acc_Balance, uint monthly_maintenance,
                        uint months_elapsed)
            : Account(Acc_Id, Acc_Balance) {
            this->monthly_maintenance = monthly_maintenance;
            this->months_elapsed = months_elapsed;
        }
        void calculate_interest() {
            float maintenance_charges = months_elapsed * monthly_maintenance;
            if (this->Acc_Balance != 0 && this->Acc_Balance > maintenance_charges) {
            cout << "\nCurrent Balance : " << this->Acc_Balance - maintenance_charges
                << "\n";
            }
        }
};

int main(int argc, char *argv[]) {
    int n = 0;
    cin >> n;
    
    switch (n) {
        case 1: {
            uint Balance = 0;
            cout << "Balance : ";
            cin >> Balance;

            float Rate = 0.0;
            cout << "Rate : ";
            cin >> Rate;
            
            uint Time = 0;
            cout << "Time : ";
            cin >> Time;
            
            Savings_Account acc(1, Balance, Rate, Time);
            acc.calculate_interest();
            break;
        }
        case 2: {
            uint Balance = 0;
            cout << "Balance : ";
            cin >> Balance;
            
            uint Monthly_Maintenance = 0;
            cout << "Monthly Maintenance : ";
            cin >> Monthly_Maintenance;
            
            uint Months_Elapsed = 0;
            cout << "Months Elapsed : ";
            cin >> Months_Elapsed;
            
            Current_Account acc(1, Balance, Monthly_Maintenance, Months_Elapsed);
            acc.calculate_interest();
            break;
        }
        default: cout << "Invalid Choice !";
    }
    return 0;
}
