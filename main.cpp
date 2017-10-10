#include <iostream>
#include <cmath>
using namespace std;
std::ofstream ofile;

// Want to compute numerically the probability P of measuring the value i* in the state (UF)^n |s> as a function of different (integer) values of n.
// Need to write the data to a file, and then plot in excel/somewhere else.

int print_to_file();

int main()
{
	int store_N = pow(10, 3); // skal være 3, 4 eller 5
 	// lille n skal gå fra 1 til 300 for hver av store N



	return 0;
}

int print_to_file(){
	char* outfilename = "test";
    ofile.open(outfilename);

    ofile << " n " << " probability " << endl;

    for(int i=0; i<300; i++){
    	ofile << (i+1) << "probability" << endl;
    }

	ofile.close;
}