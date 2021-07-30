#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

    ///solving it in linear Time
   /// Description - Given an n x n matrix and a number x, find the position of x in the matrix. In the given matrix, every row and column is sorted in increasing order.
/*Solution : Idea is to solve problem with row and column elimination reducing the search space. Before jumping at the solution, lets try to understand the concept that is actually allowing us to solve the problem in linear time.
Let’s start our search from the top-right corner of the array. There are three possible cases.
The number we are searching for is greater than the current number. This will ensure, that all the elements in the current row is smaller than the number we are searching for as we are already at the right-most element and the row is sorted. Thus, the entire row gets eliminated and we continue our search on the next row. Here elimination means we won’t search on that row again.
The number we are searching for is smaller than the current number. This will ensure, that all the elements in the current column is greater than the number we are searching for. Thus, the entire column gets eliminated and we continue our search on the previous column i.e. the column at the immediate left.
The number we are searching for is equal to the current number. This will end our search.
*/



int main()
{
    ll n,m;
    cin>>n>>m;
    ll a[n][m];
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    ll x;
    cin>>x;
    ll i=0,j=n-1;
    while(i<n && j>=0){
        if(a[i][j]==x){
            cout<<i<<" "<<j<<endl;
            break;
        }
        else if(a[i][j]<x){
            j--;
        }
        else{
            i++;
        }
    }
}
/*Since, at each step, we are eliminating an entire row or column.
Time Complexity : O(n)
Auxiliary Space : O(1)
*/
