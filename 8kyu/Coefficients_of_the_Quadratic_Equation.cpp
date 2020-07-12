#include <vector>
using namespace std;
vector<int> quadratic(int x1,int x2){
  
  int a, b, c;
  
  a = 1;
  b = -x1 - x2;
  c = x1 * x2;
  
  vector<int> ans;
  ans.push_back(a);
  ans.push_back(b);
  ans.push_back(c);
  
  return ans;
}
