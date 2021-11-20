#include <iostream>

int main() {
	int a, b;
	std::cin >> a >> b;
	if (a + b >= 10 && a + b <= 20) std::cout << "true";
	else  std::cout << "false";
}