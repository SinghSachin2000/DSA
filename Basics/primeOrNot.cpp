#include<iostream>
using namespace std;

void checkPrime(int n){
    if(n<2){
        cout<<"not a prime";
        return;
    }
    for(int i=2; i<n; i++){
       if(n%i==0){
        cout<<"not a prime";
        return;
       }
    }
    cout<<"prime";
}

int main(){
    int n;
    cout<<"Enter number : ";
    cin>>n;
    checkPrime(n);
    return 0;
}