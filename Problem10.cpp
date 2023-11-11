#include<bits/stdc++.h>
using namespace std;
class Solution{   
public:
    bool isProduct(int arr[], int n, long long x) {
        // code here
        
        // sort(arr,arr+n);
        
        int s=0,e=n-1;
        
        int flag=0;
        
        while(s<e){
            
            if(arr[s]*arr[e]==x){
                flag=1;
            }
            
            else if(arr[s]*arr[e]>x){
                e--;
            }
            
            else{
                s++;
            }
            
            if(s>e || s==e){
                break;
            }
        }
        
        if(flag==1){
            return true;
        }
        
        return false;
        
        
    }
};

//{ Driver Code Starts.

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        long long x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.isProduct(arr, n, x);
        cout << (ans ? "Yes\n" : "No\n");
    }
    return 0;
}