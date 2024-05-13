#include<iostream>
using namespace std;
void printExtreme(int arr[], int n) {
    int start = 0, end = n - 1;
    while(start <= end) {
        if(start == end) {
            cout<<arr[start]<<" ";
        }
        else{
            cout<<arr[start]<<" ";
        cout<<arr[end]<<" ";
        }
        start++;
        end--;
    }
}
int main() {
    int arr[] = {1,3,5,7,8,2,6,0,4,9};
    int size = sizeof(arr)/sizeof(int);
    printExtreme(arr,size);
    return 0;
}