#include<bits/stdc++.h>
using namespace std;
#define forn(i,n) for(int i=(0);i<(n);i++)
#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define all(c) (c).begin(),(c).end()
#define sz(c) (int)(c).size()
#define pb push_back
#define ff first
#define ss second
#define endl '\n'
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
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t,n;
	string s;
	cin>>t;
	while(t--){
		unordered_map<int,int> ump;
		cin>>n;
		forn(i,n){
			cin>>s;
			forn(j,sz(s)) ump[s[j]]++;
		}
		int f=1;
		for(auto p:ump){
			if(p.second%n!=0){
			f=0;
			break;
			}
		}
		string ans  = f?"YES":"NO";
		cout<<ans<<"\n";
	}
	return 0;
}