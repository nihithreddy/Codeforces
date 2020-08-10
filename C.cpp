#include<bits/stdc++.h>
using namespace std;
#define forn(i,n) for(int i=0;i<n;i++)
#define rep(i,a,b) for(int i=(a);i<(b);i++)
typedef long long ll;
const int mod=(int)1e9+7;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n;
	ll a=1,b=1;
	cin>>n;
    rep(i,2,n+1){
		a=a*i%mod;
		b=b*2%mod;
	}
	cout<<(a-b+mod)%mod<<"\n";
	return 0;
}