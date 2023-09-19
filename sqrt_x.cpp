#include <bits/stdc++.h>
using namespace std;
int mySqrt(int x) {
        int s=0;
        int e=x;
        long long int mid= s+(e-s)/2;
        int ans=-1;
        while(s<e){
            long long count=mid*mid;
            if(count==x){
                return mid;
            }else if(count>x){
                e=mid-1;
            }else{
                ans=mid;
                s=mid+1;
            }
            mid=s+(e-s)/2;
        }
        return ans;
    }
int main(){
    int num=16;
    int result=mySqrt(num);
    cout<<result;

    return 0;
}