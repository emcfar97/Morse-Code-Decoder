#include <iostream>
#include <string>
#include "morseCode.h"

int main() {

	std::string input = "h";
	morseCode encoding = morseCode(input);
	/*std::string decoded = encoding.decode(encoding);*/

	//test decode
	/*
	morseCode beep(input);
	std::cout << beep.decode("...");
	*/

	//test encode
	/*
	morseCode beep(input);
	std::cout << beep.encode("hh") << std::endl;
	*/

	system("pause");
}