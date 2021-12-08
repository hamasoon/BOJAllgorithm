#include <cstdio>

void grading(int x){
    if(x>96)
        printf("A+");
    else if(x>89)
        printf("A");
    else if(x>86)
        printf("B+");
    else if(x>79)
        printf("B");
    else if(x>76)
        printf("C+");
    else if(x>69)
        printf("C");
    else if(x>66)
        printf("D+");
    else if(x>59)
        printf("D");  
    else
        printf("F");
        
    printf("\n");
}

int main()
{
    int n;
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++){
        char a[15];
        int num = 0;
		scanf("%s %d", a, &num);

        printf("%s ", a);
        grading(num);
    }
}

/*#include <cstdio>// better code
​
char name[101];
int  score;
​
int main() {

    int hobbits;
    scanf("%d", &hobbits);

    while (hobbits--) {
        scanf("%s %d", name, &score);
        printf("%s %c", name, "FFFFFFDCBAA"[score/10]);
        score < 60 ? printf("\n") : printf("%c\n", score-100 ? "       +++++"[score%10] : '+');
    }
}*/