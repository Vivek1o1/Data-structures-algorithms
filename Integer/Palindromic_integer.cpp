int main()
{
    int num=0;
  int newnum=0;
  cin>>num;
  newnum= num;
  int reverse=0;
  int lastdigit=0;
  while(num>0){
      lastdigit= num%10;
      reverse= (reverse*10)+lastdigit;
      num= num/10;
      
  }
  if(newnum==reverse){
      cout<<"It is a palindrome";
  }
  else{
      cout<<"It is not a palindrome";
  }
  
}
