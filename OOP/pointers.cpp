#include <bits/stdc++.h>
using namespace std;

class Complex{
    public:
        int real;
        int imaginary;

        void getData(){
            cout<<"The real part is "<<real<<endl;
            cout<<"The imaginary part is "<<imaginary<<endl;
        }

        void setData(int a,int b){
            real = a;
            imaginary = b;
        }

};
int main(){
   Complex *obj = new Complex;
   (*obj).real = 20;
   obj->imaginary = 30;
//    (*obj).getData();
   obj->getData();

}
