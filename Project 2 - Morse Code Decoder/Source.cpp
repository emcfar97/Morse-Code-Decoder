#include <iostream>
#include <string>
#include "morseCode.h"
using std::cout;
using std::cin;

int main() {

	while (true) {

		std::string input;
		cout << "Enter word to endode: ";
		cin >> input;

		// stuff


		cout << "Do you want to encode another word?\nEnter 'y' or 'n'";
		cin >> input;

		if (input == "n") break;
	}
}