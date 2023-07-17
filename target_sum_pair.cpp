#include <iostream>
using namespace std;

int main()
{
    int array[] = {2, 3, 4, 5, 1};
    int targetsum = 5;
    int pairs = 0;
    int size=5;

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; i < size; j++)
        {
            if (array[i] + array[j] == targetsum)
            {
                pairs++;
            }
        }
    }
    cout << pairs << endl;

    return 0;
}