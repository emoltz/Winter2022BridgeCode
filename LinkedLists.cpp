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
    int _height;
    int _weight;
    int _data;
    node *_next;
};

class linkedList{
private:
    node *_head;
    node *_tail;
    node *sorted;
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

    void insertionSort(Node *headref){
        sorted = nullptr;
        node* current = headref;

        while (current != nullptr){
            node* next = current->_next;
            sortedInsert(current);

            current = next;
        }

        head = sorted;
    }

    void sortedInsert(node* newNode){
        if(sorted == nullptr || sorted->_data >= newNode->_data){
            newNode->next = sorted;
            sorted = newNode;
        }
        else{
            node* current = sorted;

            while (current->next != nullptr && current->next->_data < newNode->_data){
                current = current->next;
            }
            newNode->_next = current->_next;
            current->_next = newNode;
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
                node* p2 = p1._next;

                if (p1->_data >= p2._data){
                    //update the link!
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


//printing another class's data
class class1{
public:
    int _data;
    bool _t;
};

class class2{
public:
    class1 *ptr;
    int _data2;
    bool _s;

    friend ostream &operator << (ostream &outs, class2 &obj){
        outs << "This object: " << obj._data2 << endl;

        if (obj.ptr != nullptr){
            //print class1's _data
            outs << "Class 1 Object:" << obj.ptr->_data << endl;
        }
        
        return outs;
    }
};

int main(){
    linkedList l;
    l.add_node(1);
    l.add_node(2);
    l.add_node(3);
    l.add_node(4);

    // l.display();
    

    // vector<int> v;
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);
    // vector<int>::iterator ptr;

    // for (ptr = v.begin(); ptr < v.end(); ptr++){
    //     cout << *ptr << endl;
    // }
    
    class2 two;
    two._data2 = 5;
    class1 *p = new class1;
    p->_data = 10;
    two.ptr = p;
    cout << two;



    return 0;
}