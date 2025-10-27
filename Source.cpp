#include <iostream>

using namespace std;
int tong(int a, int b);
int hieu(int a, int b);
int tich(int a, int b);
float thuong(int a, int b);
int main()
{
	int a,b,n;
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	cout << "Nhap so thu nhat: ";
    cin >> a;
    cout << "Nhap so thu hai: ";
    cin >> b;
	cout<<"Tong= : "<<tong(a,b)<<endl;
	cout<<"Hieu= : "<<hieu(a,b)<<endl;
	  cout << "Nhap so can kiem tra so le: ";
    cin >> n;
    if (kiemTraSoLe(n)) {
        cout << n << " la so le." << endl;
    } else {
        cout << n << " la so chan." << endl;
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
	bool kiemTraSoLe(int n) {
    return n % 2 != 0;
	}
	int tong(int a, int b){
		return a+b;
	}
	int hieu(int a, int b){
		return a-b;
	}
