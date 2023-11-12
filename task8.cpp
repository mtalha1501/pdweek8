#include <iostream>
using namespace std;

string findBrokenKeys(string,string);
main()
{
    string correctPhrase,actualTyped;
    cout << "Enter the correct phrase: ";
    cin  >> correctPhrase;
    cout << "Enter what you actually typed: ";
    cin  >> actualTyped;

    cout << "Broken keys: " << findBrokenKeys(correctPhrase, actualTyped);
}

string findBrokenKeys(string correct,string actual){
    bool isBrokenKey;
    bool isALreadyPresent;
    string brokenKeys="";
    for(int i=0;i<correct.length();i++){
        isBrokenKey = true;
        isALreadyPresent = false;
        for(int n=0;n<actual.length();n++){
            if(correct[i] == actual[n]){
                isBrokenKey = false;
                break;
            }
        }
        for(int j=0;j<brokenKeys.length();j++){
            if(brokenKeys[j]== correct[i]){
                isALreadyPresent = true;
            }
        }
        if(isBrokenKey){
            if(!(isALreadyPresent)){
                brokenKeys += correct[i];
            }
        }
    }
    return brokenKeys;
}