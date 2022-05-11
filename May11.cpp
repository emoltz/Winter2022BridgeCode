#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

int main(){
    //Given that an ifstream object has been used to 
    //read the entire file and is pointing to, 
    //but has not yet read, the EOF marker. What will be the result of calling .eof() on this object?

    //.eof() is a boolean


    // true:  I
    // false: I 

    //numChars = 12
    ifstream file;
    file.open("input.txt");
    int numChars = 0;

    char c;

    // # This will print a True
    while(file.get(c)){
        cout << c;
    }

    //// # This will print a False
    // for(int i = 0; i < 12; i++){
    //     c = file.get();
    //     cout << c;
    // }

    cout << endl;
    if (file.eof()){
        cout << "True";
    }
    else{
        cout << "False";
    }



    file.close();
    return 0;
}