//KEEP IT SIMPLE STUPID

#include<bits/stdc++.h>

#pragma GCC optimize ("O3")
#pragma GCC target ("avx")
#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")

#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define forn(i, n) for (int i = 0; i < (int)(n); ++i)
#define for1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define ford(i, n) for (int i = (int)(n) - 1; i >= 0; --i)
#define fore(i, a, b) for (int i = (int)(a); i <= (int)(b); ++i)
#define print(v) for(auto it=(v).begin();it!=(v).end();it++) {cout<<*it<<" ";}
#define ll long long
#define w(t) ll t;cin>>t;while(t--)

using namespace std;

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef long long i64;
typedef vector<i64> vi64;
typedef vector<vi64> vvi64;
using namespace std;


void solve()
{
    std::ios::sync_with_stdio(false);
    ll n;
    cin>>n;
    ll a=0,b=0,c=0,t1=0,t2=0;
    for1(i,n){
        t1=t2=i;
        if(t2%5==0){
            while(t2!=0){
                a++;
                t2=t2/5;
            }

        } 
        if(t1%2==0){
            while(t1!=0){
                b++;
                t1=t1/2;
            }

        } 
    }
    cout<<min(a,b)/2;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}

/* stuff you should look for
	* int overflow, array bounds
	* special cases (n=1?)
	* do smth instead of nothing and stay organized
	* WRITE STUFF DOWN
*/