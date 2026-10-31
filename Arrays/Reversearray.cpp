#include<iostream>
#include<vector>
using namespace std;
void print(vector <int> &arr)
   {
    for(int ele:arr) cout<<ele<<" ";
    cout<<endl;
   }
int main(){
    vector<int> arr = {3,4,5,6,7,8,9,12};
    int i=0,j= arr.size()-1;
    while(i<j){
        swap(arr[i],arr[j]);
        //int temp = arr[i];
        //arr[i]= arr[j];
        //arr[j] = temp;
        i++;
        j--;

    }
    print(arr);
}