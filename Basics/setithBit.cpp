#include <iostream>
using namespace std;

int ithBitSet(int temp,int i){
 return temp | (1<<i);
}
int main() 
{
   int n=8,i;
   cout<<"Enter i : ";
   cin>>i;
   cout<<ithBitSet(n,i);
    return 0;
}