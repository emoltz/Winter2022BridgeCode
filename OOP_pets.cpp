#include <iostream>
using namespace std;

// a pet store needs to catalogue all of their pets
// we need to include weight, height, breeds, age, cuteness level, species, name
// Type:
/*
    * Dogs
    * Cats
    * Birds
    * Mice
    * Snakes
*/

class Pet;

class Dogs;
class Cats;
class Birds;
class Mice;
class Snakes;

class Pet{
private:
    int weight;
    int height;
    int cuteness;
    string name;
    int age;
    string sound;
public:
    Pet(){
        weight = 0;
        height = 0;
        cuteness = 0;
        name = "";
        age = 0;
    }
    
    int getWeight(){
        return weight;
    }

    int getHeight(){
        return height;
    }

    void setWeight(int newWeight){
        weight = newWeight;
    }

    void getHeight(int newHeight){
        height = newHeight;
    }
    
    //TODO: ADD REST OF GETTERS AND SETTERS

    virtual double getHumanAge() = 0; //virtual function

};

class Dogs : public Pet{
private:
    //private data that is specific to dogs
    
public:
    Dogs(int newWeight, int newHeight, int newCuteness, int newAge){
        
    }
    Dogs(int newCuteness){
        
    }
};


class Cats : public Pet{
private:
    int numOfLives;
public:

};