#include<bits/stdc++.h>
using namespace std;
#define forn(i,n) for(int i=0;i<n;i++)
#define rep(i,a,b) for(int i=(a);i<(b);i++)
typedef long long ll;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		vector<int> a(n);
		iota(a.begin(),a.end(),1);
		forn(i,n) cout<<a[i]<<" ";
		cout<<"\n";
	}
	return 0;
}