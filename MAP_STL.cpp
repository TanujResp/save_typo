#include<bits/stdc++.h>
using namespace std;
int main(){

map<int ,string> mp;

pair<int ,string> pr;

int n;
int n1;
string n2;

cin>>n;
for(int it=0;it<n;it++){
cin>>n1;
getline(cin,n2);

pr=make_pair(n1,n2);

mp.insert(pr);

}

for(auto it=mp.begin();it!=mp.end();it++){

	cout<<it->first<<" "<<it->second<<endl;
}
return 0;
}