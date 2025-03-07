#include <iostream>
#include <cmath>
#include <clocale> 

using namespace std;


void calculateRectangle(double length, double width) {
   
  if (length <= 0 || width <= 0) {
    cout << "error." << endl;
    return; 
  }

  double perimeter = 2 * (length + width);

  double area = length * width;

  double diagonal = sqrt(length * length + width * width);

  cout << "длина: " << length << ", ширина: " << width << endl;
  cout << "периметр: " << perimeter << endl;
  cout << "площадь: " << area << endl;
  cout << "диагональ: " << diagonal << endl;
}
int main() {
    setlocale(LC_ALL, "Russian");
    double length, width;
    cout << "введите длину прямоугольника:" << endl;
    cin >> length;
    cout << "введите ширину прямоугольника:" <<endl; 
    cin >> width;
    if (length > 0 && width > 0){
        calculateRectangle (length,width); 
    }
    else cout << "значения некорректны, значения прямоугольника должны быть положительными" << endl;
  return 0;
}
// новый комментарий

