// A2. Count digits in a number.

#include <iostream>

int count_digits(int n) {
	int count = 0;
  	while(n) {
    	count++;
    	n /= 10;
  	}
	return count;
}

int main() {
  	int n = 0;
  	std::cin >> n;
  	std::cout << "Digits in " << n << " : " << count_digits(n);
}
