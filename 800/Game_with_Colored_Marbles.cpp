/**
         Bismillahir Rahmanir Rahim
          Solver: Abdul Awaul Raju
 **/
#include <bits/stdc++.h>
#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif
#define all(x) (x).begin(), (x).end()
#define sz(x) int(x.size())
#define char2Int(c) (c - '0')
#define lastEle(vec) vec[vec.size() - 1]
#define PI 3.1415926535897932384626433832795l
#define YES cout<<"YES"<<endl;
#define NO cout<<"NO"<<endl;
#define endl '\n'
using namespace std;
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<string> vs;
typedef vector<vi> vvi;
typedef map<int, int> mpii;
typedef set<int> seti;
typedef multiset<int> mseti;
const int MX = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;
void ki_ekta_obostha()
{  

   int n;
    cin >> n;
    map<int, int> mp;
    for(int i = 0; i < n; i++){
      int x;
      cin >> x;
      mp[x]++;
    }
    int one = 0, two = 0;
    for(auto [x, count] : mp) {
      if(count == 1) one++;
      else two++;
    }
    int ans = ((one + 1) / 2) * 2;
    ans += two;
    cout << ans << "\n";
   }
   
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int _;
    cin>>_;
    while(_--)
        ki_ekta_obostha();
    return 0;

}
