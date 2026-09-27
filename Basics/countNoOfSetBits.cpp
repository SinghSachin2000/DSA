#include <iostream>
using namespace std;
int countSetBits(int n){
    int count=0;
    while(n){
        if(n&1){
          count++;
        }
        n=n>>1;
    }
    return count;
}
int main() 
{
   int n;
   cout<<"Enter i : ";
   cin>>n;
   cout<<countSetBits(n);
    return 0;
}