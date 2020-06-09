
#include <iostream>
using namespace std;


int main() 
{

    int a,b,i,j;
    int g,h,k,l;
    cin>>a>>b;
    char c[a][b];
    for(i = 0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            cin>>c[i][j];
        }
    }
 
    for(i = 0;i < a;i++)
    {
        for(j = 0;j < b;j++)
        {
            if(c[i][j] == '*')
            {
                g = i;
                h = j;
                break;
            }
        }
    }
    int f = 0;
    for(j = h+1;j < b;j++)
    {
        if(c[g][j] == '*')
        {
            k = j;
            f = 1;
            break;
        }
    }
    int q = 0;
    for(i = 0;i < a;i++)
    {
        if(c[i][h] == '*')
        {
            l = i;
            q = 1;
            break;
        }
    }
    
    if(q == 0)
    {
        for(i = 0;i < a;i++)
        {
            if(c[i][k] == '*')
            {
                l = i;
                q = 1;
                break;
            }
        }
        cout<<l+1<<" "<<h+1<<"\n";
    }
    
    else if(f == 0)
    {
       for(j = 0;j<b;j++)
        {
            if(c[l][j] == '*' && j != h)
            {
                k = j;
                f = 1;
                break;
            }
        } 
        cout<<g+1<<" "<<k+1<<"\n";
    }
    
    else
    {
        cout<<l+1<<" "<<k+1<<"\n";
    }
    return 0;
}
