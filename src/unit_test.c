#include <stdio.h>
#include "matrix.h"
#include "test.h"
#include "uwnet.h"

int main(int argc, char **argv)
{
    //matrix m = random_matrix(2, 3, 4);
    matrix m = make_matrix(2, 3);
    m.data[0] = -1; m.data[1] = 0; m.data[2] = 1; 
    m.data[3] = 0; m.data[4] = 1; m.data[5] = -1; 
    print_matrix(m);

    matrix n = copy_matrix(m);
    print_matrix(n);

    //matrix m_t = transpose_matrix(m);
    //print_matrix(m_t);

    //matrix m_n = matmul(m, m_t);
    //print_matrix(m_n);

    //axpy_matrix(-1, m, n);
    //print_matrix(n);

    //run_tests();

    //activate_matrix(m, LOGISTIC);
    //activate_matrix(m, RELU);
    //activate_matrix(m, LRELU);
    //activate_matrix(m, SOFTMAX);
    //print_matrix(m);

    //gradient_matrix(m, LOGISTIC, n);
    //gradient_matrix(m, RELU, n);
    //gradient_matrix(m, LRELU, n);
    gradient_matrix(m, SOFTMAX, n);
    print_matrix(n);

    free_matrix(m);
    free_matrix(n);
    //free_matrix(m_t);
    //free_matrix(m_n);
    return 0;
}