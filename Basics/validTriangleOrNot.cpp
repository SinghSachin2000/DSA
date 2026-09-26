#include<iostream>
using namespace std;

void checkValideTrianle(int a,int b,int c){
   if(a+b>c || b+c > a || c+a>b){
    cout<<"valid triangle";
   }else{
    cout<<"not a valid triangle";
   }
}

int main(){
    int a,b,c;
    cout<<"Enter sides of triangle : ";
    cin>>a>>b>>c;
    checkValideTrianle(a,b,c);
    return 0;
}