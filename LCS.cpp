// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <string.h>
using namespace std;
 int LCS(string X,string Y,int n,int m){
        
        int  dp[n+1][m+1];
        for(int i=0;i<n+1;i++){
            for(int j=0;j<m+1;j++){
                if(i==0||j==0){
                    dp[i][j]=0;
                }
                
            }
        }
          for(int i=1;i<n+1;i++){
            for(int j=1;j<m+1;j++){
                if(X[i-1]==Y[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
               
            }
        }
        return dp[n][m];


    }


    
   


int main() {
    // Sample input
   
    
    string X="abcdgh";
    string Y="abedfh";
    int n=X.length();
    int m=Y.length();

    int no = LCS( X,Y,n,m);

    cout << "Length: " << no << endl;
    return 0;
}
