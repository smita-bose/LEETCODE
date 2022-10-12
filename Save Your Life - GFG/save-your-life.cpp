//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
      string maxSum(string w,char x[], int b[],int n){
          // code here
          unordered_map<char,int>mp;
          pair<int,int>p;
          for(int i = 0;i<n;i++){
              mp[x[i]] = b[i];
          }
          int maxsum = 0;
          int summ = 0;
          int j = 0;
          int s = -1;
          int e = -1;
          for(int i = 0;i<w.length();i++){
              if(mp.find(w[i])!=mp.end()) summ+=mp[w[i]];
              else summ+=w[i];
              if(summ>maxsum){
                  p.first = j;
                  p.second = i;
                  
                  maxsum = summ;
                 
              }
              if(summ<0){
                  summ = 0;
                  j = i+1;
                  
              }
              
          }
        
          string substr = "";
          for(int i = p.first;i<=p.second;i++){
              substr+=w[i];
          }
          return substr;
          
      }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string w;
        cin>>w;
        int n;
        cin>>n;
        char x[n];
        int b[n];
        for(int i = 0;i<n;i++)
            cin>>x[i];
        for(int i = 0;i<n;i++)
            cin>>b[i];
        Solution ob;
        cout << ob.maxSum(w,x,b,n) << endl;
    }
    return 0; 
}
// } Driver Code Ends