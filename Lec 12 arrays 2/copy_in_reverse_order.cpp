//          JAI SHREE RAM          //

#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> &a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(6);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(5);
    v1.push_back(4);
    display(v1);
    vector<int> v2(v1.size());
    for (int i = 0; i < v1.size(); i++)
    {
        // i+j=size-1
        int j = v1.size() - 1 - i;
        v2[i] = v1[j];
    }
    display(v2);
    return 0;
}
