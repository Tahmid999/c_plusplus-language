#include<iostream>
#include<math.h>
using namespace std;

class graph
{
    int a,b;
    friend void sumofgraph(graph, graph);
    public:
        graph(int x, int y)
        {
            a = x;
            b = y;
        }
        void print()
        {
            cout<<"("<<a<<", "<<b<<")"<<endl;
        }
        
};

void sumofgraph(graph o1, graph o2)
{
    float sum;
    sum = (sqrt(((o1.a-o2.a)*(o1.a-o2.a))+((o1.b-o2.b)*(o1.b-o2.b))));
    cout<<sum<<endl;
}

int main()
{
    graph p(1,0),q(70,0);
    p.print();
    q.print();
    sumofgraph(p,q);

    return 0;
}