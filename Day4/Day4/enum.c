//#include <stdio.h>  // ǥ�� ����� �Լ����� ����ϱ� ���� ��� ����
//
//// ������ ��Ÿ���� ������(enum) ����
//enum season {
//    SPRING, // 0
//    SUMMER, // 1
//    FALL,   // 2
//    WINTER  // 3
//};
//
//int main() {
//    enum season s;    // ������ ���� s ���� (������ ������ ����)
//    char* ps = NULL;  // ���ڿ� ������ ps ���� �� �ʱ�ȭ (���� Ȱ�� �̸� �����)
//
//    s = SUMMER;  // ���� ������ SUMMER(����)�� ����
//
//    // s�� ���� ���� ������ ���ڿ��� ps�� �Ҵ��ϴ� switch��
//    switch (s) {
//    case SPRING:  // s�� SPRING(0)�̸�
//        ps = "Inline skating";  // �� ����Ȱ�� ����
//        break;                 // switch ����
//    case SUMMER:  // s�� SUMMER(1)�̸�
//        ps = "Swimming";       // ���� ����Ȱ�� ����
//        break;                 // switch ����
//    case FALL:    // s�� FALL(2)�̸�
//        ps = "Hiking";         // ���� ����Ȱ�� ����
//        break;                 // switch ����
//    case WINTER:  // s�� WINTER(3)�̸�
//        ps = "Skiing";         // �ܿ� ����Ȱ�� ����
//        break;                 // switch ����
//    default:      // ����ġ ���� ���� ������ �� ����
//        ps = "No activity";   // �⺻ ���ڿ� ����
//        break;
//    }
//
//    // ��� ���, �ѱ� "������ ����Ȱ��: "�� ���ڿ� ps�� �Բ� ���
//    printf("������ ����Ȱ��: %s\n", ps);
//
//    return 0;  // ���α׷� ���� ����
//}
