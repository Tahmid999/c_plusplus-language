#include<iostream>
using namespace std;

template <class T>
class vector
{
    public:
        T* arr;
        int size;
        vector(int m)
        {
            size = m;
            arr = new T[size];
        }

        T sum(vector &v)
        {
            T d = 0;
            for (int i = 0; i < size; i++)
            {
                d += (this->arr[i] * v.arr[i]);
            }
            return d;
        }
};

int main()
{
    // vector <int> v1(3);
    // v1.arr[0] = 4;
    // v1.arr[1] = 3;
    // v1.arr[2] = 1;
    // vector <int> v2(3);
    // v2.arr[0] = 3;
    // v2.arr[1] = 0;
    // v2.arr[2] = 1;

    vector <float> v1(3);
    v1.arr[0] = 4.2;
    v1.arr[1] = 3.6;
    v1.arr[2] = 1.6;
    vector <float> v2(3);
    v2.arr[0] = 3.1;
    v2.arr[1] = 0.5;
    v2.arr[2] = 1.47;

    float a = v1.sum(v2);

    cout<<a<<endl;

    return 0;
}