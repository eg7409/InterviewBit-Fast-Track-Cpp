/*
#include <iostream>
using namespace std;
*/

// Your code goes here


template <class T>

T index_of_largest(T a[],int n){
    T maximum = a[0];
    int index = 0;
    for(int i=1;i<n;i++){
        if(maximum < a[i]){
            maximum = a[i];
            index = i;
        }
    }
    return index;
}


/*
int main()  {
    int n;
    cin>>n;
    int arr_int[n];
    for(int i = 0; i < n; i++){
        cin>>arr_int[i];
    }
    int res = index_of_largest<int>(arr_int, n);
    cout<<res<<endl;
    
    cin>>n;
    double arr_double[n];
    for(int i = 0; i < n; i++){
        cin>>arr_double[i];
    }
    res = index_of_largest<double>(arr_double, n);
    cout<<res<<endl;
    return 0;
}
*/
