#include <iostream>

int a = 0;
bool b = true;
a++;
if(a > 0)
{
    bingbong();
}


void bingbong()
{
    for(int i = 0; i< a+25; i++)
    {
        b++;
    }
}
cout<<b<<endl;