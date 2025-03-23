#include<iostream>
using namespace std;
int isSingleElement(int arr[], int n){
    int s = 0;
    int e = n-1;
    while(s<=e){
        int mid = s+(e-s)/2;
        if(s==e){
            return s;
        }
        if(mid%2!=0){
            if(arr[mid]==arr[mid-1]&&mid-1>=0){
                s = mid+1;
            }
            else{
                e = mid-1;
            }
        }
        else{
            if(arr[mid]==arr[mid+1]&&mid+1<n){
                s = mid+2;
            }else{
                e = mid;
            }
        }
    }
    return -1;
}
int main(){
    int arr[] = {1,1,5,5,2,2,3,3,2,4,4};
    int n = 11;
    int ans = isSingleElement(arr,n);
    cout<<"The index of single element is : "<<ans;
}