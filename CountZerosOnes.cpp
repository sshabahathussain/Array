#include <iostream>
using namespace std;
void printArray(int arr[],int n) {
     for (int i = 0; i < n; i++)
    {
        cout<< arr[i]<<" ";

    }
    cout<<endl;
}
void countZerosOne(int arr[],int size,int numZero,int numOne) {
    
    for(int i = 0; i<size; i++) {
        if(arr[i] == 0) {
            numZero++;
        }
        if(arr[i]==1) {
            numOne++;
        }
    }
    cout<<"Number of Zeros = " <<numZero<<endl;
    cout<<"Number of Ones = " <<numOne<<endl;
}

int main() {
    int arr[] = {0,1,1,1,0,0,0,0,1,0,1,0,1};
    int size = sizeof(arr)/sizeof(int);
    int numZero = 0, numOne = 0;
    printArray(arr,size);
    countZerosOne(arr,size,numZero,numOne);
    return 0;
}