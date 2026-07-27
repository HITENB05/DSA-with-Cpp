#include <iostream>
   using namespace std;
   int main() {
     int cp;
     cout<<"Enter cost price: ";
     cin>>cp;

     int sp;
     cout<<"Enter selling price: ";
     cin>>sp;

      if(sp>cp) cout<<"Profit"<<endl;
      else if(sp<cp) cout<<"Loss"<<endl;
      else cout<<"no Profit no Loss"<<endl; 
   }
    