#include<iostream>
using namespace std;
int getQuotient(int divisor,int dividend){
    int s = 0;
    int e = dividend;
    int ans = -1;
    while(s<=e){
        int mid = s+(e-s)/2;
        if(mid*divisor==dividend){
            return mid;
        }
        else if(mid*divisor>dividend){
            e = mid-1;
        }
        else{
            ans = mid;
            s = mid+1;
        }
    }
    return ans;
}
int main(){
    int divisor = 1;
    int dividend = -35;

    int ans = getQuotient(abs(divisor),abs(dividend));
    if((divisor>0&&dividend<0)||(divisor<0&&dividend>0)){
        ans = 0-ans;
    }
    cout<<"Final Ans is: "<<ans<<endl;
}
