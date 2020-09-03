#include <bits/stdc++.h>

using namespace std;

int  solve(int x,int y){
	if(x==0){
		return (y+1)%1000;
	}
	else if(x>0 && y==0){
		return (solve(x-1,1))%1000;
	}
	else{
		return (solve(x-1,solve(x,y-1)));
	}
	return 0;
}
int main(){

	int x;
	int y;
	cin>>x;
	cin>>y;

	cout<<solve(x,y)<<endl;
	return 0;
}