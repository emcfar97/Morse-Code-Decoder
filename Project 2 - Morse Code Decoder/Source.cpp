#include <iostream>
#include <string>
#include "morseCode.h"

int main() {

	std::string input;
	morseCode encoding = morseCode(input);
	std::string decoded = encoding.decode(encoding);
}