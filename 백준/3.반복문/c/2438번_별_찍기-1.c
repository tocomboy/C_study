#include <stdio.h>

/*ù° �ٿ��� �� 1��, ��° �ٿ��� �� 2��, N��° �ٿ��� �� N���� ��� ����*/

int main(){
    int N, i=1, j;
    scanf("%d", &N);
    do{
        for(j=0; j<i; j++){
            printf("*");
        }
        printf("\n");
        i++;
    }while(i<=N);

    return 0;
}