
#include <bits / stdc++.h>
using namespace std;
#define ZZ(i, a, b) for (int i = (int)(a); i <= (int)(b); i++)
int main(){
  int n, m;
  n = m = 10;
  int Cost_mat[n][m];

  ZZ(i, 0, n - 1){
    ZZ(j, 0, m - 1){
      cin >> Cost_mat[i][j];
    }
  }

  int min_cost[n][m];

  min_cost[0][0] = Cost_mat[0][0];

  ZZ(j, 1, m - 1)
  min_cost[0][j] = min_cost[0][j - 1] + Cost_mat[0][j];

  ZZ(i, 1, n - 1)
  min_cost[i][0] = min_cost[i - 1][0] + Cost_mat[i][0];

  ZZ(i, 1, n - 1){
    ZZ(j, 1, m - 1){
      min_cost[i][j] = min(min_cost[i - 1][j], min_cost[i][j - 1]) + Cost_mat[i][j];
    }
  }

  cout << "Minimum cost from cell(0,0) to  cell(n,m) is :- " << min_cost[n - 1][m - 1];
  return 0;
}