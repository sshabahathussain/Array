#include<iostream>
using namespace std;
void printArray(int arr[],int n) {
     for (int i = 0; i < n; i++)
    {
        cout<< arr[i]<<" ";

    }
    cout<<endl;
}
void reverseArray(int arr[],int size/*,int start,int end*/) {
    int start = 0; int end = size -1;
    while(start<=end) {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int main() {
    int arr[] = {1,3,5,7,8,2,6,0,4,9};
    int size = sizeof(arr)/sizeof(int);
    // int start = 0, end = size - 1;
    // printArray(arr,size);
    // reverseArray(arr,size,start,end);
    printArray(arr,size);
    reverseArray(arr,size);
    printArray(arr,size);
    return 0;
}