#include<iostream>
using namespace std;

int main(){
 int array[]= {2,5,67,45};

 int sum=  0;
for (int idx = 0; idx < 4; idx++)
{
    sum+=array[idx]; 
}

cout<<sum<<endl;
    return 0;
}