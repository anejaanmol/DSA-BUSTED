#include<bits/stdc++.h>
using namespace std;

int first_occurence(int arr[],int n,int target){
    int s=0;
    int e=n-1;
    int ans=-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]==target){
            ans=mid;
            s=mid+1;
        }else if(arr[mid]>target){
            e=mid-1;
        }else if(arr[mid]<target){
            s=mid+1;
        }
    }
    return ans;
}

int main(){
    int ans[6]={10,20,40,40,40,60};
    int result =first_occurence(ans,6,40);
        cout<<result;
    return 0;
}