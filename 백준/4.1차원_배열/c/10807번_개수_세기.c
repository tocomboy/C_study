#include <stdio.h>
#include <malloc.h>

/*�� N���� ������ �־����� ��, ���� v�� �� ������ ���ϴ� ���α׷��� �ۼ��Ͻÿ�.*/

int main(){
    //int N, v, i, integer[100], count=0; // 1��
    int N, v, i, *integer, count=0; // 2��
    
    scanf("%d", &N);
    /*
    for(i=0; i<N; i++){ // 1��
        scanf("%d", &integer[i]);
    }
    */
    integer = (int*)malloc(sizeof(int)*N); // 2��
    for(i=0; i<N; i++){
        scanf("%d", integer+i);
    }
    scanf("%d", &v);


    for(i=0; i<N; i++){
        if(integer[i] == v) count++;
    }
    printf("%d", count);
    
    free(integer);
    return 0;
}