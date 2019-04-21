#include <iostream>
#include <string>
#include "morseCode.h"
using namespace std;

int main() {

	while (true) {

		std::string input;
		cout << "Enter word to endode: ";
		cin >> input;

		morseCode encoding = morseCode(input);
		cout << encoding.decode() << endl;

		cout << "Do you want to encode another word?\nEnter 'y' or 'n'";
		cin >> input;

		if (input == "y") continue;
		else if (input == "n") break;
	}
}