#include <iostream>
   using namespace std;
   int main() { 
     int n;
    cout<<"Enter a number n :";
    cin>>n;
     
    int a=1,r=4;
    for(int i=1;i<=n;i++){
        cout<<a<<" ";
        a *=r;

    }
   }
   