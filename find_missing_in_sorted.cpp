#include<bits/stdc++.h>
using namespace std;

int find_missing(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        int diff=arr[mid]-mid;
        if(diff==1){
            s=mid+1;
        }else{
            ans=mid;
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans+1;
}

int main(){
    int arr[6]={1,2,3,4,6,7};
    int result=find_missing(arr,6);
    cout<<result;
    return 0;
}