#include<iostream>
using namespace std;

void evenOddTransform(int[], int, int);
main(){
    int size,num;
    cout << "Enter the size of Array: ";
    cin  >> size;
    int elements[size];
    for(int idx= 1;idx<=size;idx++){
        cout << "Enter Element " << idx << ": ";
        cin  >> elements[idx-1];
    }
    cout << "Enter number of times even-odd transformation need to be done: ";
    cin  >> num;
    evenOddTransform(elements,size,num);
}

void evenOddTransform(int elements[], int size, int n){
    cout << "[";
    for(int i=0;i<size;i++){
        if(elements[i] %2 == 0){
            if( i==0)
                cout << elements[i]- 2*n;
            else
                cout << ", " << elements[i]- 2*n;
        }else{
            if( i==0)
                cout << elements[i]+ 2*n;
            else
                cout << ", " << elements[i] + 2*n;
        }
    }
    cout << "]";
}