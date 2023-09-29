#include<iostream>
using namespace std;
int main(){
int n,ser;
cout<<"enter the number of element";
cin>>n;
int a[n];
cout<<"enter the value of element";
for (int i=0;i<n;i++){
	cin>>a[i];
} 
cout<<"enter the number of search element";
cin>>ser;
if(ser<=n){
cout<<a[ser];
}
}