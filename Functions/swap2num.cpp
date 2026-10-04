#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter 2 num a and b:"<<endl;
    cin>>a>>b;
    cout<<a<<" "<<b<<endl;
    int temp =a;
    a=b;
    b=temp;
    
    cout<<a<<" "<<b<<endl;
}