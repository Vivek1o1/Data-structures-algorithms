#include <iostream>
using namespace std;

// merge sort quick sort - nlogn

int factorial(int num){
    if(num==1){
        return 1;
    }
    return num * factorial(num-1);
    // 5 * f(4)--> 4 *f(3) --> 3 * f(2)
    // f(2)=2*1 = 2
    // f(3) = 3*f(2) = 6
    // f(4) = 4*f(3) = 4*5 = 24;
    // f(5) = 5*f(4) = 5*24 = 120;
}
int main(){
    cout<<factorial(5);
}





// int factorial(int num){
//     if(num==1){
//         return 1;
//     }
//     int prev = factorial(num-1);
//     return num * prev;
// }
