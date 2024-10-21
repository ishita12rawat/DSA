#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int s=0;
    int fac=1;
    for(int i=1;i<=n;i++){
        fac*=i;
    
    }
    cout<<fac;
}