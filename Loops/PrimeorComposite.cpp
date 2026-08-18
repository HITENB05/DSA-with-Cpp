#include <iostream>
   using namespace std;
   int main() { 
    int n;
    cout<<"Enter a number n :";
    cin>>n;
   bool flag =false;
    for (int i=2;i<=sqrt(n);i++){
        if(n%i == 0){
            flag == true;
            break;
        }
    }
    if(n==1) cout<<"Neither prime nor cmposite";
    else if(flag==true) cout<<"Composite number";
    else cout<<"Prime number";

   }