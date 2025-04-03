#include<iostream>
#include<vector>
using namespace std;

int search(vector<int>& nums, int target) {
    int l = 0, r = nums.size() - 1;
    while(l <= r){
        int mid = l + (r-l)/2;
        if(nums[mid] == target) return mid;
        else if(nums[mid]<target){
            l = mid+1;
        }
        else{
            r = mid-1;
        }
    }
    return -1;
}
int main(){
    vector<int> res = {1,2,3,4,5};
    int result = search(res,0);
    cout<<result;
}