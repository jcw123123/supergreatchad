#include<stdio.h>
#define NumLeng 8

void Capital(char *pstr) {
	while (!(*pstr == NULL)) {
		if (*pstr >= 97 && *pstr <=122) {
			*pstr -= 32;
			pstr += 1;
		}
	}
	
}

void FixBigNum(int *BigNum, int *SmallNum) {
	int* temp;
	if (*BigNum < *SmallNum) {
		*temp = *SmallNum;
		*SmallNum = *BigNum;
		*BigNum = *SmallNum;
	}
}

void GetSum(int *num, int *sum) {

	for (int i = 1; i < *num; i++) {
		*sum += i;
	}
}

void UpBubble(int Num[8]) {

}

int main() {
	char str[100];
	char *pstr;
	pstr = str;
	printf("1.���ڿ��� �Է��Ͻÿ� :");
	scanf("%s", pstr);
	printf("�Լ� ȣ�� �� = %s\n", pstr);
	Capital(pstr);
	printf("�Լ� ȣ�� �� = %s\n", pstr);



	int BigNum, SmallNum;
	printf("2.�� ������ �Է��Ͻÿ� :");
	scanf("%d %d", BigNum, SmallNum);
	FixBigNum(&BigNum, &SmallNum);
	printf("%d��(��)%d�� ū ����%d\n", BigNum, SmallNum ,BigNum);

	int num;
	int sum;
	printf("3.������ �Է��Ͻÿ� :");
	scanf("%d", num);
	GetSum(&num, &sum);
	printf("1 ~ %d �� ���� :%d\n", num, sum);

	int Num[NumLeng];
	printf("4.�������� ����");
	for (int i = 0; i < NumLeng; i++) {
		printf("[%d]��° ���� �Է� :", i);
		scanf("%d", &Num[i]);
	}
	UpBubble(Num);

}