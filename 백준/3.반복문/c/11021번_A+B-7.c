#include <stdio.h>

/*�� ���� A�� B�� �Է¹��� ����, A+B�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.*/

int main(){
    int T, A, B, i;
    scanf("%d", &T);
    for(i=0; i<T; i++){
        scanf("%d %d", &A, &B);
        printf("Case #%d: %d\n", i+1, A+B);
    }

    return 0;
}