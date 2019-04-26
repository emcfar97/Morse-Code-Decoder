#include <iostream>
#include <string>
#include "morseCode.h"
using namespace std;

int main() {

	string input;
	morseCode encoding = morseCode(input);
	string decoded = encoding.decode(encoding);
}