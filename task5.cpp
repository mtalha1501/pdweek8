#include<iostream>
using namespace std;

int checkSameLetters(string, string);
main(){
    string first,second;
    cout << "Enter the first string: ";
    cin  >> first;
    cout << "Enter the second string: ";
    cin  >> second;
    cout << checkSameLetters(first, second);
}

int checkSameLetters(string first,string second){
    int count=0,n=0;

    int l1=0,l2=0;
    while (first[l1] != '\0'){
        l1++;
    }
    while (second[l2] != '\0'){
        l2++;
    }
    for(int i=0;i<l1;i++){
        for(int j=n;j<l2;j++){
            if(first[i]==second[j]){
                count++;
                n++;
                break;
            }
        }
            
    }
    return count;
}   