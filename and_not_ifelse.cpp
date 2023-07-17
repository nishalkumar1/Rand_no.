#include<iostream>
using namespace std;

int main(){

int a;
cout<<"Enter your number: "<<endl;
cin>>a;

if ((a%3==0) || (a%5==0) )
{
    cout<<"It is Divisble by 3 and 5 "<<endl;
}

else {
    cout<<"It is not divisible. ";
}


return 0;
}