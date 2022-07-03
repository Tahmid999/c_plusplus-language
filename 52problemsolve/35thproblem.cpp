#include<iostream>
#include<math.h>
using namespace std;
                   
int main()
{
    int T;
    cin>>T;
    int x1,x2,y1,y2,r,sum;
    for (int i = 0; i < T; i++)
    {
        cin>>x1>>x2>>r>>y1>>y2;
        sum = sqrt((((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1))));
        if (sum>r)
        {
            cout<<"The point is not inside the circle"<<endl;
        }
        else
            cout<<"The point is inside the circle"<<endl;
        
        cout<<endl;
    }
    

    return 0;
}