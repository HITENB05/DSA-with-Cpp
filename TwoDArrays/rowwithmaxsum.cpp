#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[][4] = {{5,8,1,2},{3,4,1,2},{8,9,7,6}};
    int maxRow = -1, maxSum = INT_MIN;
    for(int i =0 ; i<3;i++){
        int sum = 0;
        for(int j=0;j<4;j++){
            sum += arr[i][j];
        }
        if(sum >maxSum) 
        {
        maxSum = sum ;
        maxRow = i;
        }
    }
    cout<<maxSum<<" "<<maxRow;
}
