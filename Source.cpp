#include <iostream>

using namespace std;
int tong(int a, int b);
int hieu(int a, int b);
int tich(int a, int b);
float thuong(int a, int b);
int main()
{
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	cout << "Nhap so thu nhat: ";
    cin >> a;
    cout << "Nhap so thu hai: ";
    cin >> b;
	cout<<"Tong= : "<<tong(a,b)<<endl;
	cout<<"Hieu= : "<<hieu(a,b)<<endl;
	
	int tong(int a, int b){
		return a+b;
	}
	int hieu(int a, int b){
		return a-b;
	}
	cout<<"Kiem Tra a la so chan: ";
	if (a % 2 == 0) {
        cout << number << " là số chẵn." << endl;
    } else {
        cout << number << " là số lẻ." << endl;
    }
	system("pause");
	return 0;
}