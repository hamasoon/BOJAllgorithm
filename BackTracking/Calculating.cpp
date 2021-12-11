#include <iostream>
#include <vector>
using namespace std;

int Ops[4] = {};
int Min = 1000000000, Max = -1000000000;
vector<int> v;

int Calc(int ret, int num, int op){
	switch (op){
	case 0:
		ret += num;
		break;
	case 1:
		ret -= num;
		break;
	case 2:
		ret *= num;
		break;
	case 3:
		ret /= num;
		break;
	}
	return ret;
}

void solve(int ret = 0, int idx = 0){
	if(v.size() == idx){
		if(ret > Max) Max = ret;
		if(ret < Min) Min = ret;
		return;
	}

	if(idx == 0){ret = v[0]; solve(ret, idx+1); return;}

	for (int i = 0; i < 4; i++){
		if(Ops[i] == 0) continue;
		Ops[i] -= 1;
		solve(Calc(ret, v[idx], i), idx+1);
		Ops[i] += 1;
	}
	return;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N; cin >> N;

	for(int i = 0; i < N; i++){
		int num; cin >> num;
		v.push_back(num);
	}

	for(int i = 0; i < 4; i++){
		int num; cin >> num;
		Ops[i] = num;
	}

	solve();

	cout << Max << "\n" << Min;	
}