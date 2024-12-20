// A1. Sum of natural numbers upto n.

#include <iostream>

int sum(int n) { return n * (n + 1) / 2; }

int main() {
	int n = 0;
	std::cin >> n;
	std::cout << "Sum of " << n << " : " << sum(n);
}
