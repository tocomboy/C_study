#include <stdio.h>
#include <string.h>

/*ù° �ٿ� ���ĺ� �빮�ڷ� �̷���� �ܾ �־�����. �ܾ��� ���̴� 2���� ũ�ų� ����, 15���� �۰ų� ����.*/

/*ù° �ٿ� ���̾��� �ɱ� ���ؼ� �ʿ��� �ּ� �ð��� ����Ѵ�.*/

int main(){
    char number_str[16];
    int i, time=0;
    gets(number_str);
    for(i=0; i<strlen(number_str); i++){
        if(number_str[i] >= 'A' && number_str[i] <= 'C'){
            time += 3;
        } else if(number_str[i] >= 'D' && number_str[i] <= 'F'){
            time += 4;
        } else if(number_str[i] >= 'G' && number_str[i] <= 'I'){
            time += 5;
        } else if(number_str[i] >= 'J' && number_str[i] <= 'L'){
            time += 6;
        } else if(number_str[i] >= 'M' && number_str[i] <= 'O'){
            time += 7;
        } else if(number_str[i] >= 'P' && number_str[i] <= 'S'){
            time += 8;
        } else if(number_str[i] >= 'T' && number_str[i] <= 'V'){
            time += 9;
        } else if(number_str[i] >= 'W' && number_str[i] <= 'Z'){
            time += 10;
        }
    }
    printf("%d", time);

    return 0;
}