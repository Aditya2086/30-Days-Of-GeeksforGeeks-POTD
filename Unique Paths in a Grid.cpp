//{ Driver Code Starts
/*#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int uniquePaths(int m, int n, vector<vector<int>> &grid) {

        int M=1e9+7;
        vector<vector<int>> dp(m,vector<int>(n,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if (grid[i][j]==0) dp[i][j]=0; 
                else if(i==0 && j==0) dp[0][0]=1;

                else{

                    int up=0,left=0;
                    if(i>0) up+=dp[i-1][j];
                    if(j>0) left+=dp[i][j-1];
                    dp[i][j]=(up+left)%M;

                }
            }
        }
        
        return dp[m-1][n-1];
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,m,x;
        cin>>n>>m;
        
        vector<vector<int>> grid(n,vector<int>(m));
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>grid[i][j];
            }
        }

        Solution ob;
        cout << ob.uniquePaths(n,m,grid) << endl;
    }
    return 0;
}*/
// } Driver Code Ends

// Code Here :-

class Solution {
  public:
    int uniquePaths(int m, int n, vector<vector<int>> &grid) {

        int M=1e9+7;
        vector<vector<int>> dp(m,vector<int>(n,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if (grid[i][j]==0) dp[i][j]=0; 
                else if(i==0 && j==0) dp[0][0]=1;

                else{

                    int up=0,left=0;
                    if(i>0) up+=dp[i-1][j];
                    if(j>0) left+=dp[i][j-1];
                    dp[i][j]=(up+left)%M;

                }
            }
        }
        
        return dp[m-1][n-1];
    }
};
