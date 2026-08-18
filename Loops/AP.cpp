#include <iostream>
   using namespace std;
   int main() { 
     int n;
    cout<<"Enter a number n :";
    cin>>n;

    // 2 5 8 11...
    for(int i=2;i<=3*n-1;i+=3)
    {
        cout<<i<<" ";
    }


   }