#include <bits/stdc++.h>
using namespace std;

// ==============================
// FAST I/O
// ==============================
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr)

// ==============================
// TYPE ALIASES
// ==============================
using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll,ll>;
using vi = vector<int>;
using vll = vector<ll>;
using vpii = vector<pii>;
using vpll = vector<pll>;

// ==============================
// CONSTANTS
// ==============================
const ll MOD = 1e9 + 7;
const ll INF = 1e18;
const ld EPS = 1e-9;
const int N = 2e5 + 5;

// ==============================
// DEBUGGING
// ==============================
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " = "; _print(x); cerr << '\n';
#else
#define debug(x)
#endif

template<class T> void _print(T x) { cerr << x; }
template<class T, class U> void _print(pair<T,U> p) { cerr << "{"; _print(p.first); cerr << ","; _print(p.second); cerr << "}"; }
template<class T> void _print(vector<T> v) { cerr << "["; for (auto i : v) { _print(i); cerr << " "; } cerr << "]"; }

// ==============================
// MODULAR ARITHMETIC
// ==============================
ll mod_add(ll a, ll b, ll m = MOD) { return (a % m + b % m) % m; }
ll mod_sub(ll a, ll b, ll m = MOD) { return (a % m - b % m + m) % m; }
ll mod_mul(ll a, ll b, ll m = MOD) { return (a % m * b % m) % m; }
ll mod_pow(ll a, ll b, ll m = MOD) {
    ll res = 1;
    while (b) {
        if (b & 1) res = mod_mul(res, a, m);
        a = mod_mul(a, a, m);
        b >>= 1;
    }
    return res;
}
ll mod_inv(ll a, ll m = MOD) { return mod_pow(a, m - 2, m); }

// ==============================
// NORMAL BINARY POWER
// ==============================
ll binpow(ll a, ll b) {
    ll res = 1;
    while (b) {
        if (b & 1) res *= a;
        a *= a;
        b >>= 1;
    }
    return res;
}

// ==============================
// GCD & LCM
// ==============================
ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }

// ==============================
// PRIME CHECK
// ==============================
bool isPrime(ll n) {
    if (n < 2) return false;
    for (ll i = 2; i * i <= n; i++)
        if (n % i == 0) return false;
    return true;
}
// ==============================
// SIEVE
// ==============================
vector<bool> sieve(int n) {
    vector<bool> prime(n + 1, true);
    prime[0] = prime[1] = false;
    for (int i = 2; i * i <= n; i++) {
        if (prime[i]) {
            for (int j = i * i; j <= n; j += i)
                prime[j] = false;
        }
    }
    return prime;
}

// ==============================
// DSU
// ==============================
struct DSU {
    vector<int> parent, size;

    DSU(int n) {
        parent.resize(n + 1);
        size.resize(n + 1, 1);
        for (int i = 0; i <= n; i++)
            parent[i] = i;
    }

    int find(int x) {
        if (parent[x] == x)
            return x;
        return parent[x] = find(parent[x]);
    }

    bool unite(int a, int b) {
        a = find(a);
        b = find(b);
        if (a == b) return false;
        if (size[a] < size[b]) swap(a, b);
        parent[b] = a;
        size[a] += size[b];
        return true;
    }

    bool same(int a, int b) { return find(a) == find(b); }
    int getSize(int x) { return size[find(x)]; }
};

// ==============================
// GRID DIRECTIONS
// ==============================
int dx4[] = {1, -1, 0, 0};
int dy4[] = {0, 0, 1, -1};

int dx8[] = {1,1,1,-1,-1,-1,0,0};
int dy8[] = {1,-1,0,1,-1,0,1,-1};

// ==============================
// BIT UTILITIES
// ==============================
bool isPowerOfTwo(ll x) { return x && !(x & (x - 1)); }
int countBits(ll x) { return __builtin_popcountll(x); }

// ==============================
// MAIN DRIVER
// ==============================

int main() {

    FAST_IO ;

    ll t ;
    cin >> t ;

    while ( t-- ) {

        

    }

    return 0 ;

}