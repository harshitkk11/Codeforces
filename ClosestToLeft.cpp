#include <bits/stdc++.h>

using namespace std;
// #define int long long;

int closestToLeft(vector<int>A, int target){
    int first = 0, last = A.size()-1;
    int ans = 0;
    int mid = first + (last - first)/2;
    int temp = mid;

    while (first<=last){    
        
        if(target>A[mid]) 
        first = mid+1;

        else if(target<A[mid]) 
        last = mid-1;

        else if (target == A[mid]){
            ans++;
            if(target == A[temp-1]){
            }
            
        }
    }
    return 0;
    
}

signed main(){
    int n, k;
    cin>>n>>k;

    vector<int>A;

    for(int i=0; i<n; i++) cin>>A[i];

    int que;

    while (k--)
    {
        cin>>que;
        cout<<closestToLeft(A, que)<<endl;

    }
    return 0;
}
