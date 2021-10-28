#include<iostream>
#include<map>
using namespace std;

int main()  {
    // YOUR CODE GOES HERE
    // Please take input and print output to standard input/output (stdin/stdout)
    // E.g. 'cin' for input & 'cout' for output

    int n;
    cin>>n;

    map<int,int> m;

    int q,x,y;

    for(int i=0;i<n;i++){
        cin>>q;

        if(q == 1){
            cin>>x>>y;
            m[x] += y;
        }
        else if(q == 2){
            cin>>x;
            m.erase(x);
        }
        else{
            cin>>x;
            cout<<m[x]<<endl;
        }
    }
    
    return 0;
}
