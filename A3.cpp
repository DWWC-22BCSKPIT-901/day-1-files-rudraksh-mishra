// A3. Function Overloading for Calculating Area.

#include <iostream>
int area(int l, int b) { return l * b; }

float area(int r) { return 3.14 * r * r; }

float area(float h, float b) { return 0.5 * b * h; }

int main() {
	int r_l = 0;
	int r_b = 0;
	int c_r = 0;
	float t_b = 0.0;
	float t_h = 0.0;
	
	std::cout << "Rectangle : \n";
	std::cin >> r_l;
	std::cin >> r_b;
	std::cout << "Area : " << area(r_l, r_b) << "\n";
	
	std::cout << "\nCircle : \n";
	std::cin >> c_r;
	std::cout << "Area : " << area(c_r) << "\n";

	std::cout << "\nTriangle : \n";
	std::cin >> t_b;
	std::cin >> t_h;
	std::cout << "Area : " << area(t_b, t_h) << "\n";

	return 0;
}
