#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, b;
    cin >> n ;
    int c=0;
    vector<int>ans(n+1,0);
  for(int i=2;i<=sqrt(n);i++){
      if(n%i==0){
        
              n/=i;
              if(n%i==0) cout<<"no";
              
               else {cout<<"yes";break;}
          }
      }
      
  

}