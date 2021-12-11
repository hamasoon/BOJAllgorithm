#include <iostream>
#define MAX 1000000
using namespace std;

int A[MAX];

int N;
int B, C;
long long sum = 0;

int subSupNum(int x){
    return 0;
}

int main()
{
    cin >> N;
    
    for(int i=0; i<N; i++){
        cin >> A[i];
    }
    
    cin >> B >> C;
    
    
    for(int i=0; i<N; i++){
        if(A[i] <= B) sum++;
        else if((A[i] - B)%C == 0) sum += (A[i] - B)/C + 1;
        else sum += (A[i] - B)/C + 2;
    }
    cout << sum;
}