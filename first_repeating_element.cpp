#include<bits/stdc++.h>
using namespace std;

int first_occurence(int arr[],int n  ){
    unordered_map<int,int>anmol;
    for(int i=0;i<n;i++){
        anmol[arr[i]]++;
    }

    for(int i=0;i<n;i++){
        if(anmol[arr[i]]>1){
            return i+1;
        }
    }
    return -1;

// hashing -> STL -> unordered Map
}
int main(){
    int arr[7] = {1, 5, 3, 4, 3, 5, 6};
    int n=7;
    int result =first_occurence(arr,7);
    cout<<result;
    return 0;
}