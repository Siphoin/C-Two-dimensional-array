#include<iostream>

using namespace std;

void main() {

	////////////////=====set support RU======////////


	setlocale(LC_ALL, "ru");

	////////////////=====Size rows array======////////
	while (true)
	{
		int _size_rows = 0;
		cout << "������� ������ ���������� �������" << endl;
		cin >> _size_rows;
		system("cls");
		cout << "�� ������� ������: " << _size_rows << endl;

		////////////////=====Size cols array======////////

		int _size_cols = 0;
		cout << "������� ���������� ��������� � ��������" << endl;
		cin >> _size_cols;
		cout << "���������� �������� " << _size_cols << endl;

		////////////////=====Size cols array======////////

		int _size_rand_integers = 0;
		cout << "������� ������������ �������� ������������ ����� � ��������" << endl;
		cin >> _size_rand_integers;
		cout << "�� ������� �����: " << _size_rand_integers << endl;

		////////////////=====Creating array======////////


		int** _arr = new int* [_size_rows];

		cout << "��������� ��������� ������..." << endl;

		for (int i = 0; i < _size_rows; i++) {
			_arr[i] = new int[_size_cols];
		}
		// Work
		for (int i = 0; i < _size_rows; i++)
		{
			for (int j = 0; j < _size_cols; j++) {
				_arr[i][j] = rand() % _size_rand_integers;
			}
		}




		// log

		for (int i = 0; i < _size_rows; i++)
		{
			for (int j = 0; j < _size_cols; j++) {
				cout << _arr[i][j] << "\t";
			}
			cout << "\n";
		}
		// end

		for (int i = 0; i < _size_rows; i++) {
			delete[]	_arr[i];
		}

		delete[] _arr;
	}
	

}