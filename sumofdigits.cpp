#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int sum = 0;
    while (n > 0)
    {
        sum++;
        int lastdigit = n  % 10;
        sum += lastdigit;
        n/=10;
    }
    cout << sum;
    return 0;
}