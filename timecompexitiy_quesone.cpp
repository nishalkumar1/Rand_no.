#include<iostream>
using namespace std;

int sumrange(int x, int y){

    int n= (y - x + 1);
    int a = x;
    int result = (n*(2*a + (n - 1)*1))/2;

    return result;
}

int main(){

cout<<sumrange(2, 6)<<endl;




    return 0;
}