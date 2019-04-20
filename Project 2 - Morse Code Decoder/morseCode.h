#pragma once
#include <fstream>
#include <string>
#include <iostream>
#include <vector>
#include <map>
#include "Binary_Search_Tree.h"
class morseCode
{
public:
	morseCode(std::string str);
	std::vector<std::string> encode(std::string userStr);
	std::string decode();

//private:
	char tree;
};
