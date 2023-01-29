#include <iostream>
#include <cmath>

double true_value = 1.5708;  // Actual value
double approx_value;         // Approximate value
double relative_error;       // Relative error
double round_off_error;      // Round-off error
double truncation_error;     // Truncation error

int main() {
  approx_value = sin(1);
  relative_error = fabs((true_value - approx_value) / true_value);
  round_off_error = fabs(true_value - (double) ((int)(approx_value * 1000000) / 1000000.0));
  truncation_error = fabs(true_value - approx_value);

  std::cout << "True value: " << true_value << std::endl;
  std::cout << "Approximate value: " << approx_value << std::endl;
  std::cout << "Relative error: " << relative_error << std::endl;
  std::cout << "Round-off error: " << round_off_error << std::endl;
  std::cout << "Truncation error: " << truncation_error << std::endl;
  return 0;
}
