#include <bits/stdc++.h>
using namespace std;
int mountain(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        
        if(arr[mid]<arr[mid+1]){
            s=mid+1;
        }else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return mid;
}

int main(){
    int arr[5]={10,20,50,30,40};
    int result=mountain(arr,5);
    cout<<arr[result];
    return 0;
}