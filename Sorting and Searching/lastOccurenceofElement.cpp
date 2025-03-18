#include<iostream>
using namespace std;
int isBinarySearch(int arr[],int target,int n) {
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
int main(){
    int arr[] = {30,30,30,30,30,30,30,30,90};
	int target = 30;
    int n = sizeof(arr)/sizeof(arr[0]);
	int index = isBinarySearch(arr,target,n);
    cout<<"The element of the index is : "<<index<<endl;
}