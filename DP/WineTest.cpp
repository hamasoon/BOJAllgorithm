#include <iostream>
using namespace std;

int cache[1001] = {0};
int s[1001] = {0};
int v[1001] = {0};

int MAXNUM(int a, int b){if(a>b) return a; return b;}
bool MAX(int a, int b){if(a>=b) return true; return false;}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, ret = 0, start = 0; cin >> N;
    for(int i = 0; i < N; i++){
        cin >> v[i];
        cache[i] = 1; // 주의 할 점 2
    }
    cache[0] = 0; // 주의 할 점 1

    s[N-1] = N-1; cache[N-1] = 1;

    for (int i = N - 1; i >= 0 ; --i) {
        for (int j = i + 1; j < N ; ++j) {
            if(v[i] >= v[j]) continue;
            if(MAX(cache[j], cache[i])){
                s[i] = j;
                cache[i] = cache[j] + 1;
            }
        }
    }

    for(int i = 0; i < N; i++)
        ret = MAXNUM(cache[i], ret);

    cout << ret;
}