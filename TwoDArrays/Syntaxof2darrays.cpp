#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[][4] = {{5,8,1,2},{3,4,1,2},{8,9,7,6}};
    // int arr [2][4] = {{2,3,4,5},{3,4,5,6}};
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}