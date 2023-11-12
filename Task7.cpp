#include<iostream>
using namespace std;

void convertPINToDance(string);
main(){
    string pin;
    cout << "Enter your PIN (4 digits): ";
    cin  >> pin;
    convertPINToDance(pin);
}

void convertPINToDance(string pin){
    string moves[10] = {"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado","Pop", "Lock", "Arabesque"};
    if(pin.length()!= 4){
        cout << "Invalid input.";
        return;
    }
    for(int i=0;i<pin.length();i++){
        if(!isdigit(pin[i])){
            cout << "Invalid input.";
            return;
        }
    }
    string index;
    int crIndex,netIndex;
    for(int i=1;i<=pin.length();i++){
        index = pin[i-1];
        crIndex = stoi(index);
        netIndex = ((crIndex+i)%10)-1;
        if(netIndex<0){
            netIndex += 10;
        }
        if(i==1){
            cout << moves[netIndex];
        }else{
            cout << ", " << moves[netIndex];
        }
    }

}