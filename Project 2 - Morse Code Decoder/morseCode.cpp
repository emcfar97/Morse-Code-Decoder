#include "morseCode.h"

morseCode::morseCode(std::string str)
{
	std::vector<std::string> tree = encode(str);
}

std::vector<std::string> morseCode::encode(std::string userStr)
{
	std::vector<std::string> encoding;
	std::map<char, std::string> morse;

	morse['a'] = "._ ";
	morse['b'] = "_... ";
	morse['c'] = "_._ ";
	morse['e'] = "_.. ";
	morse['f'] = ".";
	morse['g'] = ".._. ";
	morse['h'] = ".... ";
	morse['i'] = ".. ";
	morse['j'] = ".____ ";
	morse['k'] = "_._ ";
	morse['l'] = "._.. ";
	morse['m'] = "__ ";
	morse['n'] = "_. ";
	morse['o'] = "___ ";
	morse['p'] = ".__. ";
	morse['q'] = "__._ ";
	morse['r'] = "._. ";
	morse['s'] = "... ";
	morse['t'] = "_ ";
	morse['u'] = ".._ ";
	morse['v'] = "..._ ";
	morse['w'] = ".__ ";
	morse['x'] = "_.._ ";
	morse['y'] = "_.__ ";
	morse['z'] = "__.. ";

	for (std::string::iterator it = userStr.begin(); it != userStr.end(); ++it) {
		encoding.push_back(morse.find(*it)->second);
	}
	return encoding;
}

std::string morseCode::decode()
{
	return " ";
}
