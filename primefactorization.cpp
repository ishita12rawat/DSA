#include<iostream>
#include<math.h>
using namespace std;
int main(){

int n;
cin>>n;

if(n==1 || n==0) cout<<0;
for(int i=2;i<=sqrt(n);i++){
    if(n%i==0){
    int count=0;
    while(n%i==0){
        count=count+1;
        n=n/i;
    }
    cout<<i<<"^"<<count<<" ";}
}
if(n>1) cout<<n<<"^"<<1;

return 0;

}