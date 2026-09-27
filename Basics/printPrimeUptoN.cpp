#include <iostream>
#include<cmath>
using namespace std;

bool checkPrime(int x){
  if(x<2){
    return false;
  }
  for(int i=2;i<=sqrt(x);i++){
    if(x%i==0){
        return false;
    }
  }
return true;
}
int main() 
{
   int n;
   cout<<"Enter number : ";
   cin>>n;
   for(int i=2;i<=n;i++){
    if(checkPrime(i)){
        cout<<i<<endl;
    }
   }
    return 0;
}