#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <tuple>
#include <string>
#include <algorithm>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	string s;
	getline(cin, s);
	while ("END" != s) {
		auto cs = vector<char>(26);
		auto isGood = bool{ true };
		for (const auto& x : s) {
			if (' ' == x) {
				continue;
			}

			++cs[x - 'A'];
			if (2 == cs[x - 'A']) {
				isGood = false;
				break;
			}
		}

		if (isGood) {
			cout << s << '\n';
		}

		getline(cin, s);
	}

	return 0;
}