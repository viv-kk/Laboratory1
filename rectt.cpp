#include <iostream>
#include <cmath>

using namespace std;


void calculateRectangle(double length, double width) {
   
  if (length <= 0 || width <= 0) {
    cout << "error." << endl;
    return; 
  }

  double perimeter = 2 * (length + width);

  double area = length * width;

  double diagonal = sqrt(length * length + width * width);

  cout << "lenght: " << length << ", Weight: " << width << endl;
  cout << "per: " << perimeter << endl;
  cout << "S: " << area << endl;
  cout << "diag: " << diagonal << endl;
  cout << "------------------------" << endl;
}
int main() {
  double lengths[] = {5, 10, 7.5, 0, -3, 12};
  double widths[] = {3, 5, 2.5, 4, 8, 12};
  int numTests = sizeof(lengths) / sizeof(lengths[0]);
  cout << "testing:" << endl;
  cout << "------------------------" << endl;
  for (int i = 0; i < numTests; ++i) {
    calculateRectangle(lengths[i], widths[i]);
  }

  cout << "tests complited." << endl;

  return 0;
}

