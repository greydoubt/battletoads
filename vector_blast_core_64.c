#include <iostream>
#include <Eigen/Dense>
//#> g++ -I /path/to/eigen/ my_program.cpp -o my_program 
 
using Eigen::MatrixXd;
using Eigen::VectorXd;

typedef Matrix<float, 3, 1> Vector3f;

typedef Matrix<int, 1, 2> RowVector2i;

typedef Matrix<double, Dynamic, Dynamic> MatrixXd;

typedef Matrix<int, Dynamic, 1> VectorXi;





int main() {

  Vector2i a(1, 2);                      // A column-vector containing the elements {1, 2}
Matrix<int, 5, 1> b {1, 2, 3, 4, 5};   // A column-vector containing the elements {1, 2, 3, 4, 5}
Matrix<int, 1, 5> c = {1, 2, 3, 4, 5}; // A row-vector containing the elements {1, 2, 3, 4, 5}

  
  MatrixXd m(2, 2);
  m(0, 0) = 3;
  m(1, 0) = 2.5;
  m(0, 1) = -1;
  m(1, 1) = m(1, 0) + m(0, 1);

  
  MatrixXd m = MatrixXd::Random(3, 3);
  m = (m + MatrixXd::Constant(3, 3, 1.2)) * 50;
  std::cout << "m =" << std::endl << m << std::endl;
  VectorXd v(3);
  v << 1, 2, 3;
  std::cout << "m * v =" << std::endl << m * v << std::endl;

    Eigen::MatrixXd m(2, 2);
  m(0, 0) = 3;
  m(1, 0) = 2.5;
  m(0, 1) = -1;
  m(1, 1) = m(1, 0) + m(0, 1);
  std::cout << "Here is the matrix m:\n" << m << std::endl;
  Eigen::VectorXd v(2);
  v(0) = 4;
  v(1) = v(0) - 1;
  std::cout << "Here is the vector v:\n" << v << std::endl;


  
std::cout << "A fixed-size array:\n";
Array33f a1 = Array33f::Zero();
std::cout << a1 << "\n\n";
 
std::cout << "A one-dimensional dynamic-size array:\n";
ArrayXf a2 = ArrayXf::Zero(3);
std::cout << a2 << "\n\n";
 
std::cout << "A two-dimensional dynamic-size array:\n";
ArrayXXf a3 = ArrayXXf::Zero(3, 4);
std::cout << a3 << "\n";



  
  std::cout << m << std::endl;
}

