/*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
*/

// Complete the given function
vector<int> solve(vector<int> &v, int k){
    int n = v.size();
    deque<int> q;
    vector<int> ans;

    for(int i=0;i<k;i++){
        while(!q.empty() && v[q.back()] < v[i]){
            q.pop_back();
        }
        q.push_back(i);
    }
    ans.push_back(v[q.front()]);

    for(int i=k;i<n;i++){

        if(q.front() == i-k){
            q.pop_front();
        }
        while(!q.empty() && v[q.back()] < v[i]){
            q.pop_back();
        }
        q.push_back(i);
        ans.push_back(v[q.front()]);
    }
    return ans;
}


/*
int main()  {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A(n);
        for(int i = 0; i < n; i++){
            cin>>A[i];
        }
        int B;
        cin>>B;
        vector<int> ans = solve(A, B);
        for(int i = 0; i < ans.size(); i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
*/
