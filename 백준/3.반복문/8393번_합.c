#include <stdio.h>

/*n�� �־����� ��, 1���� n���� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.*/

int main(){
    int n, i, sum=0;
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        sum += i;
    }
    printf("%d", sum);
    return 0;
}