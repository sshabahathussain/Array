#include<iostream>
#include<limits.h>
using namespace std;
void printArray(int arr[],int n) {
     for (int i = 0; i < n; i++)
    {
        cout<< arr[i]<<" ";

    }
    cout<<endl;
}
int maximumNumber(int arr[],int size,int maxNum) {
    for (size_t i = 0; i < size; i++)
    {
        /* code */
        if(arr[i] > maxNum) {
            maxNum = arr[i];
        }
    }
    return maxNum;
    
}
int minimumNumber(int arr[],int size, int miniNum) {
    for (size_t i = 0; i < size; i++)
    {
        /* code */
        if(arr[i] < miniNum) {
            miniNum = arr[i];
        }
    }
    return miniNum;
}

int main() {
    int maxNum = INT_MIN;
    int miniNum = INT_MAX;
    int arr[] = {2,4,1,6,8,9,10};
    int size = sizeof(arr) / sizeof(int);
    printArray(arr,size);
    int maximum = maximumNumber(arr,size,maxNum);
    int minimum = minimumNumber(arr,size,miniNum);
    cout<<"Maximum number = " << maximum<<endl;
    cout<<"Minimum number = " << minimum<<endl;
    return 0;
}