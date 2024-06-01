#include <iostream>
using namespace std;
class Matrixsub
{
  int A[50][50], B[50][50], C[50][50];
  int m, n; 
  public:
  void get()
  {
    cout << "Enter the number of rows and columns (m x n): ";
    cin >> m >> n;

  cout << "Enter the elements of matrix A: \n";
  for (int i = 0; i < m; i++) 
  {
    for (int j = 0; j < n; j++) 
    {
      cin >> A[i][j];
    }
  }

  cout << "Enter the elements of matrix B: \n";
  for (int i = 0; i < m; i++) 
  {
    for (int j = 0; j < n; j++)
    {
      cin >> B[i][j];
    }
  }
 }
  void show()
  {
    for (int i = 0; i < m; i++)
    {
     for (int j = 0; j < n; j++) 
     {
       C[i][j] = A[i][j] + B[i][j];
     }
    }
  cout << "The result of A + B is: \n";
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++) 
    {
      cout << C[i][j] << " ";
    }
    cout << endl;
  } 
  }
  void operator+()
  {
    C[50][50]=A[50][50]+B[50][50];
  }
};
int main()
{
    Matrixsub m;
    +m;
    m.get();
    m.operator+();
    m.show();
    return 0;
}