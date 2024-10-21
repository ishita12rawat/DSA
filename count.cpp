#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int c=n;
int count=0 ;
while(c>0){
    c=c/10;
 count ++;
}
int sum=0;
while(n>0){
int d=n%10;
if(count%2==0) {sum=sum-d;}
else sum=sum+d;
count--;
n=n/10;

}

cout<<sum;
}