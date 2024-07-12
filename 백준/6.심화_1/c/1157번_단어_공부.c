#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*���ĺ� ��ҹ��ڷ� �� �ܾ �־�����, �� �ܾ�� ���� ���� ���� ���ĺ��� �������� �˾Ƴ��� ���α׷��� �ۼ��Ͻÿ�. ��, �빮�ڿ� �ҹ��ڸ� �������� �ʴ´�.*/

/*ù° �ٿ� ���ĺ� ��ҹ��ڷ� �̷���� �ܾ �־�����. �־����� �ܾ��� ���̴� 1,000,000�� ���� �ʴ´�.*/

/*ù° �ٿ� �� �ܾ�� ���� ���� ���� ���ĺ��� �빮�ڷ� ����Ѵ�. ��, ���� ���� ���� ���ĺ��� ���� �� �����ϴ� ��쿡�� ?�� ����Ѵ�.*/
int main(){
    int i, temp, alphabet_count[28] = {0, }, max_count=0, prev_max_count=-1, index= 0, prev_index=-1;
    char str[1000001];
    scanf("%s", str);

    int len = strlen(str); // �ݺ��� �ȿ��� strlen ����ϸ� �ð� �ʰ� �ɸ�! ���� ��� X

    for(i=0; i<len; i++){
        if('a' <= str[i] && str[i] <= 'z') str[i] = toupper(str[i]);
        alphabet_count[(int)str[i]-65] += 1;
    }

    max_count = alphabet_count[0];
    index = 0;

    for(i=1; i<28; i++){
        if(alphabet_count[i] >= max_count){
            prev_max_count = max_count;
            prev_index = index;
            max_count = alphabet_count[i]; // ���ĺ� ī��Ʈ
            index = i; // ���ĺ� Ȯ�ο� �ε���
        }
    }
    
    if(prev_index != index && prev_max_count == max_count) printf("?");
    else printf("%c", index+65);
    

    

    return 0;
}

/*
int main(){ //////////////////// �ð� �ʰ�.
    char str[1000000], max_alphabet, second_max_alphabet;
    int i, j, max_count = 0, second_max_count = 0, temp_count;
    scanf("%s", str);
    int len = strlen(str);
    for(i=0; i<len; i++){
        str[i] = toupper(str[i]);
    }
    for(i=0; i<len; i++){
        
        temp_count = 0;
        for(j=i; j<len; j++){
            if(str[i] == str[j]){
                temp_count++;
            }
        }
        if(max_count < temp_count) { // ���� ���� ���ĺ�
            max_count = temp_count;
            max_alphabet = str[i];
        } else if(second_max_count < temp_count) { // �ι�°�� ���� ���ĺ�
            second_max_count = temp_count;
            second_max_alphabet = str[i];
        }
    }

    if(max_alphabet != second_max_alphabet && max_count == second_max_count){ // ���� ���� ���� ���� �ٸ� ���ĺ��� ���� ���� ���
        printf("?");
    } else{
        printf("%c", max_alphabet);
    }

    return 0;
}
*/