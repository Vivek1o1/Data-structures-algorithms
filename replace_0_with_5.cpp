// https://practice.geeksforgeeks.org/problems/replace-all-0-with-5-in-an-input-integer/1/?company[]=Amazon&company[]=Amazon&problemType=functional&difficulty[]=-2&page=1&sortBy=submissions&query=company[]AmazonproblemTypefunctionaldifficulty[]-2page1sortBysubmissionscompany[]Amazon
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int copy=n;
    int toBeAdded=0;
    int decimalPoint=1;
    
    if(n==0){
            toBeAdded=toBeAdded+decimalPoint*5;
            
        }
    
    while(n>0){
        if(n%10==0){
            toBeAdded=toBeAdded+decimalPoint*5;
            
        }
        n=n/10;
        decimalPoint= decimalPoint*10;
        
    }
    
    cout<<copy+toBeAdded;
    
}
