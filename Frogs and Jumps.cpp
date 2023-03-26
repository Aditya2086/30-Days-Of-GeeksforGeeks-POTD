//{ Driver Code Starts
// Initial Template for C++
/*#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int unvisitedLeaves(int N, int leaves, int frogs[]) {
        // Code here
        
        vector<int> visited(leaves+1,false);
        
         for(int i=0;i<N;++i){
             int jump=frogs[i];
             
             if(jump<=leaves && !visited[jump]){
                 
             for(int k=jump;k<=leaves;k+=jump){
                 visited[k]=true;
             }
           }
         }
         
         int cnt=0;
         
         for(int i=1;i<=leaves;++i){
             if(!visited[i]) 
               cnt++;
         }
         
         return cnt;
         
        
    }
};


//{ Driver Code Starts.


int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, leaves;
        cin >> N >> leaves;
        int frogs[N];
        for (int i = 0; i < N; i++) {
            cin >> frogs[i];
        }

        Solution ob;
        cout << ob.unvisitedLeaves(N, leaves, frogs) << endl;
    }
}*/
// } Driver Code Ends

// Code Here :-

class Solution {
  public:
    int unvisitedLeaves(int N, int leaves, int frogs[]) {
        // Code here
        
        vector<int> visited(leaves+1,false);
        
         for(int i=0;i<N;++i){
             int jump=frogs[i];
             
             if(jump<=leaves && !visited[jump]){
                 
             for(int k=jump;k<=leaves;k+=jump){
                 visited[k]=true;
             }
           }
         }
         
         int cnt=0;
         
         for(int i=1;i<=leaves;++i){
             if(!visited[i]) 
               cnt++;
         }
         
         return cnt;
         
        
    }
};
