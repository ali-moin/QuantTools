#include <Rcpp.h>
using namespace Rcpp;

//' Add two integers
//' 'add_integers_cpp' adds two integers
//' @param a int first integer
//' @param b int second integer
//' @return c int sum of a and b
//'
// [[Rcpp::export]]
int add_integers_cpp(int a, int b) {
  return a + b;
}
