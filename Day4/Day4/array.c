///* 3���� 4���� ������ �Է¹޾� ������ ����� ���Ͻÿ�. */
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//void main() {
//	
//	int score[3][4];					//2���� �迭
//	double avg;
//	int total;
//
//        // ���� �Է�
//    for (int i = 0; i < 3; i++) {
//        printf("%d��° �л��� 4���� �Է��ϼ���.:\n", i + 1);
//        for (int j = 0; j < 4; j++) {
//            printf("%d��° ���� ����: ", j + 1);
//            scanf("%d", &score[i][j]);
//        }
//    }
//
//    printf("\n--- �л��� ������ ��� ---\n");
//
//    // ������ ��� ��� �� ���
//    for (int i = 0; i < 3; i++) {
//        total = 0;
//        for (int j = 0; j < 4; j++) {
//            total += score[i][j];
//        }
//        avg = total / 4.0;
//
//        printf("%d��° �л� - ����: %d, ���: %.2f\n", i + 1, total, avg);
//    }
//}