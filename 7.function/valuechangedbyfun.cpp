#include<iostream>
using namespace std;


void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int n1 = 5;
    int n2 = 10;

    cout<<"before changed value: "<<n1<<" "<<n2<<endl;

    swap(&n1, &n2);

    cout<<"after changed value: "<<n1<<" "<<n2<<endl;

    return 0;
}
