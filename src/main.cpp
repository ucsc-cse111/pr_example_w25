// https://chat.openai.com/share/f3c27983-ab06-46ec-9efa-e7d54679e0c0

#include <cmath>
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  // Check if the user has provided the correct number of arguments
  if (argc != 4) {
    cout << "Usage: " << argv[0] << " <a> <b> <c>" << endl;
    return 1;
  }

  // Parse coefficients from command-line arguments
  double a = atof(argv[1]);
  double b = atof(argv[2]);
  double c = atof(argv[3]);

  // Calculate discriminant
  double discriminant = b * b - 4 * a * c;

  // Check discriminant value
  if (discriminant > 0) {
    // Two real roots
    double root1 = (-b + sqrt(discriminant)) / (2 * a);
    double root2 = (-b - sqrt(discriminant)) / (2 * a);
    cout << "Roots are real and different." << endl;
    cout << "Root 1 = " << root1 << endl;
    cout << "Root 2 = " << root2 << endl;
  } else if (discriminant == 0) {
    // One real root
    double root = -b / (2 * a);
    cout << "Roots are real and same." << endl;
    cout << "Root = " << root << endl;
  } else {
    // Complex roots
    double realPart = -b / (2 * a);
    double imaginaryPart = sqrt(-discriminant) / (2 * a);
    cout << "Roots are complex and different." << endl;
    cout << "Root 1 = " << realPart << " + " << imaginaryPart << "i" << endl;
    cout << "Root 2 = " << realPart << " - " << imaginaryPart << "i" << endl;
  }

  return 0;
}
