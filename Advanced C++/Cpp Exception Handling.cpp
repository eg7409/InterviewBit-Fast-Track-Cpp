/*
#include<iostream>
using namespace std;

int division(int a, int b) {
   if( b == 0 ) {
      throw "Division by zero condition!";
   }
   return (a/b);
}
*/

int main()  {
    int a, b;
    cin>>a>>b;
    
    // call function division(a, b)
    // print the result in try else exception in catch
    // Your code goes here
    try{
       if(b==0){
          throw (b);
       }
       cout<<a/b;
    }
    catch(int b){
       cout<<"Division by zero condition!";
    }
    return 0;
}
