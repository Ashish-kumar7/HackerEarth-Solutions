#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int A[n][n];
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin>>A[i][j];
			}
		}
		int count =0;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				for(int x=i;x<n;x++){
					for(int y=j;y<n;y++){
						if(A[x][y]<A[i][j]){
							count++;
						}
					}
				}
			}
		}
		cout<<count<<endl;

	}
	return 0;
}