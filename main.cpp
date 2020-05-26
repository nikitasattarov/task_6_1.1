#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <fstream>

using namespace std;

int main()
{
    ifstream input; // создаем объект класса ifstream
    input.open("input.txt"); // открываем файл
    int n;
    int a, b;
    input >> n;
    float c;
    vector< pair<float, pair<int, int> > > A;
    vector < pair <int, int> > B;
    for (int i = 0; i < n; i++)
    {
        input >> a >> b;
        c = a * a + b * b;
        A.push_back(make_pair(c, make_pair(a, b)));
    }
    vector< pair< float, pair <int,int> > >::iterator iA = A.begin();
    vector< pair< float, pair <int,int> > >::iterator iAend = A.end();
    sort(iA, iAend);
    iA = A.begin();
    cout << "Result: " << endl;
    for (int i = 0; i < n; i++)
    {
         cout << (*iA).second.first << ' ' <<  (*iA).second.second << endl;
         iA++;
    }
    return 0;
}
