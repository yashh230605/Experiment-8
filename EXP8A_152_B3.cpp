# include<iostream>
using namespace std;
int main()
//a.
{
    //matrix input and display
    int a[2][2];
    int i,j;
    for (i=0 ;i<2; i++)
    {
        for (j=0 ;j<2; j++)
        {
            cout<<"Enter the "<<i <<" "<<j<<" element: " ;
            cin>>a[i][j];
        }
    }

    for (i=0 ;i<2; i++)
    {
        for (j=0 ;j<2; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
//b.
{

    int a[2][2];
    int b[2][2];
    int s[2][2];
    int i,j,r = 0,c=0;
    cout<<"Enter no. of rows: ";
    cin>>r;
    cout<<"Enter no. of columns: ";
    cin>>c;
    cout<<endl;

    cout<<"Matrix 1: "<<endl;
    for (i=0 ;i<r; i++)
    {
        for (j=0 ;j<c; j++)
        {
            cout<<"Enter the "<<i <<" "<<j<<" element: " ;
            cin>>a[i][j];
        }
    }
    cout<<endl;

    cout<<"Matrix 2: "<<endl;
    for (i=0 ;i<r; i++)
    {
        for (j=0 ;j<c; j++)
        {
            cout<<"Enter the "<<i <<" "<<j<<" element: " ;
            cin>>b[i][j];
        }
    }
    cout<<endl;

    
    for (i=0 ;i<r; i++)
    {
        for (j=0 ;j<c; j++)
        {
            s[i][j] = a[i][j] + b[i][j];
        }
    }

    cout<<"Sum: "<<endl;
    for (i=0 ;i<r; i++)
    {
        for (j=0 ;j<c; j++)
        {
            cout<<s[i][j]<<" ";
        }
        cout<<endl;
    }
        cout<<endl;
}
//c.
{
    int i,j,k,r = 0,c=0,s = 0;
    int a[r][c];
    int b[r][c];
    int p[r][c];
    
    cout<<"Enter no. of rows: ";
    cin>>r;
    cout<<"Enter no. of columns: ";
    cin>>c;
    cout<<endl;

    cout<<"Matrix 1: "<<endl;
    for (i=0 ;i<r; i++)
    {
        for (j=0 ;j<c; j++)
        {
            cout<<"Enter the "<<i <<" "<<j<<" element: " ;
            cin>>a[i][j];
        }
    }
    cout<<endl;

    cout<<"Matrix 2: "<<endl;
    for (i=0 ;i<r; i++)
    {
        for (j=0 ;j<c; j++)
        {
            cout<<"Enter the "<<i <<" "<<j<<" element: " ;
            cin>>b[i][j];
        }
    }
    cout<<endl;

    
for (int i = 0; i < r; ++i) 
{
        for (int j = 0; j < r; ++j) 
        {
            p[i][j] = 0;
            for (int k = 0; k <c; ++k) 
            {
                p[i][j] += a[i][k] * b[k][j];
            }
        }
}

    cout<<"Product: "<<endl;
    for (i=0 ;i<r; i++)
    {
        for (j=0 ;j<c; j++)
        {
            cout<<p[i][j]<<" ";
        }
        cout<<endl;
    }
        cout<<endl;
}
//d.
{
    int i,j,k,r = 0,c=0;
    int a[r][c];
    int da = 0;
    
    cout<<"Enter no. of rows: ";
    cin>>r;
    cout<<"Enter no. of columns: ";
    cin>>c;
    cout<<endl;

    cout<<"Matrix 1: "<<endl;
    for (i=0 ;i<r; i++)
    {
        for (j=0 ;j<c; j++)
        {
            cout<<"Enter the "<<i <<" "<<j<<" element: " ;
            cin>>a[i][j];
        }
    }
    cout<<endl;


    for (int i = 0; i < r; i++) 
    {
        da = da + a[i][i];
    }

cout<<"Diagonal Sum: "<<da<<endl;


}
//e.
{

    int a[2][2];
    int i,j,r = 0,c=0;
    bool eqr = true;
    cout<<"Enter no. of rows: ";
    cin>>r;
    cout<<"Enter no. of columns: ";
    cin>>c;
    cout<<endl;

    cout<<"Matrix 1: "<<endl;
    for (i=0 ;i<r; i++)
    {
        for (j=0 ;j<c; j++)
        {
            cout<<"Enter the "<<i <<" "<<j<<" element: " ;
            cin>>a[i][j];
        }
    }
    cout<<endl;


    for (int j = 0; j < c; j++) 
    {
        if (a[0][j] != a[1][j]) 
        {
            eqr = false;
            break;
        }
    }
    cout<<"Row equality: "<<eqr;
}
}


