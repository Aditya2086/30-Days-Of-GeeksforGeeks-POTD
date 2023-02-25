//{ Driver Code Starts
/*#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int checkCompressed(string S, string T) {
        int i=0;
       int j=0;
       while(i<S.size() && j<T.size()){
           if(isdigit(T[j])){
               int num=0;
               while(j<T.size() && isdigit(T[j])){
                   num=num*10+(T[j]-'0');
                   j++;
               }
               i+=num;
           }
           else{
               if(S[i]!=T[j]){
                   return 0;
               }
               i++;
               j++;
           }
       }
       if(i==S.size()){
           return 1;
       }
       return 0;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S,T;
        
        cin>>S>>T;

        Solution ob;
        cout << ob.checkCompressed(S,T) << endl;
    }
    return 0;
}*/
// } Driver Code Ends

// Codse Here :- 

class Solution {
  public:
    int checkCompressed(string S, string T) {
        int i=0;
       int j=0;
       while(i<S.size() && j<T.size()){
           if(isdigit(T[j])){
               int num=0;
               while(j<T.size() && isdigit(T[j])){
                   num=num*10+(T[j]-'0');
                   j++;
               }
               i+=num;
           }
           else{
               if(S[i]!=T[j]){
                   return 0;
               }
               i++;
               j++;
           }
       }
       if(i==S.size()){
           return 1;
       }
       return 0;
    }
};
