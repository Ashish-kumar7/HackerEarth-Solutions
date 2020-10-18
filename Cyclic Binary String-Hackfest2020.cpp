#include <bits/stdc++.h>

using namespace std;

int maximumPower(string s) {
    
    int count = 0; 
    int result = 0; 
    
    int n=s.length();
    string str1;
    
    int count1=0;
    for(int j=n-1;j>=0;j--){
        if(s[j]=='1'){
            break;
        }
        else{
            str1+=s[j];
            count1++;
        }
    }
    if(count1==n){
        return -1;
    }
    
    string snew=str1+s;
    
    
    int m=snew.length();
    
    for (int i = 0; i < m-count1; i++) 
    { 
        if (snew[i] == '1'){
            count = 0; 
        }
        else{ 
            count++;
            result = max(result, count); 
        } 
    } 
  
    return result; 
    
    
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = maximumPower(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
