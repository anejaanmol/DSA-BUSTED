#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>>matrix={{1,2,3},{4,5,6},{7,8,9}};
    //  int matrix[][3]={{1,2,3},{4,5,6},{7,8,9}};
    int n=matrix.size();
    int m=matrix[0].size();
    
    for(int i=0;i<m;i++){
        int sum=0;
        for(int j=0;j<n;j++){
            sum+=matrix[j][i];
        }
        cout<<sum<<endl;
    }
    return 0;
}