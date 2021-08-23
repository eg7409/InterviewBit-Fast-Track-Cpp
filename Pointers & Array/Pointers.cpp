/*
#include<iostream>
using namespace std;
*/

void solve(int *A, int *B){

    int sum = *A + *B;
    int diff = abs(*A - *B);
    *A = sum;
    *B = diff;
}



/*
int main()  {
    int A, B;
    int *pA = &A, *pB = &B;
    cin>>A>>B;
    solve(pA, pB);
    cout<<A<<endl;
    cout<<B<<endl;
    return 0;
}
*/
