#include <iostream>
#include <string>
#include "morseCode.h"

int main() {

	while (true) {

		std::string input;
		std::cout << "Enter word to endode: ";
		std::cin >> input;

		// stuff


		std::cout << "Do you want to encode another word?\nEnter 'y' or 'n'";
		std::cin >> input;

		if (input == "n") break;
	}
}
