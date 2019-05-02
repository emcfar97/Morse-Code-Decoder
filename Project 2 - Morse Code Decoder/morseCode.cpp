#include "morseCode.h"

morseCode::morseCode()
{	
	std::ifstream file;
	file.open("morse.txt");
	std::string line;

	while (std::getline(file, line)) {
		std::string letter, morse;
		letter = line.substr(0,1);
		morse = line.substr(1, line.size());

		tree.insert(morse, letter);
		std::string h = tree.to_string();

	}
	file.close();
}

std::string morseCode::encode(std::string userStr)
{
	std::string encoding;
	std::map<char, std::string> morse;

	morse['a'] = "._";
	morse['b'] = "_...";
	morse['c'] = "_._.";
	morse['d'] = "_..";
	morse['e'] = ".";
	morse['f'] = ".._.";
	morse['g'] = "__.";
	morse['h'] = "....";
	morse['i'] = "..";
	morse['j'] = ".___";
	morse['k'] = "_._";
	morse['l'] = "._..";
	morse['m'] = "__";
	morse['n'] = "_.";
	morse['o'] = "___";
	morse['p'] = ".__.";
	morse['q'] = "__._";
	morse['r'] = "._.";
	morse['s'] = "...";
	morse['t'] = "_";
	morse['u'] = ".._";
	morse['v'] = "..._";
	morse['w'] = ".__";
	morse['x'] = "_.._";
	morse['y'] = "_.__";
	morse['z'] = "__..";

	for (std::string::iterator it = userStr.begin(); it != userStr.end(); ++it) {
		encoding += morse.find(*it)->second;
		encoding += " ";
	}
	return encoding;
}

std::string morseCode::decode(std::string morse)
{

	std::string word;  //final word decoded
	std::string morseLetter; //variable to hold each morse code letter
	std::string letter;  //variable to hold each alphabet letter

	std::istringstream sin(morse);  //create string stream to read each letter

	while (sin >> morseLetter) {	// go through each letter in the code
									// find what the letter is from the tree
		letter = *tree.find(morseLetter);

		//add letter to word
		word += letter;
	}
	return word;

}
