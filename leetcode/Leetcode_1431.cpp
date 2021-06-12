#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int candies[n];
    int extracandies;
    cin>>extracandies;
    for(int i=0;i<n;i++){
        cin>>candies[i];
    }
    int maxcandies=candies[0];
    for(int i=0;i<n;i++){
        if(candies[i] > maxcandies){
            maxcandies=candies[i];
            
            
        }
        
      
    }
     for(int i=0;i<n;i++){
         if(candies[i]+extracandies>=maxcandies){
             cout<<"true"<<" ";
         }
         else{
             cout<<"false"<<" ";
         }
     }
    

    return 0;
}
