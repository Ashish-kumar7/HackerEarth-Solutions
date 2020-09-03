#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int k;
		cin>>k;
		k=k%n;

		int A[n];
		for(int i=0;i<n;i++){
			cin>>A[i];
		}
		vector<int>ans;
		for(int i=n-k;i<n;i++){
			ans.push_back(A[i]);
		}
		for(int i=0;i<n-k;i++){
			ans.push_back(A[i]);
		}

		for(int j=0;j<n;j++){
			cout<<ans[j]<<" ";
		}
		cout<<endl;

	}
}