#include<iostream>
#include<set>
#include<iterator>
using namespace std;

int main()  {
    // YOUR CODE GOES HERE
    // Please take input and print output to standard input/output (stdin/stdout)
    // E.g. 'cin' for input & 'cout' for output

    int n;
    cin>>n;

    set<int> s;
    int x,y;
    
    for(int i=0;i<n;i++){

        cin>>x>>y;

        if(x == 1){
            s.insert(y);
        }
        else if(x == 2){
            if(s.find(y)!=s.end())
            s.erase(s.find(y));
        }
        else{
            if(s.find(y) != s.end()){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }
        
    }
    for(auto i : s){
        cout<<i<<endl;
    }
    
    return 0;
}
