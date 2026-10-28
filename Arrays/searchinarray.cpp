#include<iostream>
using namespace std;
int main(){
    int arr[]={3,4,5,6,7};
    int n = sizeof(arr)/4;
    int target = 5;
    for(int i =0 ; i<=n-1;i++){
        if (arr[i]== target )cout<<"element found"; 
    }
}