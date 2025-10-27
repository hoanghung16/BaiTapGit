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
	system("pause");
	return 0;
}