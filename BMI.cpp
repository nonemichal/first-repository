#include <iostream>
#include <string>
#include <math.h>

using namespace std;

class Zawodnik{
private:
    int lp;
    string name;
    string lastname;
    string repr;
    double weight;
    double height;
public:
    static int id;
    Zawodnik (string name, string lastname,string repr, double weight, double height){
    this->name = name;
    this-> lastname = lastname;
    this-> repr = repr;
    this-> weight = weight;
    this-> height = height;
    Zawodnik::id++;
    lp = id;
    }
    void calcBmi(){

    cout << "BMI wynosi: " << (weight/pow(height/100,2)) << endl;
    }
void getPlayer(){
cout << "Zawodnik" << lp << ":" << name << " " << lastname << " " << repr << endl;
calcBmi();
}
};

int Zawodnik::id = 0;
int main()
{
    Zawodnik p1("Kamil", "Stoch","POL", 185, 70);
}
