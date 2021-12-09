#include <iostream>
#include <utility>
#include <set>
#include <algorithm>
using namespace std;

struct compare{
	bool operator() (const string& a, const string& b) const {
		if(a.length() == b.length()){
			for(int i=0; i<a.length(); i++){
				if(a[i] != b[i]) return a[i] < b[i];
			}
		}
		return a.length() < b.length();
	};
};


int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N; cin >> N;

	set<string, compare> v; //comapre는 구조체 여야합니다...

	for(int i=0; i<N; i++){
		string word; cin >> word;
		v.insert(word);
	}

	for(auto str : v) cout << str << "\n";
}