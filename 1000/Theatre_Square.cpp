/*
Problem: Theatre Square
Link: https://codeforces.com/problemset/problem/1/A
Rating: 1000
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
     long long n, m, a;
     cin >> n >> m >> a;
     long long md = ceil((double)n / a);
     long long wd = ceil((double)m / a);
     cout << md * wd << endl;
     // Time Complexity: O(1)
     // Space Complexity: O(1)
return 0;}
