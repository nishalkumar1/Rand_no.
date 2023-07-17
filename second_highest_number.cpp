#include <iostream>
using namespace std;

int largestElementIndex(int array[], int size)
{
    int max = INT16_MIN;
    int maxindex = -1;
    for (int i = 0; i < size; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
            maxindex = i;
        }
    }
    return maxindex;
}

int main()
{

    int array[] = {2, 3, 5, 8, 7, 4, 8};
    int n = 7;

    int indexoflargest = largestElementIndex(array, n);
    cout << array[indexoflargest] << endl;
    int largestelement = array[indexoflargest];
    for (int i = 0; i < n; i++)
    {
        if (array[i] == largestelement)
        {
            array[i] = -1;
        }
    }

    // array[indexoflargest] = -1;
    int secondlargestnumber = largestElementIndex(array, n);
    cout << array[secondlargestnumber] << endl;

    return 0;
}
