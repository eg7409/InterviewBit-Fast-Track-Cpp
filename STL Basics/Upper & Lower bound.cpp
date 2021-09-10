#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
using namespace std;

int main()  {
    // YOUR CODE GOES HERE
    // Please take input and print output to standard input/output (stdin/stdout)
    // E.g. 'cin' for input & 'cout' for output


    int n;
    cin>>n;

    vector<int> v(n);

    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    int x,y;
    cin>>x;

    for(int i=0;i<x;i++){
        cin>>y;

        auto it = lower_bound(v.begin(),v.end(),y);

        if(it!=v.end()){
            cout<<it - v.begin()<<endl;
        }
        else{
            cout<<n<<endl;   
        }
    }
    
    return 0;
}
