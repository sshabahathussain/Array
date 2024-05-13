#include<iostream>
#include<vector>
#include<climits>
using namespace std;
void unionOfArrayElements(int arr1[],int &n1,int arr2[],int &n2,vector <int>& ans) {
    // This logic for duplicate elements
     for (int i = 0; i < n1; i++)
    {
        /* code */
        for (int j = 0; j < n2; j++)
        {
            /* code */
            if(arr1[i] == arr2[j]) {
                arr2[j] = INT_MIN;
                // arr[i] = INT_MIN;
            }
            
        }
        
    }

    for (int i = 0; i < n1; i++)
    {
        /* code */
        ans.push_back(arr1[i]);
    }
    for (int i = 0; i < n2; i++)
    {
        /* code */
        ans.push_back(arr2[i]);
    }
    
    
}

int main() {
    int arr1[] = {1,3,5,6,7};
    int size1 = sizeof(arr1)/sizeof(int);
    int arr2[] = {3,6,9};
    int size2 = sizeof(arr2)/sizeof(int);
    vector <int> ans;
    unionOfArrayElements(arr1,size1,arr2,size2,ans);
    // for (int i = 0; i < ans.size(); i++)
    // {
    //     /* code */
    //     cout<< ans[i]<<" ";
    // }

    for(auto value : ans) {
        if(value != INT_MIN)
        cout<<value <<" ";
    }
    
    return 0;
}