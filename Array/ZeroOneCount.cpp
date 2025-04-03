#include<iostream>
using namespace std;
void zeroOneCount(int arr[], int n){
    int oneCount = 0;
    int zeroCount = 0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            zeroCount++;
        }
        if(arr[i]==1){
            oneCount++;
        }
    }
    cout<<"Count of Zero : "<<zeroCount<<endl;
    cout<<"Count of one : "<<oneCount<<endl;
}
int main(){
    int arr[] = {1,1,1,0,0,0,0,0,0,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    zeroOneCount(arr,n);
}