#include <stdio.h>
#include <string.h>
#include <malloc.h>

/*�׷� �ܾ�� �ܾ �����ϴ� ��� ���ڿ� ���ؼ�, �� ���ڰ� �����ؼ� ��Ÿ���� ��츸�� ���Ѵ�. ���� ���, ccazzzzbb�� c, a, z, b�� ��� �����ؼ� ��Ÿ����, 
kin�� k, i, n�� �����ؼ� ��Ÿ���� ������ �׷� �ܾ�������, aabbbccb�� b�� �������� ��Ÿ���� ������ �׷� �ܾ �ƴϴ�.
�ܾ� N���� �Է����� �޾� �׷� �ܾ��� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.*/

/*ù° �ٿ� �ܾ��� ���� N�� ���´�. N�� 100���� �۰ų� ���� �ڿ����̴�. ��° �ٺ��� N���� �ٿ� �ܾ ���´�. �ܾ�� ���ĺ� �ҹ��ڷθ� �Ǿ��ְ� �ߺ����� ������, ���̴� �ִ� 100�̴�.*/

/*ù° �ٿ� �׷� �ܾ��� ������ ����Ѵ�.*/
int Group_Word_Checker(char *word){
    int i, j, len=strlen(word), result=1;
    for(i=0; i<len; i++){
        while(word[i] == word[i+1]) i++; // �ݺ��Ǵ� ���ĺ� ������ �̵�.
        for(j=i+2; j<len; j++){
            if(word[i] == word[j]) result = 0; // ���� ��ĭ ����� index ���� ������ ���ĺ��� �����ϸ� �׷� �ܾ �ƴ�.
        }
    }

    return result;
}

int main(){
    int N, i, count = 0;
    char *word;
    word = (char*)malloc(sizeof(char)*101);

    scanf("%d", &N);
    for(i=0; i<N; i++){
        scanf("%s", word);
        count += Group_Word_Checker(word);
    }

    printf("%d", count);

    free(word);
    return 0;
}