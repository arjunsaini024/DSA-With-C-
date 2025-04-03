#include<iostream>
using namespace std;
void extreamPrint1(int arr[], int n ){
    int i=0;int j = n-1;
    while(i<=j){
        if(i==j){
            cout<<arr[i]<<" ";
        }
        else{
            cout<<arr[i]<<" ";
            cout<<arr[j]<<" ";
        }
        i++;
        j--;
    }
}
int main(){
    int arr[] = {10,20,30,40,50,60};
    int n = sizeof(arr)/sizeof(arr[0]);
    extreamPrint1(arr,n);
}