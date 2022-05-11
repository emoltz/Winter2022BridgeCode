#include <iostream>
#include <vector>
using namespace std;

class BST;
class BSTNode;

class BSTNode{
private:
    int _data;
    BSTNode *_parent;
    BSTNode *_left;
    BSTNode *_right;
public:
    BSTNode(int newData, BSTNode* newParent, BSTNode* newLeft, BSTNode* newRight){
        _data = newData;
        _parent = newParent;
        _right = newRight;
        _left = newLeft;
    }
};

class BST{
private:
    BSTNode* _root;
public:
    BST(){
        _root = nullptr;
    }

    BST(BSTNode* root){
        _root = root;
    }

    // feel free to add or substract parameters or do whatever to any of these functions
    void insert(int data);
    void constructBSTVector(vector<int> v); // take in a vector and create a binary search tree from it # O(n) time
    void constructBSTarray(int *v);

    BSTNode* findMin();
    BSTNode* findMax();
    BSTNode* remove();
    BSTNode* find(int x);
    bool exists(int x); //is x in BST?

};

int main(){
    //test it out here!
}
