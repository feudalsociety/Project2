#include "AVLTree.h"
bool AVLTree::Insert(Gamedata* pGame){

	return true; // no duplication
}
void AVLTree::Print(){

}

Gamedata* AVLTree::Search(int id){
	return NULL;
}

int GetHeight(AVLNode * pRoot)
{
	int leftH = GetHeight(pRoot->getLeft);
	int rightH = GetHeight(pRoot->getRight);

	if (leftH > rightH)
	{
		return leftH;
	}
	else return rightH;
	
	if (pRoot->getLeft() != nullptr) leftH++;
	else if (pRoot->getRight() != nullptr) rightH++;

}
