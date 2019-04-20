#pragma once
#include <fstream>
#include <string>
#include "Binary_Search_Tree.h"
class morseCode
{
public:
	morseCode(std::string str);
	char encode(std::string userString);
	std::string decode();

private:
	char tree;
};
