string whoIsTheWinner(vector<int> arr) {
    // WRITE DOWN YOUR CODE HERE
    sort(arr.begin(),arr.end());
    int n=arr.size();
    int flag=0;
    for(int i=0;i<n-1;i++){
        if(arr[i]>=arr[i+1]){
            flag=1;
        }
    }
    if(flag==0){
        return "First";
    }
    
    else{
        if(n%2==0){
            return "Second";
        }
        else{
            return "First";
        }
    }
    return "First";
    
}