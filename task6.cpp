#include<iostream>
using namespace std;

int coloringTime(string[], int);
main(){
    int size;
    cout << "Enter the size of Array: ";
    cin  >> size;
    string colors[size];
    for(int idx= 1;idx<=size;idx++){
        cout << "Enter Element " << idx << ": ";
        cin  >> colors[idx-1];
    }
    cout << "Time to color: " << coloringTime(colors,size)<< " seconds";
}
int coloringTime(string cols[], int size){
    int time = size*2; 
    string previous= cols[0];
    for(int i=1;i<size;i++){
        if(cols[i] != previous){
            time++;
            previous = cols[i];
        }
    }
    return time;
}