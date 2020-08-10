#include<bits/stdc++.h>
using namespace std;
#define forn(i,n) for(int i=0;i<n;i++)
#define rep(i,a,b) for(int i=(a);i<(b);i++)
typedef long long ll;
void solve(){
	int n,m;
	cin>>n>>m;
	char c[n][m];
	forn(i,n){
		forn(j,m) cin>>c[i][j];
	}
	int ans =0;
	forn(i,n-1) ans+=(c[i][m-1]=='R');
	forn(i,m-1) ans+=(c[n-1][i]=='D');
	cout<<ans<<"\n";
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}