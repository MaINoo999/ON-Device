//#include <stdio.h>
//
//void main() {
//	int a = 10;										// ��������
//	int* pa;										// ������ ����(int �ȿ����� *�����ͺ��� ��ȣ)
//	pa = &a;										// ����a�� �ּҰ��� �����ͺ����� ����
//
//	printf("&a: %p, pa: %p\n", &a, pa);
//	//printf("&a: %u, pa: %u\n", &a, pa);	
//	printf("a: %d, *pa: %d\n", a, *pa);				// *(�ڵ� �ȿ����� ������ �����ڰ� �۵��Ѵ�)
//
//	*pa = 20;
//	printf("a: %d, *pa: %d\n", a, *pa);
//	printf("pa + 1: %p\n", pa + 1);					//�������� ũ��� 4����Ʈ ũ�⸦ �������־� 4����Ʈ�� �����Ѵ�.
//	char c = 'a';
//	pa = &c;
//	printf("pa: %p, pa + 1: %p\n", pa, pa + 1);
//}