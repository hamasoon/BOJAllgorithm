#include <cstdio>

int main()
{
    bool ret[10000] = {false};
    int num = 0;

    for(int i=1; i<10000; i++){
		num = i;
		if(ret[i]) continue;
		
		while(num < 10000){
			int temp = num;
			while(num != 0){
				temp += num % 10;
				num /= 10;
			}
            if(temp < 10000) ret[temp] = true;
			num = temp;
		}
        if(!ret[i]) printf("%d\n", i);
    }
}