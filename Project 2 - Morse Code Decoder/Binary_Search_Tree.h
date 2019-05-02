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
	virtual bool insert(const Item_Type& item, const Item_Type& letter);

	virtual bool erase(const Item_Type& item);

	const Item_Type* min() const;

	const Item_Type* min(BTNode<Item_Type>* local_root) const;

	const Item_Type* max() const;

	const Item_Type* max(BTNode<Item_Type>* local_root) const;

	const Item_Type* find(const Item_Type& target) const;
private:

	// Private Member Functions
	virtual bool insert(BTNode<Item_Type>*& local_root, const Item_Type& item, const Item_Type& letter);

	virtual bool erase(BTNode<Item_Type>*& local_root,
		const Item_Type& item);

	const Item_Type* find(BTNode<Item_Type>* local_root,
		const Item_Type& target) const;

	virtual void replace_parent(
		BTNode<Item_Type>*& old_root,
		BTNode<Item_Type>*& local_root);

}; // End binary search tree

template<typename Item_Type>
const Item_Type* Binary_Search_Tree<Item_Type>::min() const {
	return min(this->root);

}

template<typename Item_Type>
const Item_Type* Binary_Search_Tree<Item_Type>::min(BTNode<Item_Type>* local_root) const {
	if (local_root == NULL)
		return NULL;

	if (local_root->left == NULL)
		return &(local_root->data);
	return min(local_root->left);
}

template<typename Item_Type>
const Item_Type* Binary_Search_Tree<Item_Type>::max() const {
	return max(this->root);

}

template<typename Item_Type>
const Item_Type* Binary_Search_Tree<Item_Type>::max(BTNode<Item_Type>* local_root) const {
	if (local_root == NULL)
		return NULL;

	if (local_root->right == NULL)
		return &(local_root->data);
	return max(local_root->right);
}


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
				return &(local_root->data);
			}
		}
	}
}

template<typename Item_Type>
bool Binary_Search_Tree<Item_Type>::insert(const Item_Type& item, const Item_Type& letter) {
	
	return insert(this->root, item, letter);
}

template<typename Item_Type>
bool Binary_Search_Tree<Item_Type>::insert(BTNode<Item_Type>*& local_root, const Item_Type& item, const Item_Type& letter) {
	
	std::string temp = "temp";

	//create a dummy node for the root
	if (local_root == NULL) {
		local_root = new BTNode<Item_Type>(temp);
	}

	BTNode<Item_Type>* temp_root = local_root;

	for (int i = 0; i < item.size(); i++) {


		//depending on the current character move down the tree
		if (item[i] == '.') {
      			if (temp_root->left == NULL) { //at a null, create a new temporary node to allow us to traverse the tree
					temp_root->left = new BTNode<Item_Type>(temp);
      			}
				temp_root = temp_root->left;
		}
		else if (item[i] == '_') {
      			if (temp_root->right == NULL) {
					temp_root->right = new BTNode<Item_Type>(temp);
      			}
				temp_root = temp_root->right;
		}
    	else {
      		//cout << "invalid morse character";
     	 	break;
      		//FIXME: some sort of error message
    	}
	}
	
	//once the last character is reached the letter can be added as data to the current node
  	if (temp_root == NULL) {	//the node should not be null so throw an error
    		//cout << "error";	//FIXME: is this an error?
    		return false;
  	}
  	else if (temp_root->data == temp) {	//insert letter at correct node
			temp_root->data = letter;
    		return true;
  	}
  	else {	//the node already exists so the letter cannot be inserted
    		return false;
  	}

	temp_root = NULL;
}


template<typename Item_Type>
bool Binary_Search_Tree<Item_Type>::erase(const Item_Type& item) {
	return erase(this->root, item);
}

template<typename Item_Type>
bool Binary_Search_Tree<Item_Type>::erase(BTNode<Item_Type>*& local_root, const Item_Type& item) {
	if (local_root == NULL) {
		return false;
	}
	else {
		if (item < local_root->data)
			return erase(local_root->left, item);
		else if (local_root->data < item)
			return erase(local_root->right, item);
		else {
			BTNode<Item_Type>* old_root = local_root;
			if (local_root->left == NULL) {
				local_root = local_root->right;
			}
			else if (local_root->right == NULL) {
				local_root = local_root->left;
			}
			else {
				replace_parent(old_root, old_root->left);
			}
			delete old_root;
			return true;
		}
	}
}

template<typename Item_Type>
void Binary_Search_Tree<Item_Type>::replace_parent(BTNode<Item_Type>*& old_root, BTNode<Item_Type>*& local_root) {
	if (local_root->right != NULL) {
		replace_parent(old_root, local_root->right);
	}
	else {
		old_root->data = local_root->data;
		old_root = local_root;
		local_root = local_root->left;
	}
}



#endif
