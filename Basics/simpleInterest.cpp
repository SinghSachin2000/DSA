#include<iostream>
using namespace std;
int main(){
     int p,r,t;
     cout<<"Enter principle : ";
     cin>>p;
     cout<<"Enter rate : ";
     cin>>r;
     cout<<"Enter time : ";
     cin>>t;
     cout<<"simple interest : "<<(p*r*t)/100;
    return 0;
}