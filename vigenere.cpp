#include <iostream>
#include "caesar.h"

int alphabet(char c) {
	if (isupper(c)) {
		return (c - 'A') % 26;
	}
	else if (islower(c)) {
		return (c - 'a') % 26;
	}
	return -1;
}

std::string encryptVigenere(std::string plaintext, std::string keyword) {
	std::string output;
	int count = 0;

	for (int i = 0; i < plaintext.length(); i++) {
		output += shiftChar(plaintext[i], alphabet(keyword[count % keyword.length()]));
		if (isalpha(plaintext[i])) {
			count++;
		}
	}

	return output;
}