#include <iostream>
#include <string>
#include "morseCode.h"

int main() {

	morseCode instance = morseCode();
	/*std::string decoded = encoding.decode(encoding);*/

	//test decode
	
	//a to m
	
	std::cout << instance.decode("._ _... _._. _.. . .._. __. .... .. .___ _._ ._.. __") << std::endl;
	//n to z
	std::cout << instance.decode("_. ___ .__. __._ ._. ... _ .._ ..._ .__ _.._ _.__ __..") << std::endl;
	std::cout << instance.decode(". _._. .... ___") << std::endl;

	//test encode
		
	std::cout << instance.encode("a") << std::endl;
	std::cout << instance.encode("b") << std::endl;
	std::cout << instance.encode("c") << std::endl;
	std::cout << instance.encode("d") << std::endl;
	std::cout << instance.encode("e") << std::endl;
	std::cout << instance.encode("f") << std::endl;
	std::cout << instance.encode("g") << std::endl;
	std::cout << instance.encode("h") << std::endl;
	std::cout << instance.encode("i") << std::endl;
	std::cout << instance.encode("j") << std::endl;
	std::cout << instance.encode("k") << std::endl;
	std::cout << instance.encode("l") << std::endl;
	std::cout << instance.encode("m") << std::endl;
	std::cout << instance.encode("n") << std::endl;
	std::cout << instance.encode("o") << std::endl;
	std::cout << instance.encode("p") << std::endl;
	std::cout << instance.encode("q") << std::endl;
	std::cout << instance.encode("r") << std::endl;
	std::cout << instance.encode("s") << std::endl;
	std::cout << instance.encode("t") << std::endl;
	std::cout << instance.encode("u") << std::endl;
	std::cout << instance.encode("v") << std::endl;
	std::cout << instance.encode("w") << std::endl;
	std::cout << instance.encode("x") << std::endl;
	std::cout << instance.encode("y") << std::endl;
	std::cout << instance.encode("z") << std::endl;
	
	std::cout << instance.encode("hello") << std::endl;
	
	system("pause");
}