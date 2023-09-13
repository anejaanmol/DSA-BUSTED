#include <bits/stdc++.h>
using namespace std;


int main(){
 int arr[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
 int row=4;
 int col=4;
    for(int i=0;i<row;i++){
        int row_sum=0;
        for(int j=0;j<col;j++){
            row_sum+=arr[i][j];
        }
        cout<<row_sum<<" ";
    }
    return 0;
}