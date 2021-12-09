#include <iostream>
#include <vector>
#include <algorithm>
#define MAX 2000000001
using namespace std;

vector<int> idx;
vector<int> v;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N; cin >> N;

	for (int i = 0; i < N; i++){
		int num; cin >> num; 
		idx.push_back(num);
		v.push_back(num);
	}

	sort(idx.begin(), idx.end());
	idx.erase(unique(idx.begin(), idx.end()), idx.end()); // set없이 vector로 정렬하는 방법입니다.

	for (const int& a : v)
		cout << lower_bound(idx.begin(), idx.end(), a) - idx.begin() << " ";
}