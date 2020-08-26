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
	int n;
	string s;
	cin>>n>>s;
	for(int i=0;i<(int)s.size();i+=2){
		cout<<s[i]<<"";
	}
	cout<<"\n";
	
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}