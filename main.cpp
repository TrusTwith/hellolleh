#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(), x.end()
int main(){
	vector<ll>arr;
	vector<int>size={0,8,16,24,32,40,48,56};
	ll n;
	cin>>n;
	while(n){
		arr.push_back(n&0xFF);
		n>>=8;
	}
	// for(auto&v:arr)cout<<v<<' ';
	// cout<<endl;
	if(arr.size()<=4)reverse(size.begin(),size.begin()+4);
	else if(arr.size()<=8)reverse(all(size));
	else return cout<<-1,0;
	// for(auto&v:size)cout<<v<<' ';
	// cout<<endl;
	ll ans=0;
	for(int i=0; i<arr.size(); i++){
		ans|=(arr[i]<<size[i]);
	}
	cout<<ans;
	return 0;
}

