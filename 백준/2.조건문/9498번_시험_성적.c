#include <stdio.h>

/*���� ������ �Է¹޾� 90 ~ 100���� A, 80 ~ 89���� B, 70 ~ 79���� C, 60 ~ 69���� D, ������ ������ F�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.*/

/*ù° �ٿ� ���� ������ �־�����. ���� ������ 0���� ũ�ų� ����, 100���� �۰ų� ���� �����̴�.*/

int main(){
    int score;
    scanf("%d", &score);
    if(score >= 90 && score <= 100) printf("A");
    else if(score >= 80 && score < 90) printf("B");
    else if(score >= 70 && score < 80) printf("C");
    else if(score >= 60 && score < 70) printf("D");
    else printf("F");

    return 0;
}