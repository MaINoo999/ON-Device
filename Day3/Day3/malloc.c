//#include <stdio.h>
//#include <stdlib.h>
//
//void main() {
//
//	int* ptr;
//	int size = 10;
//
//	ptr = (int*)malloc(sizeof(int) * size);
//		if (ptr == NULL) {
//			perror("�޸� �Ҵ� ����");
//			return 1;
//	}
//	for (int i = 0; i < size; i++) {
//		ptr[i] = i + 1;
//	}
//
//	for (int i = 0; i < size; i++) {
//		printf("%d ", ptr[i]);
//	}
//	free(ptr);										// �����޸� ����(�޸� ��ȯ)
//}