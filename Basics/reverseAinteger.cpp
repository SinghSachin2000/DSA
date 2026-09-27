#include <iostream>
#include<cmath>
using namespace std;

int main() 
{
   int n,ans=0;
   cout<<"Enter number : ";
   cin>>n;

   while(n){
    int rem=n%10;
    ans=ans*10 + rem;
    n=n/10;
   }
   cout<<ans;
    return 0;
}