#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;

int teste(void)
{
  int matriz[2][2];
  int coluna;
  int linha;
  coluna = 0;
  linha = 0;
  while(coluna <= 2)
  {
    while(linha <= 2)
    {
      cin >> matriz[coluna][linha];
      linha ++;
    }
    coluna ++;
  }

  coluna = 0;
  linha = 0;

  cout << "Sua matriz é: \n";
  while(coluna <= 2)
  {
    while(linha <= 2)
    {
      cout << matriz[coluna][linha] << " ";
      linha ++;
    }
    cout << "\n";
    coluna ++;
  }
  return 0;
}

int main(int argc, char const *argv[])
{
  teste();
  return 0;
}

