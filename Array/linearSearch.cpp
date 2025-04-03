#include<iostream>
using namespace std;
bool isFound(int arr[], int n, int target){
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            return true;
        }
    }
    return false;
}
int main(){
    int arr[] = {10,20,30,40,50};
    int n = 5;
    int target = 400;
    if(isFound(arr,n,target)){
        cout<<"Element present in this array";
    }
    else{
        cout<<"Element don't present in this array";
    }
}