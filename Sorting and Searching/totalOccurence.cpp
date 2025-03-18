#include<iostream>
using namespace std;
int isFirstOccurence(int arr[],int target,int n) {
    int i = 0;
    int j = n-1;
    int ans = -1;
    while(i<=j) {
        int mid = (i+j)/2;
        if(arr[mid]==target) {
            ans = mid;
            j = mid-1;
        }
        else if(arr[mid]<target){
            i = mid+1;
        }
        else{
            j=mid-1;
        }
    }
    return ans;
}
int isLastOccurence(int arr[],int target,int n) {
    int i = 0;
    int j = n-1;
    int ans = -1;
    while(i<=j) {
        int mid = (i+j)/2;
        if(arr[mid]==target) {
            ans = mid;
            i = mid+1;
        }
        else if(arr[mid]<target){
            i = mid+1;
        }
        else{
            j=mid-1;
        }
    }
    return ans;
}
int isTotalOccurence(int arr[],int target,int n){
    int first = isFirstOccurence(arr,target,n);
    int last = isLastOccurence(arr,target,n);
    int total = last - first + 1;
    return total;
}
int main(){
    int arr[] = {10,20,30,30,30,30,30,80,90};
	int target = 30;
    int n = sizeof(arr)/sizeof(arr[0]);
	int total_Occ = isTotalOccurence(arr,target,n);
    cout<<"Total Occurence : "<<total_Occ<<endl;
}