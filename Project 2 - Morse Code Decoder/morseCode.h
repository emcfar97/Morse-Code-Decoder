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
	morseCode(string str);
	vector<string> encode(string userStr);
	string decode(string encoding);

//private:
	char encoding;
};
