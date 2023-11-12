#include<iostream>
using namespace std;

bool canDisplay(string);
string longest7SegmantWord(string[],int);
main(){
    int length;
    cout << "Enter the number of words: ";
    cin  >> length;
    string words[length];
    cout << "Enter the words, one by one:\n";
    for(int i=0;i<length;i++){
        cin >> words[i];
    }
    cout << "Longest 7-segment word: " << longest7SegmantWord(words,length);
}

string longest7SegmantWord(string words[],int length){
    string result = "";
    for (int i=0;i<length;i++){
        if(canDisplay(words[i])){
            if(result == ""){
                result = words[i];
            }else{
                if(words[i].length() > result.length()){
                    result = words[i];
                }
            }
        }
    }
    return result;
}

bool canDisplay(string word){
    int idx = 0;
    string negatedLetters = "kmvwx";
    while(negatedLetters[idx] != '\0'){
        for(int i=0;i<word.length();i++){
            if(word[i] == negatedLetters[idx]){
                return false;
            }
        }
        idx++;
    }
    return true;
}