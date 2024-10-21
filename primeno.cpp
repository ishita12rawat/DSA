#include<iostream>
#include<math.h>
using namespace std;
int main(){

    int n; cin>>n;

int count=0;
   for(int i=1;i<=sqrt(n);i++){
    if(n%i==0){
        int second=n/i;
        if(second==i) count=count+1;

        else count=count+2;
 
      
    }

   }
    if(count==2) cout<<"prime";

    else cout<<"composite no";


    cout<<count;
}