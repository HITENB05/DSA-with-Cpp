#include<iostream>
using namespace std;
int main(){

int x = 10;
{
 x=9;
 // int x=10;{this will be a new variable}
}
cout<<x;
}