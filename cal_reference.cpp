#include <iostream>
using namespace std;

void changevalueto(int x,int y){
    x = 12;
    y=14;

}
int main(){
    
int p=34;
int q=56;

changevalueto(p,q);
cout<<p<<endl<<q<<endl;


    return 0;
}