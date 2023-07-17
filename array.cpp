#include <iostream>
using namespace std;

int main(){

int array[]={2,56,6,78};
// cout<<sizeof(array)/sizeof(array[0])<<endl;
int size = sizeof(array)/sizeof(array[0]);
for (int idx = 0; idx < size; idx++)
{
    cout<<array[idx]<<endl;
}



    return 0;
}