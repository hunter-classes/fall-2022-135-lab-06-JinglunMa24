#include <iostream>
#include "funcs.h"
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"

int main() {

	// TASK B
	std::cout << shiftChar('l', 5) << std::endl; //Q
	std::cout << encryptCaesar("A Light-Year Apart!!", 5) << std::endl; //F Qnlmy-Djfw Fufwy

	// TASK C
	std::cout << alphabet('z') << std::endl; //25
	std::cout << encryptVigenere("Hello, World!!", "cake") << std::endl; //Jevpq, Wyvnd!!

	// TASK D
	std::cout << decryptCaesar("Rovvy, Gybvn!!", 10) << std::endl; //Hello, World!!
	std::cout << decryptVigenere("Jevpq, Wyvnd!!", "cake") << std::endl; //Hello, World!!

	return 0;
}
