#include <iostream>
#include <string>
#include "morseCode.h"

int main() {

	morseCode instance = morseCode();

	// test encode	
	std::cout << instance.encode("hello") << std::endl;
	// test decode	
	std::cout << instance.decode(". _._. .... ___") << std::endl;
	
	system("pause");
}
