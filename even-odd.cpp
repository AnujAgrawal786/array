#include<iostream>
using namespace std;
void evenoddSeprate(int z[] ,int n,int even[],int evencount,int odd[],int oddcount ){
    
    evencount=0;
    oddcount=0;
    for(int i=0;i<n;i++){
        if(z[i]%2==0){
            even[evencount]=z[i];
            evencount++;
        }
        else{
            odd[oddcount]=z[i];
            oddcount++;
        }
    }
}
int main(){
    int n,result;
    cout<<"enter the no. of element";
    cin>>n;
    int arr[n];
    cout<<"enter the value:\n";
    for(int j=0;j<n;j++){
        cin>>arr[j];
    }
    int evenncount=n/2;
    int odddcount=n/2;
    int evenn[evenncount];
    int oddd[odddcount];
    
}
