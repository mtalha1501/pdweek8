#include<iostream>
using namespace std;

string containsSeven(int[], int);
main(){
    int size;
    cout << "Enter the size of Array: ";
    cin  >> size;
    int numbers[size];
    for(int idx= 1;idx<=size;idx++){
        cout << "Enter Element " << idx << ": ";
        cin  >> numbers[idx-1];
    }
    cout << containsSeven(numbers,size);
}
string containsSeven(int numbers[],int size){
    for(int i=0;i<size;i++){
        if((numbers[i]==7) || (numbers[i]%10==7)||(numbers[i]/10==7)){
            return "Boom!";
        }
    }
    return "there is no 7 in the array";
}