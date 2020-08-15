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
const int mod = (int)1e9+7;
int main(){
	int t,n;
	cin>>t;
	forn(i,t){
		string s;
		cin>>n>>s;
		map<int,int> mp;
		mp[0]=1;
		int sum = 0;
		ll ans = 0;
		forn(i,n){
			sum+=s[i]-'0';
			ans+=mp[sum-(i+1)];
			mp[sum-(i+1)]++;
		}
		cout<<ans<<"\n";
	}
	return 0;
}