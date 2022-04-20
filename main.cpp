#include <iostream>
//you have to include this library!
#include <fstream>
using namespace std;


class AirbenderCharacter{
public:
    int _ID;
    string _name;
    AirbenderCharacter* next;
    AirbenderCharacter(int ID, string name){
        _ID = ID;
        _name = name;
    }
};

int main(){
    ofstream out_stream;
    ifstream in_stream;
    
    out_stream.open("output.txt");
    in_stream.open("data.txt");

    if(!in_stream){
        cout << "Fail";
        exit(1);
    }

    int tempID;
    string tempName;
  
    while (in_stream >> tempName){
        in_stream >> tempID;
        out_stream << "ID: " << tempID << endl;
        out_stream << "Name: " << tempName << endl;
    }

    out_stream.close();
    in_stream.close();


    return 0;
}