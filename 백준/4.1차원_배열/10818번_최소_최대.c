#include <stdio.h>
#include <malloc.h>
//����
/*N���� ������ �־�����. �̶�, �ּڰ��� �ִ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.*/
/*// �Է�
ù° �ٿ� ������ ���� N (1 �� N �� 1,000,000)�� �־�����. ��° �ٿ��� N���� ������ �������� �����ؼ� �־�����. ��� ������ -1,000,000���� ũ�ų� ����, 1,000,000���� �۰ų� ���� �����̴�.
*/
//���
/*ù° �ٿ� �־��� ���� N���� �ּڰ��� �ִ��� �������� ������ ����Ѵ�.*/

int main(){
    int N, *integer, i, biggest, smallest;
    scanf("%d", &N);
    integer = (int*)malloc(sizeof(int)*N);
    for(i=0; i<N; i++){
        scanf("%d", (integer+i));
    }
    biggest = *(integer+0);
    smallest = *(integer+0);
    for(i=0; i<N; i++){
        if(biggest < *(integer+i)) biggest = *(integer+i);
        if(smallest > *(integer+i)) smallest = *(integer+i);
    }
    printf("%d %d", smallest, biggest);

    return 0;
}