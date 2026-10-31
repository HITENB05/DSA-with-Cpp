#include<iostream>
using namespace std;
int main(){
    int arr[] ={4,2,1,6,9,2,8};
    int n = sizeof(arr)/4;
    int max =0;
    for (int i=0;i<=n-1;i++){
        if (arr[i]<max) max = arr[i];
    }
    cout<<max; 
}