#include<iostream>
using namespace std;
int main(){
   int n;
   cin>>n; 
int a=0;
int b=1;
if(n==1) cout<<0;

if(n==1 ) cout<<1;
int sum=0;
int i=2;
while(i<=n){
    sum=a+b;
    a=b;
    b=sum;
    i++;
}
cout<<sum;

}