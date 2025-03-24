
#include<bits/stdc++.h>
using namespace std;
int main(){
    long int n;
    cin>>n;
    // stieve Estrogan to check prime nos, in a particular range

    vector<int>ans(n+1,1);
    for(int i=2;i<=sqrt(n);i++){
for(int j=i*i;j<=n;j=i+j){
    ans[j]==0;
}
for(int i=2;i<=n/2;i++){
    if(ans[i]==1 && ans[n-i]==1) {cout<<"{"<<i<<","<<n-i<<"}"<<endl; break;}
}

cout<<"{"<<-1<<","<<-1<<"}";
    }
}