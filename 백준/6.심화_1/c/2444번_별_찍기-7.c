#include <stdio.h>

/*������ ���� ��Ģ�� ������ �ڿ� ���� ��� ������.*/

/*ù° �ٿ� N(1 �� N �� 100)�� �־�����.*/

/*ù° �ٺ��� 2��N-1��° �ٱ��� ���ʴ�� ���� ����Ѵ�.*/

/*
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
*/

int main(){
    int N, i, j, star=1, blank;
    scanf("%d", &N);
    blank = N-1;
    for(i=1; i<=(2*N)-1; i++){ // �߰� ���� �� 2���� �þ ���� 2���� ���� / ��ĭ�� ���缭 �پ����� �߰� ���ĺ��� �þ.
        if(i<N){
            for(j=0; j<blank; j++){
                printf(" ");
            }
            for(j=0; j<star; j++){
                printf("*");
            }
            printf("\n");
            blank--;
            star += 2;
        } else {
            for(j=0; j<blank; j++){
                printf(" ");
            }
            for(j=0; j<star; j++){
                printf("*");
            }
            printf("\n");
            blank++;
            star -= 2;
        }
    }

    return 0;
}