#include<iostream>
using namespace std;
int search(int nums[], int target) {
    int n = sizeof(nums)/sizeof(nums[0]);
    int pivot = PivotIndex(nums,n);
    int ans = -1;
    if(target>=nums[0] && target<=nums[pivot]){
        ans = binarySearch(nums,0,pivot,target);
    }
    else{
        ans = binarySearch(nums,pivot+1,n-1,target);
    }
    return ans;
}
int binarySearch(int nums[],int x,int y,int target){
    while(x<=y){
        int mid = x+(y-x)/2;
        if(nums[mid]==target){
            return mid;
        }
        if(nums[mid]>target){
            y = mid-1;
        }
        else{
            x = mid+1;
        }
    }
    return -1;
}
int PivotIndex(int nums[],int n){
    int s = 0;
    int e = n-1;
    while(s<=e){
        int mid = s+(e-s)/2;
        if(s==e){
            return s;
        }
        if(mid+1<n && nums[mid]>nums[mid+1]){
            return mid;
        }
        else if(mid-1>=0 && nums[mid]<nums[mid-1]){
            return mid-1;
        }
        else if(nums[s]>nums[mid]){
            e = mid-1;
        }
        else{
            s = mid+1;
        }
    }
    return -1;
}
int main(){
    int arr[] = {4,5,6,7,0,1,2};
	int target = 0;
	int ans = search(arr,target);
	cout<<ans<<endl;
}