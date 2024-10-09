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
	printf("1.문자열을 입력하시오 :");
	scanf("%s", pstr);
	printf("함수 호출 전 = %s\n", pstr);
	Capital(pstr);
	printf("함수 호출 후 = %s\n", pstr);



	int BigNum, SmallNum;
	printf("2.두 정수를 입력하시오 :");
	scanf("%d %d", BigNum, SmallNum);
	FixBigNum(&BigNum, &SmallNum);
	printf("%d와(과)%d중 큰 수는%d\n", BigNum, SmallNum ,BigNum);

	int num;
	int sum;
	printf("3.정수를 입력하시오 :");
	scanf("%d", num);
	GetSum(&num, &sum);
	printf("1 ~ %d 의 총합 :%d\n", num, sum);

	int Num[NumLeng];
	printf("4.오름차순 정렬");
	for (int i = 0; i < NumLeng; i++) {
		printf("[%d]번째 정수 입력 :", i);
		scanf("%d", &Num[i]);
	}
	UpBubble(Num);

}