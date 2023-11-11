#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	int n,x;
	while(t--){
		cin>>n>>x;
		int arr[n];

		for(int i=0;i<n;i++){
			cin>>arr[i];
		}

		if(x==n){
			int &min=*min_element(arr,arr+n);
			cout<<min-1<<endl;
		} 

		else if(x==1){
			int &max=*max_element(arr,arr+n);
			cout<<max-1<<endl;
		}

		else{

			int min=INT_MAX;

			for(int i=0;i<n;i++){
				if(arr[i]<min){
					min=arr[i];
				}
			}

			vector<int> vec;

			for(int i=0;i<n;i++){
				if(arr[i]>min){
					vec.push_back(arr[i]);
				}
			}

			int &min1=*min_element(vec.begin(),vec.end());
			cout<<min1-1<<endl;
		}
	}
}