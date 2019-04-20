#pragma once
#include <fstream>
#include <string>
class morseCode
{
public:
	morseCode(std::string file);
	BTNode<char> encode(std::fstream file);
	std::string decode();
private:
	BTNode<char> tree;
};

/** A node for a Binary Tree. */
template<typename Item_Type> 
struct BTNode {
	// Data Fields
	Item_Type data;
	BTNode<Item_Type>* left;
	BTNode<Item_Type>* right;

	// Constructor
	BTNode(
		const Item_Type& the_data,
		BTNode<Item_Type>* left_val = NULL,
		BTNode<Item_Type>* right_val = NULL
	):
		data(the_data), left(left_val), right(right_val) {}

	// Destructor (to avoid warning message)
	virtual ~BTNode() {}

	// to_string
	virtual std::string to_string() const {
		std::ostringstream os;
		os << data;
		return os.str();
	}
};
