//#define _CRT_SECURE_NO_WARNINGS  // Visual Studio���� ���� ��� ����
//#include <stdio.h>               // ǥ�� ����� �Լ�
//#include <string.h>             // ���ڿ� ���� �Լ� ��� (e.g., strcpy)
//#include <stdlib.h>             // ���� �޸� �Ҵ� �Լ� ��� (e.g., malloc)
//
//// ����ü ����
//// ����� ������ ������ ����
//struct porfile {
//	char name[20];     // �̸� (���ڿ�, �ִ� 19�� + '\0')
//	int age;           // ����
//	double height;     // Ű
//	double weight;     // ������
//	char* info;        // �Ұ� ���� (���� �޸𸮷� ���� ����)
//};
//
//void main() {
//	// ����ü ���� ����
//	struct porfile m;
//
//	// ���� ����� �ʱ�ȭ
//	m.age = 22;
//	m.height = 183;
//	m.weight = 80;
//
//	// ���ڿ� ���� (�̸� �ʱ�ȭ)
//	strcpy(m.name, "��ο�");
//
//	// ���� �޸� �Ҵ�: �Ұ��� �ִ� 80�� ���� ����
//	m.info = (char*)malloc(80);  // malloc�� void*�� ��ȯ�ϹǷ� ����ȯ �ʿ�
//
//	// ����ڷκ��� �Ұ��� �Է� �ޱ�
//	printf("�ڱ�Ұ�: ");
//	gets(m.info);  // ���ڿ��� ���� �����Ͽ� �Է� ���� (����õ �Լ�)
//
//	// ��� ���
//	printf("\n--- ��� ��� ---\n");
//	printf("�̸�: %s\n", m.name);
//	printf("����: %d\n", m.age);
//	printf("Ű: %.1lf\n", m.height);
//	printf("������: %.1lf\n", m.weight);
//	printf("�Ұ�: %s\n", m.info);
//
//	// ���� �޸� ����
//	free(m.info);
//}
