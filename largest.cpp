#include<iostream>
using namespace std;
int main(){

int n;
cin>>n;
int arr[n];

for(int i=0;i<n;i++){ cin>>arr[i];}
int largest=arr[0];
int sec;
for(int i=0; i<n;i++){
 if(arr[i]>largest)
 largest=arr[i];
sec=largest;
}
cout<<largest<<endl<<sec;


}