#include <iostream>
using namespace std;

int add(int a, int b=5, int c=6){
    return a+b+c;

}
int main(){


    cout<<add(4)<<endl;

    return 0;

}