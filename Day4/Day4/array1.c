///* ���ڸ� �޾Ƽ� ���� �ڵ� */
//#include <stdio.h>
//
//void main() {
//	char animal[5][20];															// ���ڿ� �ּ�
//	int size;
//
//	size = sizeof(animal) / sizeof(animal[0]);
//	printf("%d\n", size);
//
//	for (int i = 0; i < size; i++) {
//		scanf_s("%s", animal[i], (unsigned)sizeof(animal[i]));					// animal[i] ĳ���� �迭�� 1������ ��Ÿ��
//	}
//	for (int i = 0; i < size; i++) {
//		printf("%s ", animal[i]);
//	}
//}