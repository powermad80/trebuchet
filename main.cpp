#include <fstream>
#include <iostream>
#include <string>

int main() {
  std::ifstream file("input.txt");

  if (!file.is_open()) {
    std::cout << "Can't read input.txt, does it exist?";
    return 0;
  }

  std::string line;
  int total = 0;
  int len;
  char c;
  char digitOne;
  char digitTwo;
  while (std::getline(file, line)) {
    len = line.length();
    for (int i = 0; i < len; i++) {
      c = line[i];
      if (std::isdigit(c)) {
        digitOne = c;
        break;
      }
    }

    for (int i = len - 1; i >= 0; i--) {
      c = line[i];
      if (std::isdigit(c)) {
        digitTwo = c;
        break;
      }
    }
    total += stoi((std::string() + digitOne) + (std::string() + digitTwo));
  }
  std::cout << total;
  return total;
}
