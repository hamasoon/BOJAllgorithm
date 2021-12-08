#include <iostream>
#include <cstring>

using namespace std;

bool Board[50][50];

int check(int x, int y){
	int cnt=0; 
    bool prev = !Board[x][y];
	
	for (int i = 0; i < 8; i++){
		for (int j = 0; j < 8; j++){
			if(prev == Board[i + x][j + y]) cnt++;
            prev = !prev;
		}
        prev = !prev;
	}
	return cnt < 32 ? cnt : 64-cnt;
}

int main(){
	int N, M; scanf("%d %d", &N, &M);

	for (int i = 0; i < N; i++){
		string S; cin >> S;
		for (int j = 0; j < M; j++){
			if(S[j] == 'W') Board[i][j] = true;
			else Board[i][j] = false;
		}
	}

	int min = 65;

	for (int i = 0; i < N-7; i++){
		for (int j = 0; j < M-7; j++){
			int temp = check(i, j);
			if(temp < min) min = temp;
		}
	}

	cout << min;
}