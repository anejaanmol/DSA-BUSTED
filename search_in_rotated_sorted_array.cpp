#include <bits/stdc++.h>
using namespace std;
    int search_rotate_sorted(int nums[],int n,int target){
        int s=0;
        int e=n-1;
        int mid=s+(e-s)/2;
        while(s<=e){
            if(nums[mid]==target){
                return mid;
            }
            if(nums[s]<=nums[mid]){
                if(nums[s]<=target && nums[mid]>= target){
                    e=mid-1;
                }else{
                    s=mid-1;
                }
            }else{
                if(nums[e]>=target && nums[mid]<=target){
                    s=mid+1;
                }else{
                    e=mid-1;
                }
            }
            mid= s+(e-s)/2;
        }
        return -1;
    }


int main(){
    int ans[]={10,12,14,2,4,6,8};
    int target=12;
    int result= search_rotate_sorted(ans,7,12);
    cout<<result;
    return 0;
}