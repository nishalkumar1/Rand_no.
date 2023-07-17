#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;

    int *ptr1 = &x;
    int *ptr2 = &y;

    int result;
    int *ptrresult = &result;
    *ptrresult = *ptr1 + *ptr2;
    cout << *ptr
result << endl;
    return 0;
}