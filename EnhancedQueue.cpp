#include <iostream>
#include <vector>
#include <queue>
using namespace std;

//Enhanced Queue: 
//almost everything in less than linear time
//SELF BALANCING BINARY SEARCH TREE (AVL or RBT)

class RBT{

};

class EnhancedQueue{
private:
    //pretend there is a RBT library class
    RBT _tree;
    queue<int> _q;
    int _size;

public:


    void enqueue(int data){ // O(logn)
        _q.push(data); //O(1)
        _tree.insert(data); //O(logn)
        _size++; //O(1)
    }

    void dequeue(){

    }

    int front(){

    }

    bool isEmpty(){

    }

    int size(){
        return _size;
    }

    bool contains(int x){ //O(logn)
        RBTNode* head = _tree.root();
        while (head != nullptr){
            //binary search O(logn)
        }
    }

};


int main(){
    return 0;
}