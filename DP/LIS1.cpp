#include <iostream>
using namespace std;

int LIS[1001] = {0};
int LDS[1001] = {0};
int LBS[1001] = {0};
int v[1001] = {0};

int MAXNUM(int a, int b){if(a>b) return a; return b;}
bool MAX(int a, int b){if(a>b) return true; return false;}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, ret = 1, start = 0; cin >> N;
    
    for(int i = 0; i < N; i++){
        cin >> v[i];
        LIS[i] = 1;
        LDS[i] = 1;
        LBS[i] = 1;
    }

    for (int i = N - 1; i >= 0 ; --i) {
        for (int j = i + 1; j < N ; ++j) {
            if(v[i] > v[j]){
                if(MAX(LDS[j] + 1, LDS[i])){
                    LDS[i] = LDS[j] + 1;
                }
            }
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < i; ++j) {
            if(v[i] > v[j]){
                if(MAX(LIS[j] + 1, LIS[i]))
                    LIS[i] = LIS[j] + 1;
            }
        }
        
        for (int j = i + 1; j < N ; ++j) {
            if(v[i] != v[j]){
                if(MAX(LDS[i] + LIS[j], LBS[i])){
                    LBS[i] = LDS[j] + LIS[i];
                    //cout << j << ":" << LDS[j] << " " << i << ":" << LIS[i] << endl;
                }
            }
        }
    }
    
    for (int i = 0; i < N; i++)
    {
        if(MAX(LIS[i], LBS[i]))
            LBS[i] = LIS[i];
        if(MAX(LDS[i], LBS[i]))
            LBS[i] = LDS[i];
        //cout << i << ":" << LDS[i] << " " << LIS[i] << endl;
        ret = MAXNUM(ret, LBS[i]);
    }
    
    cout << ret;
}
//https://yabmoons.tistory.com/143