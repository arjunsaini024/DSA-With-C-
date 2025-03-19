#include<iostream>
using namespace std;
int isPeakElement(int arr[] , int n){
    int i=0;
    int j=n-1;
    while(i<j){
        int mid = i+(j-i)/2;
        if(arr[mid]<arr[mid+1]){
            i = mid+1;
        }
        else{
            j = mid;
        }
    } 
    return i;
}
int main(){
    int arr[] = {0,10,5,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int ans = isPeakElement(arr,n);
    cout<<"Peak Element : "<<ans;
}
// 852 Leet Code