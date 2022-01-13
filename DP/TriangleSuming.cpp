#include <iostream>
using namespace std;
    
int cache[501][501] = {};
int Data[501][501] = {};

int main(){
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int N; cin >> N;
    
	for (int i = 0; i < N; i++)
		for (int j = 0; j <= i; j++)
			cin >> Data[i][j];
    
	for(int i = N-1; i >= 0; i--)
		for (int j = 0; j < i+1; j++)
            cache[i][j] =  Data[i][j] + ((cache[i+1][j] > cache[i+1][j+1]) ? cache[i+1][j] : cache[i+1][j+1]);
    
    cout << cache[0][0];
}