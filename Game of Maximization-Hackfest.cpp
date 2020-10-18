int maximumStones(vector<int> arr) {
    int sum1=0;
    int sum2=0;
    for(int i=0;i<arr.size();i++){
        if(i%2==0){
            sum1+=arr[i];
        }
        else{
            sum2+=arr[i];
        }
    }
    return 2*(min(sum1,sum2));
}