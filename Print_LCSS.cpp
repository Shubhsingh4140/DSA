#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void LCSS(string X,string Y){
        int n=X.length();
        int m=Y.length();
        int dp[n+1][m+1];
        for(int i=0;i<=n;i++){
            for(int j=0;j<=m;j++){
                dp[i][j]=0;
            }
        }
        string sub="";
        int maxLen=0;
         for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(X[i-1]==Y[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                   int  x=dp[i][j];
                   if(x>maxLen){
                        maxLen=max(maxLen,x);
                     sub = X.substr(i-maxLen, maxLen);
                    //  cout<<sub<<" ";
                   }
                   
                }
                else{
                    dp[i][j]=0;
                }
            }
        }
         for(int i=0;i<=n;i++){
            for(int j=0;j<=m;j++){
                cout<<dp[i][j]<<" ";
            }
            cout<<endl;
        }
        
        cout<< maxLen<<endl;
        cout<<sub<<endl;
    }
    void longestPalindrome(string s) {
        string r="abfce";
        // reverse(s.begin(),s.end());
        LCSS(s,r);
    }


int main() {
    // Sample input
  
    string X="abcde";
    longestPalindrome(X);
    

   
    return 0;
}
