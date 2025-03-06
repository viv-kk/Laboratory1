#include <iostream>
using namespace std;
const double PI = 3.14;

double l(double r) {
    double len;
    len = 2 * PI * r;
    return len;
}
double s(double r) {
    double square;
    square = PI * r * r;
    return square;
}
double sec(double r, double d) {
    double sector;
    sector = PI * r * r * d / 360;
    return sector;
}

int main() {
    setlocale(LC_ALL, "Russian");
    int r, d;
    cout << "Введите радиус окружности:" << endl;
    cin >> r;
    cout << "Введите сектор угла:" << endl;
    cin >> d;
    if (r > 0 && d > 0) {
        cout << "Параметры окружности с радиусом " << r << endl;
        cout << "Длина окружности: " << l(r) << endl;
        cout << "Площадь круга: " << s(r) << endl;
        cout << "Площадь сектора: " << sec(r, d) << endl;
    }
    else cout << "Введены некорректные данные" << endl;
    return 0;
}
