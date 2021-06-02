#include <iostream>

using namespace std;

int main()
{
    string name;
    cin>>name;
    int len= name.length()-1;
   
    for(int i=0;i<len;i++){
        char temp= name[i];
        name[i]= name[len];
        name[len]= temp;
        len=len-1;
    }
    cout<<name;
}
