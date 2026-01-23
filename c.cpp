#include <bits/stdc++.h>

// #pragma GCC target("avx2")
// #pragma GCC optimize("Ofast")
// #pragma GCC optimize("O3")
// #pragma GCC optimize("unroll-loops")

#define overload4(_1,_2,_3,_4,name,...) name
#define overload3(_1,_2,_3,name,...) name
#define rep1(n) for(ll i=0;i<n;++i)
#define rep2(i,n) for(ll i=0;i<n;++i)
#define rep3(i,a,b) for(ll i=a;i<b;++i)
#define rep4(i,a,b,c) for(ll i=a;i<b;i+=c)
#define rep(...) overload4(__VA_ARGS__,rep4,rep3,rep2,rep1)(__VA_ARGS__)
#define rrep1(n) for(ll i=n;i--;)
#define rrep2(i,n) for(ll i=n;i--;)
#define rrep3(i,a,b) for(ll i=a;i>=b;i--)
#define rrep4(i,a,b,c) for(ll i=(b)+((a)-(b)-1)/(c)*(c);i>=(b);i-=c)
#define rrep(...) overload4(__VA_ARGS__,rrep4,rrep3,rrep2,rrep1)(__VA_ARGS__)

#define cauto const auto&
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(), (x).rend()
using namespace std;
using ull = unsigned long long;
using ll = long long;
using P = pair<ll, ll>;
using vi = vector<int>;
using vvi = vector<vi>;
using vvvi = vector<vvi>;
using vd = vector<double>;
using vvd = vector<vd>;
using vld = vector<long double>;
using vl = vector<ll>;
using vvl = vector<vl>;
using vvvl = vector<vvl>;
using vs = vector<string>;
using vc = vector<char>;
using vvc = vector<vc>;
using vb = vector<bool>;
using vvb = vector<vb>;
using vvvb = vector<vvb>;

template<class T> auto min(const T& a){ return *min_element(all(a)); }
template<class T> auto max(const T& a){ return *max_element(all(a)); }
int gcd(int a,int b){return b?gcd(b,a%b):a;}
template <class T, class U> bool chmin(T& a, const U& b) {return (b < a) ? (a = b, true) : false;}
template <class T, class U> bool chmax(T& a, const U& b) {return (b > a) ? (a = b, true) : false;}
void in() {}
void printMatrix(const auto &vec){for(const auto &v : vec){ for(const auto &e : v){cerr << e << " ";}cerr << endl;}}
template<class T> void printTable(const vector<vector<T>> &tb){ for(const auto &i : tb){ for(const auto &j : i){cerr << j << " ";}cerr << endl;}}
template <class Head, class... Tail> void in(Head&& head, Tail&&... tail) { cin >> head; in(std::forward<Tail>(tail)...); }
template <typename T> istream &operator>>(istream &is, vector<T> &v){for (ll i = 0; i < v.size(); ++i) is >> v[i]; return is;}
// ベクターのデバッグ出力
template<typename T> ostream& operator<<(ostream& os, const vector<T>& v) { for (ll i = 0; i < (ll)v.size(); i++) { os << v[i] << " "; } return os;}
const ll INF = 1LL << 60;
const ll mod = 998244353;

using ld = long double;
using lld = __int128_t;

int main() {
   
    ll n; cin >> n;
    string s; cin >> s;
    rep(i,0,n){
        cout << s << endl;
    }

}