#include "morseCode.h"
using namespace std;

morseCode::morseCode(string str)
{
	vector<string> encoding = encode(str);
}

vector<string> morseCode::encode(string userStr)
{
	vector<string> encoding;
	map<char, string> morse;

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
	
	for (string::iterator it = userStr.begin(); it != userStr.end(); ++it) {
		encoding.push_back(morse.find(*it)->second);
	}
	return encoding;
}

string morseCode::decode(string encoding)
{
	string word;  //final word decoded
	string morseLetter; //variable to hold each morse code letter
	string letter;  //variable to hold each alphabet letter
	BTNode origin;  //node pointer to root node of morse tree

	istringstream sin;  //create string stream to read each letter

	while (sin >> morseLetter) {	// go through each letter in the code
									// find what the letter is from the tree
		letter = find(origin, morseLetter);

		//add letter to word
		word += letter;
	}
	return word;

}
