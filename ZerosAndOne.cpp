#include <iostream>
#include <vector>
using namespace std;
int main() {
    // int arr[] = {1,0,0,1,0,1};
    int arr[] = {0,1,1,0,1,0,1,0,1};
    int size = sizeof(arr)/sizeof(int);
    int start = 0, end = size -1, i = 0;
    while(i != end) {
        if(arr[i] == 0) {
            swap(arr[i],arr[start]);
            i++;
            start++;
        }
        else {
            swap(arr[i],arr[end]);
            end--;
        }
    }
    for (int i = 0; i < size; i++)
    {
        /* code */
        cout<<arr[i] <<" ";
    }
    
    return 0;
}