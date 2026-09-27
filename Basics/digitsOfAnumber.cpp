#include <iostream>
using namespace std;

int main() 
{
   int n;
   cout<<"Enter i : ";
   cin>>n;
   while(n){
    cout<<n%10<<", ";
    n/=10;
   }
    return 0;
}