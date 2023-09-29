#include<iostream>
using namespace std;
void split(int a[],int split,int n,int ans[]){
int ind=0;

for(int i=split;i<n;i++){
ans[ind]=a[i];
ind++;
}
for(int j=0;j<split;j++){
ans[ind]=a[j];
ind++;
}

}
int main(){
int n,s;
cout<<"enter the number of array:";
cin>>n;	
int z[n],solve[n];
cout<<"enter the value element:\n";
for(int i=0;i<n;i++){
	cin>>z[i];
}
cout<<"enter the number of split:";
cin>>s;
split(z,s,n,solve);
	for(int i=0;i<n;i++){
		cout<<solve[i]<<endl;
	}
	
}