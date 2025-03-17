#include<iostream>
using namespace std;
int isCheck(int arr[], int n,int size){
    for(int i=0;i<size;i++){
        if(arr[i]==n){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[] = {10,20,30,40,50};
    int n = 40;
    int size = sizeof(arr)/sizeof(arr[0]);
    int ans = isCheck(arr,n,size);
    if(ans!=-1){
        cout<<ans<<endl;
    }
    cout<<"Element is not present in this array";
}