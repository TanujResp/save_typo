#include<bits/stdc++.h>
using namespace std;


// void swapval(int &x,int &y,int &z){
// 	int temp;

// 	temp=x;
// 	x=z;
// 	z=y;
// 	y=temp;

// }

int fact(int num){

	int mult=1;

	for(int i=1;i<=num;i++){
		mult=mult*i;
	}

	if(num==0){
		return 1;
	}

	return mult;
}



int main(){


// int a,b,c;
// cin>>a>>b>>c;

// swapval(a,b,c);

// cout<<"a= "<<a<<"b= "<<b<<"c= "<<c<<endl;

// int n,r;

// cin>>n>>r;

// double combi= fact(n)/(fact(r)*fact(n-r));
// cout<<combi;

		int num;

		cin>>num;

	int arr[]={2,3,4,5};


	for(int i=0;i<4;i++){
		if(arr[i]==num){
			cout<<i<<endl;
			exit(0);
		}

	}

	cout<<-1<<endl;

}