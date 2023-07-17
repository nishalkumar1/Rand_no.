#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> v;

    for (int i = 0; i < 5; i++)
    {
        int element;
        cin >> element;
        v.push_back(element); 
    }

    // v.insert(v.begin()+2, 8);
    v.erase(v.end()-2);

     for (int i = 0; i < v.size(); i++)
     {
         cout<<v[i]<<" ";
    }

    // Foreach loop

    // for (int ele : v)
    // {
    //     cout << ele <<" ";
    // }

    cout << endl;

    return 0;
}