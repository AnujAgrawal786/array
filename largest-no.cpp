#include<iostream>
using namespace std;

int largest(int a[],int k){
int max=a[0];
for(int i=0;i<k;i++){
	if(a[i]>max){
	max=a[i];}
}
return max ;
}
    

int secondMax(int b[],int c){
    int m=largest(b,c);
    int secmax=b[0];
    for(int x=0;x<c;x++){
        	if(b[x]>secmax&&b[x]!=m){
	         secmax=b[x];
        	}
}
return secmax;
    }

int main()
{
	int s[10];
	int n=sizeof(s)/sizeof(int);
	cout<<"enter the value\n";
	 for(int i=0;i<n;i++){
       cin>>s[i];
    }
	cout<<largest(s,n)<<"is a largest no.\n";
	cout<<secondMax(s,n)<<"secondlargest no.";

}