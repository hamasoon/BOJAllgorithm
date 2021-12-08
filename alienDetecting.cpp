#include <cstdio>

void TroyMartian(int a, int e){
    if(a>2 && e<5) printf("TroyMartian\n");
}

void VladSaturnian(int a, int e){
    if(a<7 && e>1) printf("VladSaturnian\n");
}

void GraemeMercurian(int a, int e){
    if(a<3 && e<4) printf("GraemeMercurian\n");
}

int main(){
    int ant, eye;
    scanf("%d", &ant);
    scanf("%d", &eye);
    
    TroyMartian(ant, eye);
    VladSaturnian(ant, eye);
    GraemeMercurian(ant, eye);
}