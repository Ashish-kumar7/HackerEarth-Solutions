#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string str;
		cin>>str;
		map<char,int>mp;
		for(int i=0;i<str.length();i++){
			mp[str[i]]=(int)str[i];
		}
		int arr[]={67,71,73,79,83,89,97,101,103,107,109,113};
		string ans="";

		for(int i=0;i<str.length();i++){
			auto it=mp.find(str[i]);
			int val=it->second;
			int small=INT_MAX;
			int temp;
			for(int i=0;i<12;i++){
				if(abs(val-arr[i])<small){
					small=abs(val-arr[i]);
					temp=arr[i];
				}
			}
			if(small==0){
				ans+=(it->first);
			}
			else {
				ans=ans+(char)temp;
			}

		}
		cout<<ans<<endl;


	}
	return 0;
}