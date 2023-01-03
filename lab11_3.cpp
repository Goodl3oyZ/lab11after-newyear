#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <cstdlib>
#include <fstream>
using namespace std;
int main(){
    int count=0;
    float sum=0,sigmayok2=0;
    string textline;
    ifstream source("score.txt");
    while(getline(source,textline))
    {
        sigmayok2+=pow(atof(textline.c_str()),2);
        sum+=atof(textline.c_str());
        count++;
    }
    cout << "Number of data = "<<count<<'\n';
    cout << setprecision(3);
    cout << "Mean = "<<sum/count<<'\n';
    cout << "Standard deviation = "<<sqrt((sigmayok2/count)-pow((sum/count),2));
    source.close();
    return 0;
}