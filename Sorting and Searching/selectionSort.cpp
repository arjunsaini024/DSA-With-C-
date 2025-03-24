#include<iostream>
using namespace std;
void selectSort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        int minIndex = i;
        for(int j=i+1;j<n;j++){
            if(arr[minIndex]>arr[j]){
                minIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[] = {99,88,77,66,55,44,33,22,11};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectSort(arr,n);
}