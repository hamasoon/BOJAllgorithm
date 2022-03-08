#include <iostream>
using namespace std;

int cache[1001] = {0};
int s[1001] = {0};
int v[1001] = {0};

int MAXNUM(int a, int b){if(a>b) return a; return b;}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, ret = 0, start = 0; cin >> N;
    for(int i = 0; i < N; i++) cin >> v[i];

    cache[N-1] = v[N-1];

    for (int i = N - 2; i >= 0 ; --i) {
        cache[i] = MAXNUM(cache[i+1] + v[i], v[i]);
    }

    for(int i = 0; i < N; i++)
        ret = MAXNUM(cache[i], ret);
    
    cout << ret;
}