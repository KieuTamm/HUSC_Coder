#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char* TaoMatKhau(const char* O, const char* E){
    int daiO = strlen(O);
    int daiE = strlen(E);
    int max = (daiO > daiE) ? daiO : daiE;
    char* MatKhau = (char*)malloc(sizeof(char) * (daiO + daiE + 1));
    if (MatKhau == NULL){
        exit(EXIT_FAILURE);
    }
    int bienchen = 0;
    for (int i = 0; i < max; i++){
        MatKhau[bienchen++] = O[i];
        MatKhau[bienchen++] = E[i];
    }
    MatKhau[bienchen] = '\0';
    return MatKhau;
}
int main(){
    char O[100], E[100];
    fgets(O, sizeof(O), stdin);
    O[strlen(O) - 1] = '\0';
    fgets(E, sizeof(E), stdin);
    E[strlen(E) - 1] = '\0';
    char* MatKhau = TaoMatKhau(O, E);
    printf("%s", MatKhau);
    return 0;
}
