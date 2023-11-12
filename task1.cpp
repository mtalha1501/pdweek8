#include<iostream>
using namespace std;

bool isLengthEven(string);
main(){
    string word;
    cout << "Enter a String: ";
    cin  >> word;
    cout << isLengthEven(word);
}

bool isLengthEven(string word){
    int idx = 0;
    while(word[idx] != '\0'){
        idx++;
    }
    return (idx%2==0);
}