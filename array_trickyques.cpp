#include <iostream>
using namespace std;

int main()
{

    int array[] = {1, 2, 3, 4, 5};

    int n = 5;
    int k = 4;

    int ansarray[5];
    int j = 0;

    // inserting last k element the ansarray
    for (int i = n - k; i < n; i++)
    {
        ansarray[j++] = array[i];
    }

    // inserting n-k element in the ansarray
    for (int i = 0; i <= k; i++)
    {
        ansarray[j++] = array[i];
    }

    for (int i = 0; i < 5; i++)
    {
        cout << ansarray[i]<<" ";
    }

    

    return 0;
}