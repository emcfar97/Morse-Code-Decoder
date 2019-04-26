#include <iostream>
#include <fstream>
#include <string>
#include "morseCode.h"
using namespace std;

int main() {
	ofstream;
	string input = "shsftghsh";
	morseCode encoding = morseCode(input);
	string decoded = encoding.decode();
}