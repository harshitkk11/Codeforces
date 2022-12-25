#include<bits/stdc++.h>
using namespace std;

bool search_que(vector<int>A, int target){
    int low = 0, high = A.size()-1;

    while (low<=high)
    {
        int mid = low + (high-low);

        if(target == A[mid]){
            return true;
            break;
        }

        else if(target > A[mid]){
            low = mid + 1;
        }

        else if(target < A[mid]){
            high = mid -1;
        }
    }
    return false;
}

signed main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int n, k;
    cin>>n>>k;

    vector<int>A(n);

    for(int i=0; i<n; i++){
        cin>>A[i];
    }

    for(int j=0; j<k; j++){
        int que;

        cin>>que;

        if(search_que(A, que)) cout<<"Yes"<<endl;

        else cout<<"No"<<endl;
    }

    return 0;
}