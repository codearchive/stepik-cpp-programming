// ���������� ������ ������� power, ���
//    x - �����, ������� ����� �������� � �������
//    p - �������, � ������� ����� �������� x
//

int power(int x, unsigned p) {
	int answer = 1;
	while (p--) {
		answer *= x;
	}
	return answer;
}