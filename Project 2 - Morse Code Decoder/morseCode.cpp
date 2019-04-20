#include "morseCode.h"

morseCode::morseCode(std::string file)
{
	std::fstream fin(file);
	char tree = encode(fin);
}

char morseCode::encode(std::fstream file)
{

}


std::string morseCode::decode()
{

}
