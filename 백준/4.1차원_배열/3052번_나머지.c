#include <stdio.h>

/*�� �ڿ��� A�� B�� ���� ��, A%B�� A�� B�� ���� ������ �̴�. ���� ���, 7, 14, 27, 38�� 3���� ���� �������� 1, 2, 0, 2�̴�. 
�� 10���� �Է¹��� ��, �̸� 42�� ���� �������� ���Ѵ�. �� ���� ���� �ٸ� ���� �� �� �ִ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.*/

/*ù° �ٺ��� ����° �� ���� ���ڰ� �� �ٿ� �ϳ��� �־�����. �� ���ڴ� 1,000���� �۰ų� ����, ���� �ƴ� �����̴�.*/

/*ù° �ٿ�, 42�� �������� ��, ���� �ٸ� �������� �� �� �ִ��� ����Ѵ�.*/

int main(){
    int input_data[10], i, j, remainder[10] = {0, }, data_in_remainder = 0, count=0;
    for(i=0; i<10; i++){
        scanf("%d", &input_data[i]);
        input_data[i] = input_data[i] % 42;
    }

    for(i=0; i<10; i++){
        data_in_remainder = 0;
        for(j=0; j<count; j++){
            if(data_in_remainder == 1) break;
            if(input_data[i] == remainder[j]) data_in_remainder = 1; 
        }
        if(data_in_remainder == 0){
            remainder[count] = input_data[i];
            count++;
        }
    }
    printf("%d", count);

    return 0;
}