#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <locale.h>
#include <string>

using namespace std;

int main() {
  cout << "Escreva uma palavra\n";
  string palavra;
  cin >> palavra;
  cout << "\nA palavra é:\n" << palavra;
  return 0;
}