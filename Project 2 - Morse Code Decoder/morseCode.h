#pragma once
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include <map>
#include "Binary_Search_Tree.h"
#include "BTNode.h"

class morseCode
{
public:
	morseCode(std::string str);
	std::string encode(std::string userStr);
	std::string decode(std::string morse);

//private:
	Binary_Search_Tree<std::string> tree;
};
