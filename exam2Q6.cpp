#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> input;
    int inputInteger;

    while (inputInteger != 0){
        cin >> inputInteger;
        input.push_back(inputInteger);
    }
    vector<int> mostFrequent;
    vector<int> numberOfDigits;
    int temp;
    for (int i = 0; i < input.size(); i++){
        mostFrequent.push_back(0);
        numberOfDigits.push_back(0);
        temp = input[i];
        while (temp > 0){
            temp /= 10;
            numberOfDigits[i]++;
        }
    }

    int mostFrequentDigit = 0;
    for (int i = 0; i < input.size(); i++){
        if (mostFrequent[i] > mostFrequentDigit){
            mostFrequentDigit = i;
        }
    }

    cout << "The most frequent length is: " << mostFrequentDigit << endl;
    cout << "Numbers with most frequent length are: " << endl;

    for (int i = 0; i < input.size(); i++){
        if (numberOfDigits[i] == mostFrequentDigit){
            cout << input[i] << endl;
        }
    }

    return 0;
}