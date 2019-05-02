#include <iostream>
#include <string>
#include "morseCode.h"

int main() {
	
	morseCode instance = morseCode();
	/*std::string decoded = encoding.decode(encoding);*/

	//test decode
	/*
	morseCode beep(input);
	//a to m
	std::cout << beep.decode("._ _... _._. _.. . .._. __. .... .. .___ _._ ._.. __") << std::endl;
	//n to z
	std::cout << beep.decode("_. ___ .__. __._ ._. ... _ .._ ..._ .__ _.._ _.__ __..") << std::endl;
	*/

	//test encode
	
	morseCode boop(input);
	/*
	std::cout << boop.encode("a") << std::endl;
	std::cout << boop.encode("b") << std::endl;
	std::cout << boop.encode("c") << std::endl;
	std::cout << boop.encode("d") << std::endl;
	std::cout << boop.encode("e") << std::endl;
	std::cout << boop.encode("f") << std::endl;
	std::cout << boop.encode("g") << std::endl;
	std::cout << boop.encode("h") << std::endl;
	std::cout << boop.encode("i") << std::endl;
	std::cout << boop.encode("j") << std::endl;
	std::cout << boop.encode("k") << std::endl;
	std::cout << boop.encode("l") << std::endl;
	std::cout << boop.encode("m") << std::endl;
	std::cout << boop.encode("n") << std::endl;
	std::cout << boop.encode("o") << std::endl;
	std::cout << boop.encode("p") << std::endl;
	std::cout << boop.encode("q") << std::endl;
	std::cout << boop.encode("r") << std::endl;
	std::cout << boop.encode("s") << std::endl;
	std::cout << boop.encode("t") << std::endl;
	std::cout << boop.encode("u") << std::endl;
	std::cout << boop.encode("v") << std::endl;
	std::cout << boop.encode("w") << std::endl;
	std::cout << boop.encode("x") << std::endl;
	std::cout << boop.encode("y") << std::endl;
	std::cout << boop.encode("z") << std::endl;
	*/
	std::cout << boop.encode("hello") << std::endl;
	

	system("pause");
}