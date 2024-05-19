#include <iostream>
#include <vector>
#include <cassert>

using namespace std;
vector <int> AddNumber(vector <int> vec, int n) {
	for (int i = 0; i < vec.size(); ++i) {
		vec[i] += n;
	}
	return vec;
	}

int main() {
	setlocale(LC_ALL, "russian");
	vector <int> vec;
	int n;
	int a;
	cout << "Введите (через пробел) последовательность целых чисел... " << endl
		<< "(Для завершения нажмите 'Enter' сразу после числа)" << endl;
	while (cin >> a) {
		vec.push_back(a);
		if (cin.get() == '\n') break;
	}
	cout << "Введите число на которое надо увеличить предыдущие числа: ";
	cin >> n;
	vector <int> newVec = AddNumber(vec, n);
	
	cout << '\n' << "Новые числа:" << '\n';
	for (auto t : newVec) {
		cout << t << ' ';
	}
}
