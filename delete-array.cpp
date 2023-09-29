#include<iostream>
using namespace std;
int deleteElement(int a[],int k,int n){
	for(int i=k;i<n;i++){
		a[i]=a[i+1];
		
	}
}
int main(){
	int n;
	cout<<"enter the number of element";
	cin>>n;
	int b[n];
	int z;
	cout<<"enter the value of element";
	for(int j=0;j<n;j++){
		cin>>b[j];
	}
	cout<<"enter the number of indexing delete";
	cin>>z;
	deleteElement(b,z,n);
	n=n-1;
	for(int i=0;i<n;i++){
		cout<<b[i];
	}
}