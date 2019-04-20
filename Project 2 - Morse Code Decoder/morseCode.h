#pragma once
#include <fstream>
#include <string>
#include "Binary_Search_Tree.h"
class morseCode
{
public:
	morseCode(std::string file);
	char encode(std::fstream file);
	std::string decode();
private:
	char tree;
};
