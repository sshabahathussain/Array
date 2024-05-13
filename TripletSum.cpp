#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v{10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int sum = 120;
    for (size_t i = 0; i < v.size(); i++)
    {
        for (size_t j = i + 1; j < v.size(); j++)
        {
            for (size_t k = j + 1; k < v.size(); k++)
            {
                for (size_t l = k + 1; l < v.size(); l++)
                {
                    if (v[i] + v[j] + v[k] + v[l] == sum)
                    {
                        cout << "(" << v[i] << "," << v[j] << "," << v[k] << "," << v[l] << ")" << endl;
                    }
                }
            }
        }
    }

    return 0;
}