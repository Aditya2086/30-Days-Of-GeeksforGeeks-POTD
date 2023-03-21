//{ Driver Code Starts
//Initial Template for C++

/*#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int minimumTime(int N,int cur,vector<int> &pos,vector<int> &time){
        vector<int> a  ;
        
        for(int i=0 ;i<N ;i++){
            if(pos[i]>=cur){
                a.push_back(pos[i] - cur);
            }else {
                a.push_back(cur - pos[i]);
            }
        }
        
        for(int i = 0 ; i<N ;i++){
            a[i]*= time[i];
        }
        int z = a[0] ;
        for(int i=0 ; i<N ;i++){
            z = min(z , a[i]);
        }
        return z;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N,cur;
        cin>>N>>cur;
        vector<int> pos(N),time(N);
        for(int i=0;i<N;i++){
            cin>>pos[i];
        }
        for(int i=0;i<N;i++){
            cin>>time[i];
        }
        Solution ob;
        cout<<ob.minimumTime(N,cur,pos,time)<<endl;
    }
}*/
// } Driver Code Ends

// Code Here :-

class Solution{
public:
    int minimumTime(int N,int cur,vector<int> &pos,vector<int> &time){
        vector<int> a  ;
        
        for(int i=0 ;i<N ;i++){
            if(pos[i]>=cur){
                a.push_back(pos[i] - cur);
            }else {
                a.push_back(cur - pos[i]);
            }
        }
        
        for(int i = 0 ; i<N ;i++){
            a[i]*= time[i];
        }
        int z = a[0] ;
        for(int i=0 ; i<N ;i++){
            z = min(z , a[i]);
        }
        return z;
    }
};
