#include <stdio.h>
/*�� ���� A�� B�� �־����� ��, A�� B�� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.*/
int main(){
    int A, B;
    scanf("%d %d", &A, &B);
    if(A>B) printf(">");
    else if(A<B) printf("<");
    else if(A==B) printf("==");
    
    return 0;
}