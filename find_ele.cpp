#include <iostream>
using namespace std;

int main()
{

    int array[] = {2, 94, 6, 71, 7};
    int key = 94;

    int ans = -1;

    for (int i = 0; i < 5; i++)
    {
        if (array[i] == key)
        {
            ans = i;
        }
    }
    cout << ans << endl;

    return 0;
}