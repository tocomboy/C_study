#include <stdio.h>
#include <string.h>

/*���ڿ� S�� �Է¹��� �Ŀ�, �� ���ڸ� R�� �ݺ��� �� ���ڿ� P�� ���� �� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. ��, ù ��° ���ڸ� R�� �ݺ��ϰ�, �� ��° ���ڸ� R�� �ݺ��ϴ� ������ P�� ����� �ȴ�. 
S���� QR Code "alphanumeric" ���ڸ� ����ִ�. QR Code "alphanumeric" ���ڴ� 0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ\$%*+-./: �̴�.*/

/*ù° �ٿ� �׽�Ʈ ���̽��� ���� T(1 �� T �� 1,000)�� �־�����. �� �׽�Ʈ ���̽��� �ݺ� Ƚ�� R(1 �� R �� 8), ���ڿ� S�� �������� ���еǾ� �־�����. S�� ���̴� ��� 1�̸�, 20���ڸ� ���� �ʴ´�. */

/*�� �׽�Ʈ ���̽��� ���� P�� ����Ѵ�.*/

int main(){
    int T, R, i, j, k;
    char S[20];
    scanf("%d", &T);
    for(i=0; i<T; i++){
        scanf("%d %s", &R, S);
        for(j=0; j<strlen(S); j++){
            for(k=0; k<R; k++){
                printf("%c", S[j]);
            }
        }
        printf("\n");
    }

    return 0;
}