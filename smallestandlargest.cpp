#include<iostream>
using namespace std;
int main(){

int n;


cin>>n;

int a=n;
int max=-1;
while(n!=0){
int r=n%10;

if(r>max) max=r;
n/=10;
}
int min=10;
while(a!=0){
int r=a%10;

if(r<min) min=r;

a=a/10;
}
cout<<"max"<<" "<<max<<endl<<"min"<<" "<<min;
}