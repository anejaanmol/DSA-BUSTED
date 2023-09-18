#include <bits/stdc++.h>
using namespace std;

void move_negative_left(int arr[],int n){
    int i=0;
    int j=n-1;
    while(i<j){
        if(arr[i]>0 && arr[j]<0) {
                swap(arr[i],arr[j]);
        }else if(arr[i]<0){
            i++;
        }else{
            j--;
        }
    }
}
int main(){
    int arr[6]={1,2,-3,4,-5,6};
    move_negative_left(arr,6);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}