#include <iostream>
#include <cmath>
using namespace std;
//Учитывать, что трапеция имеет вид: верхнее основание(меньшее) - a, нижнее основание - b,
//боковые сторон - c и d( c - левая бок. строна)
//Углы принадлежат боковым стронам и НИЖНЕМУ основанию

void calculateSides(double base_a,double base_b,double height,double angle1_cb,double angle2_db,double &side_c, double &side_d){

  double projection1 = height / tan(angle1_cb * M_PI / 180.0);
  double projection2 = height / tan(angle2_db * M_PI / 180.0);

  double diffBases = base_b -base_a;
  if (projection1 + projection2 > diffBases) {
    cout << "Трапеции не существует" << endl;
    side_c = -1;
    side_d = -1;
    return;
  }
  side_c = sqrt(pow(projection1, 2) + pow(height, 2));
  side_d = sqrt(pow(projection2, 2) + pow(height, 2));
}

// Функция вычисления периметра трапеции
double calculatePerimeter(double base_a,double base_b,double side_c, double side_d) {
  return base_a + base_b + side_c + side_d;
}

// Функция вычисления площади трапеции
double calculateArea(double base_a,double base_b, double height) {
  return 0.5 * (base_a + base_b) * height;
}

// Функция вычисления длины средней линии трапеции
double calculateMidline(double base_a,double base_b) {
  return 0.5 * (base_a + base_b);
}

int main() {
  double base_a, base_b, height, angle1_cb, angle2_db, side_c, side_d;
  cout << " Основание a: ";
  cin >> base_a;
  
  cout << " Основание b: ";
  cin >> base_b;

  cout << " Высота : ";
  cin >> height;

  cout << " Угол между b и c: ";
  cin >> angle1_cb;

  cout << " Угол между b и d: ";
  cin >> angle2_db; 

  if (base_a <= 0 || base_b <= 0 || height <= 0 || angle1_cb <= 0 || angle1_cb > 90 || angle2_db <= 0 || angle2_db > 90){
    cout << "Введены некорректные данные." << endl;
    return 1;
  }

  calculateSides (base_a, base_b, height, angle1_cb, angle2_db, side_c, side_d);
  
  if (side_c == -1 || side_d == -1){
    return 1;
  }

  double perimeter = calculatePerimeter(base_a, base_b, side_c, side_d);
  double area = calculateArea(base_a, base_b, height);
  double midline = calculateMidline(base_a, base_b);

  cout << "Периметр трапеции: " << perimeter << endl;
  cout << "Площадь трапеции: " << area << endl;
  cout << "Длина средней линии трапеции: " << midline << endl;

  return 0;
}  
