#include <string>
#include <sstream>
#include "morsecode.h"
#include "BTNode.h"

using namespace std;

string morseCode::decode (string code) {

  string word;  //final word decoded
  string morseLetter; //variable to hold each morse code letter
  string letter;  //variable to hold each alphabet letter
  BTNode origin;  //node pointer to root node of morse tree

  istringstream sin;  //create string stream to read each letter

  while (sin >> morseLetter) { //go through each letter in the code

    //find what the letter is from the tree
    letter = find(origin, morseLetter);

    //add letter to word
    word += letter;
  }

  return word;

}
