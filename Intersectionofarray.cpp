#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int main() {
    int arr[] = {1,2,3,4,5};
    int brr[] = {2,3,4,5,7};
    vector <int> ans;
    for (int i = 0; i < 5; i++)
    {
        /* code */
        for (int j = 0; j < 5; j++)
        {
            /* code */
            if(arr[i] == brr[j]) {
                brr[j] = INT_MIN;
                ans.push_back(arr[i]);
                // arr[i] = INT_MIN;
            }
            
        }
        
    }

     
    
    for(auto value : ans) {
        cout<<value <<" ";
    }
    
    return 0;
}