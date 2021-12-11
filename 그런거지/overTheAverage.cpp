#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    int score[1000] = { };
    
    for(int k=0; k<n; k++){
        int cnt; cin >> cnt;
        double avg = 0;
        for(int i=0; i<cnt; i++){
            int num; cin >> num;
            score[i] = num;
            avg += num;
        }
        avg /= cnt;
        int per;
        for(int i=0; i<cnt; i++){
            if(score[i] > avg) per++;
        }
        
        double percent = (double)per/cnt*100;
        
        per=0;
        
        cout << fixed;
		cout.precision(3);
		cout << percent << "%" << endl;
    }
}