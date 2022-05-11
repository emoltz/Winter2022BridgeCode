#include <iostream>
#include <queue>
using namespace std;



//for printing red black trees. Note that you have to create a redblacktree class
template<class T>
void RedBlackNode<T>::prettyPrint(int indent) const {
    if (right != nullptr) {
        right->prettyPrint(indent + 1);
    }
    int margin = indent * 2;
    for (int i = 0; i < margin; ++i) {
        cout << '\t';
    }
    cout << "DATA: " << data << endl;
    for (int i = 0; i < margin; ++i) {
        cout << '\t';
    }
    cout << "COLOR: " << (color == RED ? "RED" : "BLACK") << endl;
    if (left != nullptr) {
        left->prettyPrint(indent + 1);
    }
}

// how would you print the minimum value in a queue (unsorted)?
// pseudo-code:
/*
 * 1) copy queue to temp queue
 * 2) pop the temp queue one at a time
 * 3) keep track of minimum with .front()
 * 4) pop() and continue until queue is empty
 * */

/* Sample 2:
 * Say you have a binary search tree. Here is the node class:
 */
class node{
public:
    int data;
    BST* left;
    BST* right;
    BST* parent;
    //etc.
};
/* Write a recursive function that returns the number of null child pointers in the tree
 */


int main(){
    queue<int> q;
    q.push(5);
    q.size();

}