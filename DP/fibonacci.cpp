#include <cstdio>
#include <vector>
#define MAX 41
using namespace std;
typedef pair<int, int> pii;

vector<pii> v(MAX, make_pair(-1, -1));

template <typename T,typename U>                                                   
std::pair<T,U> operator+(const std::pair<T,U> & l,const std::pair<T,U> & r) {   
    return {l.first+r.first,l.second+r.second};                                    
}    

pii fibonacci(int n){
	if(v[n].first != -1) return v[n];

	if(n == 0) return v[0] = make_pair(1, 0);
	if(n == 1) return v[1] = make_pair(0, 1);

	return v[n] = fibonacci(n-1) + fibonacci(n-2);
}

int main(){
	int N; scanf("%d", &N);
	while(N--){
		int num; scanf("%d", &num);
		pii ret = fibonacci(num);
		printf("%d %d\n", ret.first, ret.second);
	}
}