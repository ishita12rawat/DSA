#include<bits/stdc++.h>
using namespace std ;
int main(){
    int n;cin>>n;
    int p;
    cout<<"enter prime no";
    cin>>p;
int fac=1;
for(int i=1;i<=n;i++){
    fac=fac*i;
}
int a=fac%p;
cout<<a;
}