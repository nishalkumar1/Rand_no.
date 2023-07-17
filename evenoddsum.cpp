#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int array[] = {1, 2, 1, 1, 2, 3};
    int sumarr = 0;
    for (int i = 0; i < 6; i++)
    {
        if (i % 2 == 0)
        {
            sumarr += array[i];
        }
        else
        {
            sumarr -= array[i];
        }
    }
    cout << sumarr << endl;

    return 0;
}