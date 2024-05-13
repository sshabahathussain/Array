#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector <int> v{1,3,5,7,2,4,6};
    int sum = 9;
    for (size_t i = 0; i < v.size(); i++)
    {
        for (size_t j = i+1; j < v.size(); j++)
        {
            if(v[i] + v[j] == sum) {
                cout<< "(" << v[i] << "," << v[j] << ")" <<endl;
            }
        }
        
    }
    
    return 0;
}