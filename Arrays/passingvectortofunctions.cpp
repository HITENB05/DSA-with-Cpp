#include<iostream>
#include<vector>
using namespace std;
void change (vector<int> v){
    v[2]=99;

}
int main(){
    vector<int> v= {3,4,2,4,5,6,1};
    change (v);
    cout<<v[2];
}