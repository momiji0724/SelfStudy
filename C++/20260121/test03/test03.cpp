#include <iostream>
using namespace std;

class Car
{
protected:
    double FuelTank;
public:
    Car(double gasoline) { FuelTank = gasoline; }

    void SetFuelTank(double gasoline)
    {
        FuelTank = gasoline;
    }
    double GetFuelTank() { return FuelTank; }
};

class Track :public Car
{
private:
    int Loadage;
public:
    Track(double gasoline, int loadage) :Car(gasoline){
        Loadage = loadage;
    }

    void SetLoadage(int loadage)
    {
        Loadage = loadage;
    }

    int GetLoadage() { return Loadage; }

};
int main()
{
    Track RepairLorry(25.3, 1000);
    cout << "ガソリン量=" << RepairLorry.GetFuelTank() << "Kl" << endl;
    cout << "積載容量=" << RepairLorry.GetLoadage() << "Kg" << endl;

    return 0;
}
