#include<iostream>
using namespace std;


/*bool Prime(int number) {
	if (number <= 0) {
		return false;
	}
	if (number == 1 || number == 2 || number == 3) {
		return true;
	}
	for (int i = 2; i <= number/2; i++){
		if (number % i == 0) {
			return false;
		}
	}
}*/
//int CountPrime(int *arr)

int CountPrime(int arr[], int lenght, int &minimal,int &iMin, int &maximal, int &iMax) {
	//int result{};
	int max = arr[0];
	int min = arr[0];
	int indexMin{1};
	int indexMax{1};
	for (int i = 0; i < lenght; i++)
	{
		if (arr[i]<min) {
			min=arr[i];
			indexMin = i+1;
		}
		if (arr[i] > max) {
			max=arr[i];
			indexMax = i+1;
		}
	}
	minimal=min;
	iMin= indexMin;
	maximal= max;
	iMax = indexMax;
	return 0;
}

int main(){
	setlocale(LC_ALL, "rus");

	int i, k, j, q;
	int mass[]{ 1,2,34,5,72,99 };
	CountPrime(mass,6,i,k,j,q);
	cout << "Минимальный эелемент: "<<i<<" его индекc: "<<k<< " максимальный элемент: "<<j<<" его индекс: "<<q;
	return 0;
}