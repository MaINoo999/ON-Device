#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LEN 20

// ȸ�� ������ �����ϴ� ����ü ����
typedef struct {
    int num;                // ȸ�� ��ȣ
    char name[MAX_NAME_LEN]; // ȸ�� �̸�
    double weight;          // ȸ�� ü��
} Fitness;

// ��ü ��� ȸ�� �� ��� �Լ�
void total_number(int count) {
    printf("\n��ü ��� ȸ�� ��: %d��\n", count);
}

// ��� ü���� ����ϴ� �Լ�
double average_weight(Fitness** pary, int count) {
    double sum = 0.0;

    for (int i = 0; i < count; i++) {
        sum += pary[i]->weight;
    }

    return (count > 0) ? (sum / count) : 0.0;
}

// �ְ� ü���� ���� ȸ���� �ε����� ��ȯ�ϴ� �Լ�
int max_weight(Fitness** pary, int count) {
    if (count == 0) return -1;

    int maxIndex = 0;
    double maxWeight = pary[0]->weight;

    for (int i = 1; i < count; i++) {
        if (pary[i]->weight > maxWeight) {
            maxWeight = pary[i]->weight;
            maxIndex = i;
        }
    }

    return maxIndex;
}

// Ư�� �ε����� ȸ�� ���� ��� �Լ�
void print_info(Fitness** pary, int index) {
    if (index < 0) {
        printf("�ش� ȸ�� ������ �����ϴ�.\n");
        return;
    }

    printf("\n--- ȸ�� ���� ---\n");
    printf("��ȣ: %d\n", pary[index]->num);
    printf("�̸�: %s\n", pary[index]->name);
    printf("ü��: %.2f kg\n", pary[index]->weight);
}

// �������� �Ҵ�� �޸𸮸� �����ϴ� �Լ�
void free_ary(Fitness** pary, int count) {
    for (int i = 0; i < count; i++) {
        free(pary[i]);  // �� ȸ�� ���� �޸� ����
    }
    free(pary);         // ������ �迭 ��ü �޸� ����
}

int main() {
    int count;

    printf("����� ȸ�� ���� �Է��ϼ���: ");
    scanf("%d", &count);

    // Fitness ����ü ������ �迭�� �������� �Ҵ�
    Fitness** members = (Fitness**)malloc(sizeof(Fitness*) * count);

    if (members == NULL) {
        printf("�޸� �Ҵ� ����\n");
        return 1;
    }

    // ȸ�� ���� �Է�
    for (int i = 0; i < count; i++) {
        members[i] = (Fitness*)malloc(sizeof(Fitness));
        if (members[i] == NULL) {
            printf("�޸� �Ҵ� ����\n");
            return 1;
        }

        printf("\n[%d��° ȸ�� ���� �Է�]\n", i + 1);
        printf("ȸ�� ��ȣ: ");
        scanf("%d", &members[i]->num);

        printf("�̸�: ");
        scanf("%s", members[i]->name);

        printf("ü�� (kg): ");
        scanf("%lf", &members[i]->weight);
    }

    // ��ü ��� ȸ�� �� ���
    total_number(count);

    // ��� ü�� ���
    double avg = average_weight(members, count);
    printf("��ü ȸ���� ��� ü��: %.2f kg\n", avg);

    // �ְ� ü�� ȸ�� ���� ���
    int maxIndex = max_weight(members, count);
    printf("\n[�ְ� ü�� ȸ�� ���� ���]\n");
    print_info(members, maxIndex);

    // �޸� ����
    free_ary(members, count);

    return 0;
}
