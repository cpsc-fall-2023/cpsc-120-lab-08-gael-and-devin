// Gael Fuentes
// gfuent@csu.fullerton.edu
// @gaelfu
// Partners: @devinhurley

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  // xTODO: Validate that there is at least one command line argument.
  // If not, print an error message and return a non-zero value.
  if ((arguments.size() < 2)) {
    std::cout << "error: at least on command line argument please.\n";
    return 1;
  }
  // xTODO: Write a for-each loop to sum (add up) all of the command line
  // arguments.
  // Use a double or float type so that your program preserves fractional
  // values.
  // The loop needs to skip over the command name, which is the first element
  // of the arguments vector.
  // Each argument is a std::string. You will need to convert each string into
  // a number with the std::stod or std::stof function.
  double sum{0.0};
  int value{0};
  for (int i = 1; i < argc; i++) {
    double arg_value = std::stod(arguments.at(i));
    sum += arg_value;
    value++;
  }
  double avg = sum / value;

  std::cout << "average =" << avg << "\n";
  return 0;
  // xTODO: After the loop has finished summing the arguments, calculate the
  // average of the values. Recall that the average is the total value divided
  // by the number of values.

  // xTODO: Use cout to print out a message of the form
  // average = *AVERAGE*
  // on its own line.
}
