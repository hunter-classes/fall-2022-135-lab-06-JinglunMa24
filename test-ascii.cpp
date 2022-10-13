#include <iostream>

int main() {
	std::string input;
	std::cout << "Input: ";

	getline(std::cin, input);

	for (int i = 0; i < input.length(); i++) {
		std::cout << input[i] << " " << (int)(input[i]) << std::endl;
	}

	return 0;
}