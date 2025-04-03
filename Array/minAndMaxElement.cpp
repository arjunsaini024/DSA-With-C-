#include<iostream>
#include<limits.h>
using namespace std;
int minElement(int arr[], int n){
    int min = INT_MAX;
    for(int i=0;i<n;i++){
        if(min>arr[i]){
            min = arr[i];
        }
    }
    return min;
}
int maxElement(int arr[], int n){
    int max = INT_MIN;
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    return max;
}
int main(){
    int arr[] = {10,20,30,40,50};
    int n = 5;
    int min = minElement(arr,n);
    int max = maxElement(arr,n);
    cout<<"Min Element in the given array : "<<min<<endl;
    cout<<"Max Element in the given array : "<<max<<endl;
}