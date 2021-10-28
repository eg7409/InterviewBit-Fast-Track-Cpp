int solve(vector<int> &v){
    

     int n = v.size();

    priority_queue<int,vector<int>, greater<int> > pq;

    for(int i=0;i<n;i++){
        pq.push(v[i]);
    }

    int ans = 0;

    while(pq.size()>1){
        int x1 = pq.top();
        pq.pop();
        int x2 = pq.top();
        pq.pop();

        int sum = x1+x2;
        ans += sum;
        pq.push(sum);
    }
    return ans;
}
