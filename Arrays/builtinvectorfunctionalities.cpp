#include<iostream>
#include<vector>
using namespace std;
int main(){
    //vector<int> v= {3,4,2,4,5,6,1};
    //reverse(v.begin(),v.end());
    //for(int ele: v) cout<<ele<<" ";
    
    vector<int> v= {3,4,2,4,5,6,1};
    sort(v.begin(),v.end());
    for(int ele: v) cout<<ele<<" ";
    
}