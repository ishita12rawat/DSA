#include<iostream>
using namespace std;
int main(){
int n;
  cin>>n;
  vector<int>ans;
  for(int i=2;i<=sqrt(n);i++){
    if(n%i==0){
      int s=n/i;
      ans.push_back(i);
      if(s!=i){
        ans.push_back(s);
    }}
sort(ans.begin(),ans.end();
  
  for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
  }
  }
