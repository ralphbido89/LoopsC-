#include <vector>
#include <iostream>


void func(int&& num) {
	std::cout << num << std::endl;
};


int main() {

	int x{ 100 };

	func(3);

	std::cout << x
		<< std::endl;

}