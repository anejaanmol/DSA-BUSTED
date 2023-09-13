#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int max=INT_MIN;
    int min=INT_MAX;
    
    for(int row=0;row<4;row++){
        for(int col=0;col<4;col++){
            if(arr[row][col]>max){
                max=arr[row][col];
            }
            if(arr[row][col]<min){
                min=arr[row][col];
            }
        }
    }
    cout<<endl;
    cout<<max<<" "<<min<<endl;

    return 0;
}