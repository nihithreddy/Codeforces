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
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		int a[n];
		forn(i,n) cin>>a[i];
		if(n==1) cout<<"T\n";
		else{
			sort(a,a+n);
			int mx=a[n-1];
			int total=accumulate(a,a+n,0);
			if(2*mx>total||total&1) cout<<"T\n";
			else cout<<"HL\n";
		}
	}
	
	return 0;
}