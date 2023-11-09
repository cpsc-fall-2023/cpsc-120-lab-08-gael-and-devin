// Gael Fuentes
// gfuent@csu.fullerton.edu
// @gaelfu
// Partners: @devinhurley

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  // xTODO: Validate that the number of arguments is correct.
  // If not, print an error message and return a non-zero value.
  if (argc != 4) {
    std::cout << "error: need 4 arguments\n";
    return 1;
  }
  // xTODO: Declare three std::string variables to hold the
  // protein, bread, and condiment input.
  // Initialize each variable with an element of the arguments vector
  // declared above.
  std::string protein{arguments.at(1)};
  std::string bread{arguments.at(2)};
  std::string condiment{arguments.at(3)};
  // xTODO: Use cout to print output following the pattern
  // Your order: A *PROTEIN* sandwich on *BREAD* with *CONDIMENT*.
  // on its own line.
  std::cout << "Your order: A " << protein << " sandwich on " << bread
            << " with " << condiment << " on its own line.\n";
  return 0;
}
