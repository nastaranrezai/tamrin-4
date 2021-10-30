#include <iostream> 
#include <stdlib.h>  
using namespace std; 
 
int main()
{
  int n, m, i, j;
  cin >> n >> m;
  for(j = 1; j <= m ; j++)
  {
    for(i= 1; i <= n; i++)
    {
      int f= i % 2;
      if(f != 0) cout <<"*";
      if(f == 0)  cout <<"#";
    }
    cout << "\n";  
  }
  
  return 0; 
}