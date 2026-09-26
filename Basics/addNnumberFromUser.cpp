#include<iostream>
using namespace std;

int main(){
    int n,sum=0,num;
    cout<<"enter number : ";
    cin>>n;
   for(int i=1;i<=n;i++){
    cout<<"enter number to sum :";
    cin>>num;
    sum+=num;
   }
    cout<<"sum is :"<<sum;
    return 0;
}