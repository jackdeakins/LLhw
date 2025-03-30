#include "hw06.h"
int menu(){
  int selection;

  cout << "Select from the following options: \n";
  cout << "1. Add a record\n";
  cout << "2. Delete a record\n";
  cout << "3. Display a record\n";
  cout << "4. Display all records\n";
  cout << "5. Save and exit\n";

  cin >> selection;
  std::cin.clear();
  std::cin.ignore(1000, '\n');
  return selection;
}
