#include <bits/stdc++.h>
using namespace std;

int closestToLeft(vector<int>A, int target){
    int first = 0, last = A.size()-1;
    int result;

    while(first<=last){
        int mid = first + (last - first)/2;

        if(A[mid] > target) last = mid - 1;

        else if(A[mid] <= target){
            if(A[mid+1] > target){
                result = mid;
                break;
            }
            else if(A[mid+1] <= target) first = mid + 1;
        }
    }
    return result+1;
}

signed main(){
    int n, k;
    cin>>n>>k;

    vector<int>A(n);

    for(int i=0; i<n; i++) cin>>A[i];

    for(int i=0; i<k; i++){
        int que;
        cin>>que;

        cout<<closestToLeft(A, que)<<endl;
    }
    return 0;
}
