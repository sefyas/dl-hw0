#include <stdio.h>
#include "matrix.h"
#include "test.h"

int main(int argc, char **argv)
{
    matrix m = random_matrix(2, 3, 4);
    print_matrix(m);

    matrix n = copy_matrix(m);
    print_matrix(n);

    matrix m_t = transpose_matrix(m);
    print_matrix(m_t);

    matrix m_n = matmul(m, m_t);
    print_matrix(m_n);

    axpy_matrix(-1, m, n);
    print_matrix(n);

    run_tests();

    free_matrix(m);
    free_matrix(n);
    free_matrix(m_n);
    free_matrix(m_t);
    return 0;
}