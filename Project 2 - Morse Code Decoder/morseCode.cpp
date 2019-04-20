#include "morseCode.h"

morseCode::morseCode(std::string file)
{
	std::fstream fin(file);
	tree = encode(fin);
}

BTNode<char> morseCode::encode(std::fstream file)
{

}


std::string morseCode::decode()
{

}
