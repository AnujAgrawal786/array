#include<iostream>
using namespace std;
int  addition(int b[],int l){
    int sum=0;
    for(int i=0;i<=l-1;i++){
        cin>>b[i];
        sum=sum+b[i];
        
    }
    return sum;
}
double averege(int j,int m){
    double avg=j/m;

return (double)avg;
}
int main(){
	int a[5],i,sum,n;
	double avverege;
	n=sizeof(a)/sizeof(int);
	cout<<"enter the value:";
	sum= addition(a,n);
	avverege=averege(sum,n);
	cout<<sum;
	cout<<"\navg";
	cout<<avverege;
    
	
	
	
	
}