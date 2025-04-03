#include <iostream>
using namespace std;

int main() {
    int arr[] = {0,1,0,1,1,1,0,0,1};
    int i = 0;
    int j = 8;
    while(i<=j){
        if(arr[i]==0){
            i++;
        }
        else if(arr[j]==1){
            j--;
        }
        else{
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }
    for(int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }
}