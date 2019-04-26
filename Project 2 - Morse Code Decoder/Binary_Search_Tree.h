#ifndef BINARY_SEARCH_TREE_H
#define BINARY_SEARCH_TREE_H

#include "Binary_Tree.h"


template<typename Item_Type>
class Binary_Search_Tree : public Binary_Tree<Item_Type>
{
public:
	// Constructor
	Binary_Search_Tree() : Binary_Tree<Item_Type>() {}

	// Public Member Functions
	virtual bool insert(const Item_Type& item);

	const Item_Type* find(const Item_Type& target) const;
private:

	// Private Member Functions

	virtual bool insert(BTNode<Item_Type>*& local_root,
		const Item_Type& item);

	const Item_Type* find(BTNode<Item_Type>* local_root,
		const Item_Type& target) const;


}; // End binary search tree



template<typename Item_Type>
const Item_Type* Binary_Search_Tree<Item_Type>::find(
	const Item_Type& item) const {
		return find(this->root, item);
}

template<typename Item_Type>
const Item_Type* Binary_Search_Tree<Item_Type>::find(BTNode<Item_Type>* local_root,
	const Item_Type& target) const {
		if (local_root == NULL)
			return NULL;	//FIXME: THIS SHOULD MAYBE BE AN ERROR MESSAGE INSTEAD?
		else {
			//iteratively traverse BST
			for (int i = 0; i < target.size(); i++) {
				if (target[i] == '.') {
					local_root = local_root->left;
				}
				else if (target[i] == '_') {
					local_root = local_root->right;
				}

				//if the last character of the morse code letter is reached return the data of the current node
				if (i == target.size() - 1) {
					return local_root->data;
				}
			}
		}
}


template<typename Item_Type>
bool Binary_Search_Tree<Item_Type>::insert(const Item_Type& item) {
	return insert(this->root, item);
}

template<typename Item_Type>
//FIXME: ROOT OF TREE IS SUPPOSED TO BE NULL, HOW DO WE INSERT NODES
bool Binary_Search_Tree<Item_Type>::insert(BTNode<Item_Type>*& local_root, const Item_Type& item) {
	if (local_root == NULL) {
		local_root = new BTNode<Item_Type>(item);
		return true;
	}
	else {
		//iteratively
		/*for (int i = 0; i < item.size(); i++) {
			if (item[i] == '.') {
				local_root = local_root->left;
			}
			else if (item[i] == '_') {
				local_root = local_root->right;
			}

			if (i == item.size() - 1) {
				return local_root->data;
			}
		}*/

		//recursive
		/*if (item == '.')
			return insert(local_root->left, item);
		else if (item == '_')
			return insert(local_root->right, item);
		else
			return false;*/
	}
}

#endif
