#include <iostream>
using namespace std;

string movex(string s){
    if(s.length()==0){
        return "";
    }
    char first = s[0];
    if(first == 'x'){
        // first + ""
        // x+"" = x
        return first + movex(s.substr(1));
    }
    return movex(s.substr(1)) + first;
    // x + first = xb
    
}
int main(){
    string s;
    cin>>s;
    cout<<movex(s);
}

