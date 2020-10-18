#include<bits/stdc++.h>
#define ll long long int
#define f(i,n) for(ll i=0;i<n;i++)
#define fab(i,a,b) for(ll i=a;i<=b;i++)
#define frev(i,n) for(ll i=n-1;i>=0;i--)
#define sync ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ms(array,value) memset(array,value,sizeof(array))
#define test(t) ll t;cin>>t;while(t--)
#define en cout<<endl;
#define endl "\n"
#define mod 1000000007
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod2  998,244,35
 
using namespace std;

int main()
{
    int n;
	cin>>n;
	int a[n];
	f(i,n)cin>>a[i];
	sort(a,a+n);
	int mx=INT_MIN;
	f(i,n-2)
	{
		mx=max(mx, abs(a[i]-a[i+2]));
	}
	mx=max(mx,abs(a[0]-a[1]));
	mx=max(mx,abs(a[n-1]-a[n-2]));
	cout<<mx;
}
