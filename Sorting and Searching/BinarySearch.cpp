#include<iostream>
using namespace std;
int isBinarySearch(int arr[],int target,int n){
    int i = 0;
    int j = n-1;
    while(i<=j){
        int mid = (i+j)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]<target){
            i = mid+1;
        }
        else{
            j = mid-1;
        }
    }
    return -1;
}
int main(){
    int arr[] = {10,20,30,40,50,60,70,80,90};
    int target = 80;
    int n = sizeof(arr)/sizeof(arr[0]);
    int index = isBinarySearch(arr,target,n);
    if(index!=-1){
        cout<<"Element present in the index of : "<<index<<endl;
    }
    else{
        cout<<"Element does not present in the array";
    }
}