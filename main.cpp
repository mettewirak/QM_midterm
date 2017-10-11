#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
using namespace std;
std::ofstream ofile;

// Want to compute numerically the probability P of measuring the value i* in the state (UF)^n |s> as a function of different (integer) values of n.
// Need to write the data to a file, and then plot in excel/somewhere else.

double probability(int stor_N, double alpha);

int main()
{
    int stor_N = pow(10,3);
    ofile.open("Resultater3.txt");

    ofile << "N = " << stor_N << endl << endl;
    ofile << "n " << " prob        " << "alpha used  " << "beta used" << endl;

    double alpha = 1.0, beta = 0.0;
    double prob, temp_alpha, temp_beta;

    for(int liten_n = 1; liten_n<301; liten_n++){

        // PROBABILITY
        prob = probability(stor_N, alpha);

        ofile << fixed << setprecision(6) << liten_n << "  " << prob << "    " << alpha << "    " <<beta << endl;

        // CALCULATION
        temp_alpha = (alpha*(1.0 - (4.0/stor_N)) - beta*(2.0/sqrt(stor_N)));
        temp_beta = (alpha*(2.0/sqrt(stor_N)) + beta);

        alpha = temp_alpha;
        beta = temp_beta;
    }

    ofile.close();

    return 0;
}


double probability(int stor_N, double alpha){

    return (1.0 - alpha*alpha*(1.0-(1.0/stor_N)));
}
