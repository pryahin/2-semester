// lab3.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include "matr.h"
#include "locale.h"

void main()
{
	setlocale(LC_ALL, "rus");
	matr a, b;
	int n, m;
	double k;

	cin >> n >> m;
	a.init(n, m);
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++) {
			cin >> k;
			a.SetEl(i, j, k);
		}

	cout << endl << "�������� �������:" << endl;
	a.print();

	if (a.GetM()==a.GetN()) {
		if (a.Det() != 0) {
			b = a;
			a.inverse();

			cout << "�������� �������: " << endl;
			a.print();

			a = a*b;
			
			cout << "��������. �������� ������� ���������� �� ��������: " << endl;
			a.print();
		}
		else {
			cout << "������! ����������� = 0!" << endl;
		}
	}
	else {
		cout << "������! ������� �� ����������!" << endl;
	}

	system("pause");
}

