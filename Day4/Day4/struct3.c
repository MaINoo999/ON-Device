//#include <stdio.h> // ǥ�� ����� �Լ� ����� ���� ��� ���� ����
//
//// vision ����ü ����
//// ���� �÷�(left)�� ������ �÷�(right)�� ����
//struct vision {
//	double left;   // ���� �÷�
//	double right;  // ������ �÷�
//};
//
//// �Լ� ���� (��ȯ �Լ�)
//// �Ű������� ���� �÷� ������ ��ȯ�� �� ����ü�� ��ȯ
//struct vision exchange(struct vision arobot);
//
//// ���� �Լ� ����
//void main() {
//	struct vision robot;  // vision ����ü ���� ����
//
//	// ����ڷκ��� ���ʰ� ������ �÷� �Է¹ޱ�
//	printf("�÷� �Է�: ");
//	scanf_s("%lf %lf", &robot.left, &robot.right);
//	// scanf_s�� ���� ��ȭ�� �Է� �Լ��� Visual Studio���� ���
//
//	// �÷� ������ ��ȯ�ϴ� �Լ� ȣ��
//	robot = exchange(robot);
//
//	// ��ȯ�� �÷� ���� ���
//	printf("�ٲ� �÷�: %.1lf   %.1lf\n", robot.left, robot.right);
//}
//
//// �÷� ������ ��ȯ�ϴ� �Լ� ����
//struct vision exchange(struct vision arobot)
//{
//	double temp;  // �ӽ� ���� ����
//
//	// ���ʰ� ������ �÷� �� ��ȯ
//	temp = arobot.left;          // ���� �÷��� temp�� ����
//	arobot.left = arobot.right;  // ������ �÷��� ���ʿ� ����
//	arobot.right = temp;         // temp�� �ִ� ���� �÷��� �����ʿ� ����
//
//	return arobot; // ��ȯ�� ����ü ��ȯ
//}
