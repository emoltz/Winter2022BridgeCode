#include <iostream>
#include <stack>
#include <queue>
#include <iterator>
#include <list>
using namespace std;


class node;
class linkedList;

class node{
    public:
    int _data;
    node *_next;
};

class linkedList{
private:
    node *_head;
    node *_tail;
    
public:

    linkedList(){
        _head = nullptr;
        _tail = nullptr;
    }

    node* front(){
        return _head;
    }
    node* back(){
        return _tail;
    }

    void add_node(int n){
        
        node *temp = new node;
        temp->_data = n;
        temp->_next = nullptr;

        //case 1: there is no list!
        if (_head == nullptr){
            _head = temp;
            _tail = temp;
        }
        else{
            //case 2: there is a list already
            _tail->_next = temp;
            _tail = _tail->_next;
        }
        
    }

    void add_node_noTail(int n){
        node* temp = new node;
        temp->_data = n;
        temp->_next = nullptr;

        if (_head == nullptr){
            _head = temp;
        }
        else{
            node* itr = _head;
            while (itr->_next != nullptr){
                itr = itr->_next;
            }
            temp->_next = temp;
        }

    }
    
    void display(){
        node *temp = _head;
        while (temp != nullptr){
            cout << temp->_data << endl;
            temp = temp->_next;
        }
    }

    void displayRecursion(node *head){
        if (head != nullptr){
            cout << head->_data << endl;
            displayRecursion(head->_next);
        }
    }

   

    void bubbleSortLinkedLists(int count){
        node** h;
        int swapped;
        for(int i = 0; i < count; i++){
            h = &_head;
            swapped = 0;
            
            for(int j = 0; j < count - i - 1; j++){
                node* p1 = *h;
                node* p2 = p1->_next;

                if (p1->_data >= p2->_data){
                    //update the link!
                    //there is an issue in the line below -- see if you can debug it! Hint: it may require a custom function
                    *h = swap(p1, p2);
                    swapped = 1;
                }
                h = &(*h)->_next;
                if (swapped == 0){
                    break;
                }
            }
        }
    }

    



    bool search(int x){
        node *temp = _head;
        while (temp != nullptr){
            if (temp->_data == x){
                return true;
            }
            else{
                //we haven't found it (yet)
                temp = temp->_next;
            }
        }
        return false;
    }
};

bool linkedListSearch(node* front, int x){
    node* temp = front;
        while (temp != nullptr){
            if (temp->_data == x){
                return true;
            }
            else{
                //we haven't found it (yet)
                temp = temp->_next;
            }
        }
        return false;
}

int main(){
    linkedList l;
    l.add_node(1);
    l.add_node(4);
    l.add_node(3);
    l.add_node(1);

    // l.display();


    // vector<int> v;
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);
    // vector<int>::iterator ptr;

    // for (ptr = v.begin(); ptr < v.end(); ptr++){
    //     cout << *ptr << endl;
    // }


    return 0;
}