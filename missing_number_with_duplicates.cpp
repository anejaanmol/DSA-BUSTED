#include <iostream>

using namespace std;
//marking negative method
int  marking(int arr[],int n){
    int ans=-1;
    
    for(int i=0;i<n;i++){
        int index=abs(arr[i]);
        
        if(arr[index-1]>0){
            arr[index-1]*=-1;
        }
    }
    
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            ans=i+1;
            return ans;
        }
    }
    return -1;
    
}

//sorting and swaping method
void swap_sort(int arr[],int n){
    int i=0;
    while(i<n){
        int index=arr[i]-1;
        if(arr[i]!=arr[index]){
            swap(arr[i],arr[index]);
        }else{
            ++i;
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]!=i+1){
            cout<<i<<" ";
        }
    }
}
int main()
{
    // cout<<"Hello World";
    int arr[5]={5,3,3,3,1};
    // int result=marking(arr,5);
    swap_sort(arr,5);
    // cout<<result;
    return 0;
}