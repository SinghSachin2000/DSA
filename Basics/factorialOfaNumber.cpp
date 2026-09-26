#include<iostream>
using namespace std;

int factorial(int n,int&ans){
    if(n==0||n==1){
        return ans;
    }
    for(int i=n; i>1; i--){
       ans*=i;
    }
    return ans;
}

int main(){
    int n,ans;
    ans=1;
    cout<<"Enter number : ";
    cin>>n;
    cout<<factorial(n,ans);
    return 0;
}