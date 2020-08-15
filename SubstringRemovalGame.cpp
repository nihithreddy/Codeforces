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
int t,ans,cnt;
vi v;
int main(){
	cin>>t;
	forn(i,t){
	    cnt = 0;
		ans = 0;
	    v.clear();
		string s;
		cin>>s;
	    for(char c:s){
			if(c=='1') cnt++;
			else{
				if(cnt) v.pb(cnt);
				cnt = 0;
			}
		}
		if(cnt) v.pb(cnt);
		sort(all(v),greater<int>());
		for(int i=0;i<sz(v);i+=2) ans+=v[i];
		cout<<ans<<"\n";
	}
	return 0;
}