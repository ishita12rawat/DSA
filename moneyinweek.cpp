#include<iostream>
using namespace std;
int main(){

int n;
cin>>n;
int ans=0;
for(int i=1;i<=n;i++){

    int we=(i-1)/7;
    int day;
    if(i%7==0)
        day=7;

        else day=i%7;

 int in=we+day;
 ans=ans+in;   
}
cout<<ans;
}