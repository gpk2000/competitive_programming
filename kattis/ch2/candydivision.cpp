// 失敗するからこそ そこから立ち向かって行く強さがあってそんな強さが本当の強さだと私は思うから
#ifdef DAIJOBU
#include "/home/v-o_o-v/deb.h"
#define deb(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#include <bits/stdc++.h>
#define deb(x...)
#endif 

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	set<long long> s;
	long long n;
	cin >> n;
	for(long long i = 1; i * i <= n; i++){
		if(n % i == 0){
			s.insert(i - 1);
			s.insert(n / i - 1);
		}
	}
	for(auto num: s)cout << num << ' ';
	return 0;
}
// Write Here
