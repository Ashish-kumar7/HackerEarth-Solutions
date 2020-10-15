void solve(string w,int s,int e,int n)
{
    if(s<=e)
 
    {
    int m=(s+e)/2;
    cout<<w[m];
    solve(w,s,m-1,n);
    solve(w,m+1,e,n);
    
    }
    
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        solve(s,0,n-1,n);
        cout<<endl;
    }
}