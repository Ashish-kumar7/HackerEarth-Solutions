#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int A[n];
	for(int i=0;i<n;i++){
		cin>>A[i];
	}
	long long int sum[n];

	sum[0]=A[0];
	
	for(int i=1;i<n;i++){
		sum[i]=sum[i-1]+A[i];
	}
	
	long long int local=INT_MIN;
	long long int max_sum=INT_MIN;


	for(int i=0;i<n;i++){
		int k=2;
		int r=0;
		r=i;
		while(r+k<n){
			r=r+k;
			k++;
		}

		if(i==0){
			local=sum[r];
		}
		else{
			local=sum[r]-sum[i-1];
		}

		max_sum=max(max_sum,local);
	}

	cout<<max_sum<<endl;

return 0; 
}