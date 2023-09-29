#include<iostream>
using namespace std;
void interchang(int a[],int end,int start,int n){
    
    //1,2,3,4,5
    int temp = a[end];
    int tempp=a[start];
               
   
    a[start]=temp;
     a[end]=tempp;
}
int main(){
    int endindex,startindex,n;
    cout<<"enter the no. element:";
    cin>>n;
    int b[n];
    cout<<"enter the value of element";
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    cout<<"enter the starting change point:";
    cin>>startindex;
    cout<<"enter the ending change point:";
    cin>>endindex;
    interchang(b,endindex,startindex,n);
    for(int i=0;i<n;i++){
        cout<<b[i];
    }
}