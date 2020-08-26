#include<bits/stdc++.h>
using namespace std;
#define forn(i,n) for(int i=(0);i<(n);i++)
#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define all(c) (c).begin(),(c).end()
#define sz(c) (int)(c).size()
#define pb push_back
#define ff first
#define ss second
typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;
typedef vector<double> vd;
typedef vector<string> vs;
void solve(){
	int n,mi=(int)1e9;
	cin>>n;
	int a[n],b[n];
	forn(i,n){
		cin>>a[i];
		b[i]=a[i];
		mi=min(mi,a[i]);
	}
	sort(b,b+n);
	bool ok = 1;
	forn(i,n){
		if(a[i]!=b[i]&& a[i]%mi){
			ok = 0;
			break;
		}
	}
	string ans=(ok)?"YES":"NO";
	cout<<ans<<"\n";
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}