bool comp(pair<int,int> a,pair<int,int> b){
    return a.first+a.second < b.first+b.second;
}

void sortArray(vector<pair<int, int>> &v){
    
    sort(v.begin(),v.end(),comp);

}
