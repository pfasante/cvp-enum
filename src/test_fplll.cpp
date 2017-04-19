#include <iostream>

#include <fplll.h>

using namespace std;
using namespace fplll;

int main(int argc, char ** argv) {
    ZZ_mat<mpz_t> A;
    std::stringstream("[[1 2 3]\n [4 5 6]\n [7 8 9]]\n") >> A;

    cout << "hello world" << endl;
    return 0;
}
