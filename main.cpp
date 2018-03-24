#include <iostream>

using namespace std;

int main()
{
    int fre,num[10000],chg;
    cin>>fre;
    for(int i=0;i<fre;i++)
    {
        cin>>num[i];
    }
    for(int i=0;i<fre;i++)
    {
        for(int j=0;j<fre-i-1;j++)
        {
            if(num[j]>num[j+1])
            {
                chg=num[j];
                num[j]=num[j+1];
                num[j+1]=chg;
            }
        }
    }
    for(int i=0;i<fre;i++)
    {
        cout<<num[i]<<endl;
    }
    return 0;
}
