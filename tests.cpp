#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"

// add your tests here
TEST_CASE("caesar") {
	CHECK(shiftChar('9', 5) == '9');
	CHECK(shiftChar('l', 5) == 'q');
	CHECK(shiftChar('Z', 7) == 'G');
	CHECK(encryptCaesar("A Light-Year Apart!!", 5) == "F Qnlmy-Djfw Fufwy!!");
	CHECK(encryptCaesar("Hello, World!!", 10) == "Rovvy, Gybvn!!");
	CHECK(encryptCaesar("Way to Go!", 5) == "Bfd yt Lt!");
}

TEST_CASE("vigenere") {
	CHECK(alphabet('z') == 25);
	CHECK(alphabet('k') == 10);
	CHECK(alphabet('o') == 14);
	CHECK(encryptVigenere("Hello, World!!", "cake") == "Jevpq, Wyvnd!!");
	CHECK(encryptVigenere("See You Tomorrow", "Today") == "Lsh Ymn Hrmmkfrw");
	CHECK(encryptVigenere("I Am The BEST!!", "YES") == "G Ee Rlw ZIKR!!");
}

TEST_CASE("decrypt") {
	CHECK(decryptShiftChar('Q', 5) == 'L');
	CHECK(decryptShiftChar('T', 5) == 'O');
	CHECK(decryptCaesar("Rovvy, Gybvn!!", 10) == "Hello, World!!");
	CHECK(decryptCaesar("Bfd yt Lt!", 5) == "Way to Go!");
	CHECK(decryptVigenere("Lsh Ymn Hrmmkfrw", "Today") == "See You Tomorrow");
	CHECK(decryptVigenere("G Ee Rlw ZIKR!!", "YES") == "I Am The BEST!!");
}