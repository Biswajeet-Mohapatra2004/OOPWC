#include <iostream>
using namespace std;

class Distance
{
private:
    int km, m, cm;

public:
    void input(int kmVal, int mVal, int cmVal)
    {
        km = kmVal;
        m = mVal;
        cm = cmVal;
    }

    void display()
    {
        cout << km << " km " << m << " meters " << cm << " cm" << endl;
    }

    Distance addDistance(Distance d2)
    {
        int totalCm = (km * 100000 + m * 100 + cm) + (d2.km * 100000 + d2.m * 100 + d2.cm);
        Distance result;
        result.km = totalCm / 100000;
        totalCm %= 100000;
        result.m = totalCm / 100;
        result.cm = totalCm % 100;
        return result;
    }
};

int main()
{
    int n;
    cout << "Enter number of distance objects: ";
    cin >> n;

    Distance *distances = new Distance[n];

    for (int i = 0; i < n; i++)
    {
        int km, m, cm;
        cout << "Enter distance " << i + 1 << " (km, meters, cm): ";
        cin >> km >> m >> cm;
        distances[i].input(km, m, cm);
    }

    cout << "Distances: " << endl;
    for (int i = 0; i < n; i++)
    {
        distances[i].display();
    }

    int idx1, idx2;
    cout << "Enter the indices of the distances to add (0-based): ";
    cin >> idx1 >> idx2;

    Distance result = distances[idx1].addDistance(distances[idx2]);

    cout << "Result of addition: ";
    result.display();

    delete[] distances;

    return 0;
}
