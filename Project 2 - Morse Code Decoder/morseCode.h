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
	morseCode(string str);
	vector<string> encode(string userStr);
	string decode();

//private:
	char encoding;
};
