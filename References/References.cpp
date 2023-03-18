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

	std::cout << "¬вод в массив.\n";
	for (int i = 0; i < 10; i++) {
		std::cout << "¬ведите " << i + 1 << "-ый элемент : ";
		std::cin >> NX[i][0];
		func(i) = NX[i][0];
	}
	std::cout << "»тоговый массив : \n";
	for (int i = 0; i < 10; i++) {
		std::cout << NX[i][0] << '\t' << func(i) << '\n';
	}
	// —сылки
	/*n = 10, m = 20;
	int& refn=n;  // —сылка ассоциирующа€с€ с переменной n.
	std::cout <<"refn = "<< refn << '\n';
	refn = m;
	std::cout << "refn = " << refn << '\n';
	std::cout << "n = " << n << '\n';*/

	// —сылки - параметры функций
	/*n = 10, m = 15;
	std::cout << n << ' ' << m << '\n';
	//p_swap(&n, &m);  // работает, но неудобно, так как нужно передавать адреса.
	ref_swap(n, m);
	std::cout << n << ' ' << m << '\n';*/






	return 0;
}