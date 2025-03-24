#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
   
  
    for(int j=1;j<=n;j++){
        int sum=0;
  while(j!=0){
    int r=j%10;
    int fac=1;
    for(int i=1;i<=r;i++){
        fac=fac*i;  
      }

    sum+=fac;
  }
if(sum ==j) cout<<j<<endl;
}


}