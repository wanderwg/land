#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {
	int i = 0;
	int flag = 0;
	for (; i < 3; ++i) {
		printf("�������������룺");
		char password[10] = { 0 };
		scanf("%s", password);
		if (strcmp(password, "123456") == 0) {
			flag = 1;
			printf("��½�ɹ�\n");
			break;
		}
	}
	if (flag == 0) {
		printf("�����������3�Σ���ֹ��¼\n");
	}
	system("pause");
	return 0;
}
