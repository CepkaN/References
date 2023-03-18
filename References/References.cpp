#include<iostream>

template<typename T>
void my_swap(T num1, T num2) {
	T tmp = num1;
	num1 = num2;
	num2 = tmp;
}
template<typename T>
void p_swap(T* num1, T* num2) {
	T tmp = *num1;
	*num1 = *num2;
	*num2 = tmp;
}
template<typename T>
void ref_swap(T& num1, T& num2) {
	T tmp = num1;
	num1 = num2;
	num2 = tmp;
}

int NX[10][2];
int& func(int index) {
	return NX[index][1];
}


int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;

	std::cout << "���� � ������.\n";
	for (int i = 0; i < 10; i++) {
		std::cout << "������� " << i + 1 << "-�� ������� : ";
		std::cin >> NX[i][0];
		func(i) = NX[i][0];
	}
	std::cout << "�������� ������ : \n";
	for (int i = 0; i < 10; i++) {
		std::cout << NX[i][0] << '\t' << func(i) << '\n';
	}
	// ������
	/*n = 10, m = 20;
	int& refn=n;  // ������ ��������������� � ���������� n.
	std::cout <<"refn = "<< refn << '\n';
	refn = m;
	std::cout << "refn = " << refn << '\n';
	std::cout << "n = " << n << '\n';*/

	// ������ - ��������� �������
	/*n = 10, m = 15;
	std::cout << n << ' ' << m << '\n';
	//p_swap(&n, &m);  // ��������, �� ��������, ��� ��� ����� ���������� ������.
	ref_swap(n, m);
	std::cout << n << ' ' << m << '\n';*/






	return 0;
}