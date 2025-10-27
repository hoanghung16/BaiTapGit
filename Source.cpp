#include <iostream>

using namespace std;
int tong(int a, int b);
int hieu(int a, int b);
int tich(int a, int b);
float thuong(int a, int b);
int main()
{
	int a,b;
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	cout << "Nhap so thu nhat: ";
    cin >> a;
    cout << "Nhap so thu hai: ";
    cin >> b;
	cout<<"Tong= : "<<tong(a,b)<<endl;
	cout<<"Hieu= : "<<hieu(a,b)<<endl;
	system("pause");
	return 0;
}
	int tong(int a, int b){
		return a+b;
	}
	int hieu(int a, int b){
		return a-b;
<<<<<<< HEAD
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
=======
	}
>>>>>>> 581ecfb121658d1002d52b09a871e6383635856f
