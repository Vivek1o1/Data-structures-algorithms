#include <iostream>
using namespace std;

int fibonacchi(int num){
    if(num==0 || num==1){
        return num;
    }
    return fibonacchi(num-1) + fibonacchi(num-2);
}

int main(){
    cout<<fibonacchi(7);
}
