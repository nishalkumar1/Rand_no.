#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int ans = 0;
    int power = 1;

    while (n > 0)
    {
        int lastdigit = n % 10;
        ans = ans + (lastdigit * power);//store in the ans and power is used for increase the power to the 2
        power *= 2;
        n /= 10;
    }
    cout<<ans<<endl;

    return 0;
}