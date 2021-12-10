#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

typedef pair<int, int> pii;

vector<pii> blank;
int Board[9][9];

bool Check(int y, int x, int num){
    int sy = y/3;
    int sx = x/3;
	for (int i = 0; i < 9; i++){
		if(Board[y][i] == num && i!=x) return false;
		if(Board[i][x] == num && i!=y) return false;
	}
    for (int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(Board[sy*3+i][sx*3+j]== num && (sy*3+i!=y)&&(sx*3+j!=y))return false;
        }
    }
	return true;
}

bool solve(int idx = 0){
	if(idx == blank.size()) return true;

	for (int i = 1; i < 10; i++){
		if(Check(blank[idx].first, blank[idx].second, i)){
			Board[blank[idx].first][blank[idx].second] = i;
			if(solve(idx+1)) return true;
			Board[blank[idx].first][blank[idx].second] = 0;
		}
	}

	return false;
}

int main(){
	for (int i = 0; i < 9; i++){
		scanf("%d %d %d %d %d %d %d %d %d", 
		&Board[i][0], &Board[i][1], &Board[i][2], &Board[i][3], 
		&Board[i][4], &Board[i][5], &Board[i][6], &Board[i][7], &Board[i][8]);
	}

	for (int i = 0; i < 9; i++){
		for (int j = 0; j < 9; j++){
			if(Board[i][j] == 0) blank.push_back(make_pair(i, j));
		}
	}

	solve();

	for (int i = 0; i < 9; i++){
		printf("%d %d %d %d %d %d %d %d %d\n", 
		Board[i][0], Board[i][1], Board[i][2], Board[i][3], 
		Board[i][4], Board[i][5], Board[i][6], Board[i][7], Board[i][8]);
	}
}