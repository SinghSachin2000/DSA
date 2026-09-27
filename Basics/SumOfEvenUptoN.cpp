#include <iostream>
using namespace std;

int main() 
{
   int n,ans=0;
   cout<<"Enter number : ";
   cin>>n;
   for(int i=0;i<=n;i=i+2){
     ans+=i;
   }
   cout<<ans;
    return 0;
}