#include<iostream>
using namespace std;

int main(){
    int i;
    for (int i = 1; i <=30; i++)
    {
        if (i%3==0)
        {
            continue;
        }
        cout<<i<<endl;
    }

    return 0;
}