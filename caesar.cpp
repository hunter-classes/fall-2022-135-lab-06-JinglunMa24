#include <iostream>

char shiftChar(char c, int rshift) {
	char output;

	if (!isalpha(c)) {
		return c;
	}

	else if (isupper(c)) {
		output = (c - 'A' + rshift) % 26 + 'A';
	}

	else {
		output = (c - 'a' + rshift) % 26 + 'a';
	}

	return output;
}

std::string encryptCaesar(std::string plaintext, int rshift) {
	std::string output;

	for (int i = 0; i < plaintext.length(); i++) {
		output += shiftChar(plaintext[i], rshift);
	}

	return output;
}