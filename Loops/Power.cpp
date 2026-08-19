#include <iostream>
   using namespace std;
   int main() { 
    
    int a;
    cout<<"Enter base :";
    cin>>a;

    int b;
    cout<<"Enter Exponent :";
    cin>>b;

    int ans = 1;
    for(int i=1;i<=b;i++){
    if(a ==1) break;
    ans *= a;

}
   if(a ==0 && b== 0) cout <<"Indeterminate form";
else cout<<ans;


}