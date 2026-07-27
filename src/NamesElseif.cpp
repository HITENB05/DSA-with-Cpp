#include <iostream>
    using namespace std;
    int main() {
        int n;
        cout<<"Enter your Number";
        cin>>n;
        
        if ( n%5 == 0 && n%3 == 0 ) cout <<"Your number is divisible by 5 and 3 ";
        else if ( n%5 == 0 ) cout <<"Your number is divisible by 5 ";
        else if ( n%3 == 0 ) cout <<"Your number is divisible by 3 ";
        else cout<<"Your number is not divisible by 5 and 3";
    





    }