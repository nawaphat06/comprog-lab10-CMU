//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    ifstream source;
    source.open("score.txt");
    string txt;
    int i = 0;
    double sum = 0, sum_pow2= 0, mean, devi;
    while( getline(source, txt) ){
        sum += stod(txt);
        sum_pow2 += pow(stod(txt),2); 
        i++;
    }
    mean = (double(1)/i) * sum;
    devi = sqrt( ( (double(1)/i) * sum_pow2 ) - pow(mean,2));

    cout << "Number of data = " << i << endl;
    cout << setprecision(3);
    cout << "Mean = " << mean << endl;
    cout << "Standard deviation = " << devi << endl;
    source.close();
}