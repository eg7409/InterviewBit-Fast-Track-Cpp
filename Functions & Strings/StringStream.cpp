/*
#include<iostream>
#include<sstream>
using namespace std;
*/

int main()  {
    string A;
    cin>>A;
    // YOUR CODE GOES HERE

    stringstream s(A);
    string intermediate;

    while(getline(s,intermediate,',')){
        cout<<intermediate<<endl;
    }
    
    return 0;
}
