#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<vector<char>>A(n,vector<char>(n,0));
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin>>A[i][j];
			}
		}
		int vertical=0;
		int horizontal=0;

		for(int i=0;i<n/2;i++){
			if(A[i]!=A[n-i-1]){
				horizontal=1;
			}
		}

		for(int i=0;i<n/2;i++){
			vector<char>AA;
			vector<char>BB;

			for(int j=0;j<n;j++){
				AA.push_back(A[j][i]);
				BB.push_back(A[j][n-i-1]);
				
			}
			if(AA!=BB){
				vertical=1;
			}
		}
		if(horizontal==1 && vertical==1){
			cout<<"NO"<<endl;
		}
		if(horizontal==1 && vertical==0){
			cout<<"VERTICAL"<<endl;
		}
		if(horizontal==0 && vertical==1){
			cout<<"HORIZONTAL"<<endl;
		}
		if(horizontal==0 && vertical==0){
			cout<<"BOTH"<<endl;
		}
	}
	return 0; 
}