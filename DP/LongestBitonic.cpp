#include <iostream>
using namespace std;

int LIS[1001] = {0};
int LDS[1001] = {0};
int LBS[1001] = {0};
int v[1001] = {0};

int MAXNUM(int a, int b){if(a>b) return a; return b;}
bool MAX(int a, int b){if(a>b) return true; return false;}
bool MIN(int a, int b){if(a<b) return true; return false;}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, ret = 0, start = 0; cin >> N;
    for(int i = 0; i < N; i++){
        cin >> v[i];
        LIS[i] = 1;
        LDS[i] = 1;
    }
    LIS[0] = 0;
    LDS[0] = 0;

    for (int i = N - 1; i >= 0 ; --i) {
        for (int j = i + 1; j < N ; ++j) {
            if(v[i] > v[j]){
                if(MAX(LIS[j], LIS[i])){
                    LIS[i] = LIS[j] + 1;
                }
            }
            else{
                if(MIN(LIS[j], LIS[i])){
                    LDS[i] = LDS[j] + 1;
                }
            }
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N ; ++j) {
            if(MAX(LBS[i], LDS[i] + LIS[j])){
                LBS[i] = LDS[i] + LIS[j];
            }
        }
    }
    
    for (int i = 0; i < N; i++)
    {
        ret = MAXNUM(ret, LBS[i]);
    }
    
    cout << ret;
}