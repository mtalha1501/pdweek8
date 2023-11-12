#include<iostream>
using namespace std;

bool areAllElementsIdentical(string[], int);
main(){
    int size;
    cout << "Enter the size of Array: ";
    cin  >> size;
    string elements[size];
    for(int idx= 1;idx<=size;idx++){
        cout << "Enter Element " << idx << ": ";
        cin  >> elements[idx-1];
    }
    cout << areAllElementsIdentical(elements,size);
}
bool areAllElementsIdentical(string elements[], int size){
    string element = elements[0];
    for(int i=1;i<size;i++){
        if(element != elements[i])
            return false;
    }
    return true;
}