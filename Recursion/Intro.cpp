#include <iostream>
using namespace std;

void recursiveFunction(int num){
    // base condition 
    // it will avoid recusrion to be infinite
    if(num==0){
        return;
    }
    cout<<"Hello Recursion"<<endl;
    recursiveFunction(num-1);
}

int main(){
    recursiveFunction(5);
}
