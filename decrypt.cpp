#include <iostream>
#include "vigenere.h"

char decryptShiftChar(char c, int rshift) {
	char output;

	if (!isalpha(c)) {
		return c;
	}
	else if (isupper(c)) {
		return (((c - 'A' - rshift) % 26) + 26) % 26 + 'A';
	}
	else if (islower(c)) {
		return (((c - 'a' - rshift) % 26) + 26) % 26 + 'a';
	}

	return output;
}

std::string decryptCaesar(std::string ciphertext, int rshift) {
	std::string output;

	for (int i = 0; i < ciphertext.length(); i++) {
		output += decryptShiftChar(ciphertext[i], rshift);
	}

	return output;
}

std::string decryptVigenere(std::string ciphertext, std::string keyword) {
	std::string output;
	int count = 0;

	for (int i = 0; i < ciphertext.length(); i++) {
		output += decryptShiftChar(ciphertext[i], alphabet(keyword[count % keyword.length()]));
		if (isalpha(ciphertext[i])) {
			count++;
		}
	}

	return output;
}