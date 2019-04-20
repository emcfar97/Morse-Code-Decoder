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

		morseCode encoding = morseCode(input);
		cout << encoding.decode();

		cout << "Do you want to encode another word?\nEnter 'y' or 'n'";
		cin >> input;

		if (input == "n") break;
	}
}