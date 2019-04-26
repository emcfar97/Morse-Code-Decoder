#include <iostream>
#include <string>
#include "morseCode.h"
using namespace std;

int main() {

	morseCode encoding = morseCode("morse.txt");
	string decoded = encoding.decode(encoding);
}