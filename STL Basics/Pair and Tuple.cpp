/*
#include <iostream>
#include <vector>
#include<tuple>
using namespace std;
*/

pair<int, int> findMaxMin(vector<int> &v){
    // First value of pair will be Maximum of array A and second will be Minimum of array A
    int m1=INT_MIN,m2=INT_MAX;
    for(int i=0;i<v.size();i++){
        m1 = max(m1,v[i]);
        m2 = min(m2,v[i]);
    }

    return {m1,m2};
}

tuple<int, int, int> compute(vector<int> &v){
    // First value of tuple will be sum of array A
    // Second value of tuple will be sum of even values in array A 
    // Third value of tuple will be sum of odd values in array A

    int total=0,even=0,odd=0;
    for(int i=0;i<v.size();i++){
        total += v[i];

        if(v[i]%2==0){
            even += v[i];
        }
        else{
            odd += v[i];
        }
    }
    return {total,even,odd};
}

/*
int main()  {
    int n;
    cin>>n;
    vector<int> A(n);
    for(int i = 0; i < n; i++){
        cin>>A[i];
    }
    
    pair<int, int> max_min = findMaxMin(A);
    cout<<max_min.first<<" "<<max_min.second<<endl;
    
    tuple<int, int, int> tuple_values = compute(A);
    cout<< get<0>(tuple_values) << " " << get<1>(tuple_values) << " " << get<2>(tuple_values) << endl;
    
    return 0;
}
*/
