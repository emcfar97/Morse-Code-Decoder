#include "morseCode.h"

morseCode::morseCode(std::string str)
{	
	std::ifstream file;
	file.open("morse.txt");
	std::string line;
	Binary_Search_Tree<std::string> tree;

	while (std::getline(file, line)) {
		std::string letter, morse;
		letter = line.substr(0,1);
		morse = line.substr(1, line.size());

		tree.insert(morse, letter);
		std::string h = tree.to_string();

	}
	std::vector<std::string> encoding = encode(str);
}

std::vector<std::string> morseCode::encode(std::string userStr)
{
	std::vector<std::string> encoding;
	std::map<char, std::string> morse;

	morse['a'] = "._ ";
	morse['b'] = "_... ";
	morse['c'] = "_._ ";
	morse['e'] = "_.. ";
	morse['f'] = ". ";
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

std::string morseCode::decode(morseCode encoding)
{
	return ".";
}
	/*

	string word;  //final word decoded
	string morseLetter; //variable to hold each morse code letter
	string letter;  //variable to hold each alphabet letter
	BTNode origin;  //node pointer to root node of morse tree

	istringstream sin;  //create string stream to read each letter

	while (sin >> morseLetter) {	// go through each letter in the code
									// find what the letter is from the tree
		letter = Binary_Search_Tree.find(morseLetter);

		//add letter to word
		word += letter;
	}
	return word;

}
*/