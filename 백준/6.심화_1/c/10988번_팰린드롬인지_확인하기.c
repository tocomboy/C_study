#include <stdio.h>
#include <string.h>

/*���ĺ� �ҹ��ڷθ� �̷���� �ܾ �־�����. �̶�, �� �ܾ �Ӹ�������� �ƴ��� Ȯ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Ӹ�����̶� ������ ���� ���� �Ųٷ� ���� �� �Ȱ��� �ܾ ���Ѵ�. 
level, noon�� �Ӹ�����̰�, baekjoon, online, judge�� �Ӹ������ �ƴϴ�.*/

/*ù° �ٿ� �ܾ �־�����. �ܾ��� ���̴� 1���� ũ�ų� ����, 100���� �۰ų� ������, ���ĺ� �ҹ��ڷθ� �̷���� �ִ�.*/

/*ù° �ٿ� �Ӹ�����̸� 1, �ƴϸ� 0�� ����Ѵ�.*/
int main(){
    char str[100];
    int i, result = 1;
    scanf("%s", str);

    int len = strlen(str);
    for(i=0; i<len; i++){
        if(str[i] != str[len-i-1]) result = 0;
    }
    printf("%d", result);

    return 0;
}