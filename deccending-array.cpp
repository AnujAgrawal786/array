#include<iostream>
using namespace std;
void accending(int a[],int n){
	int temp;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]<a[j]){
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;			
			}		
		}
	}
}

int main(){
	int n;
	cout<<"enter the number of element";
	cin>>n;
	int b[n];
	cout<<"enter the element";
	for(int i=0;i<n;i++){
	    cin>>b[i];
	}
  accending(b,n);
cout<<"the shorted array  display";
for(int i=0;i<n;i++){
	cout<<b[i]<<"";
}
	
	return 0;
}

