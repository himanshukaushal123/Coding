#include <bits/stdc++.h> 
#include <vector>

bool findTargetInMatrix(vector < vector < int >> & mat, int m, int n, int target) {
    // Write your code here.
    int i=0,j=n-1;
    while(i<m&&j>=0){
        if(mat[i][j]==target){
            return 1;
        }else if(mat[i][j]>target){
            j--;
        }else{
            i++;
        }
    }
    return 0;
}
