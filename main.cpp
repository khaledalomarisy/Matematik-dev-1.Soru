#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double a, b, c, delta, x1, x2;//i�lem yapaca�miz i�in s�f�r risk i�in t�m de�i�kenlerimizi double olarak ald�k

    cout << "a, katsayilarini giriniz: "<<endl;//kullanc�dan 3 de�i�ken istedim
    cin >> a;
    cout << "b, katsayilarini giriniz: "<<endl;
    cin >>b ;
    cout << "c, katsayilarini giriniz: "<<endl;
    cin>> c;
    // deltan�n f�rm�l� b^2-(4*a*c)
    delta = (b * b) - (4 * a * c);

    cout << fixed << setprecision(2);// virgulden sonra iki basamak g�sterir
    cout << "Delta: " << delta << endl;

    if (delta < 0) {
        cout << "Gercek kok yoktur." << endl;//delta s�f�rdan ku�ukse kok yoktur
    }
    else if (delta == 0) {
        x1 = -b / (2 * a);
        cout << "Bir tane gercek kok vardir: x = " << x1 << endl; //delta s�f�ra e�itse tek k�k vard�r
    }
    else {
        x1 = (-b + sqrt(delta)) / (2 * a);//buyukse iki k�k a�a�daki kuralla bulunur
        x2 = (-b - sqrt(delta)) / (2 * a);
        cout << "Iki farkli gercek kok vardir: x1 = " << x1 << ", x2 = " << x2 << endl;
    }

    return 0;
    }
