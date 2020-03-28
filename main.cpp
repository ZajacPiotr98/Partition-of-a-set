#include <iostream>

using namespace std;

void wyswietl(int t[], int n)
{
    for (int i=0;i<n;i++)cout << t[i]<<" ";
    cout <<endl;
}

int maks(int t[], int n)
{
    int m=t[0];
    for (int i=0;i<n-1;i++)
    {  if (t[i]<t[i+1]) m=t[i+1];
    }
    return m;
}


void podzialy (int t[],int n,int p)
{ if (p==0)wyswietl(t,n);
else {
    if (t[p]==maks(t,p)+1) podzialy (t,n,p-1);
    else {wyswietl(t,n);
    t[p]+=1;
    for (int i=p+1;i<n;i++)t[i]=1;
    podzialy(t,n,n-1);}
}
}


int main()
{
    int n;
    cout << "Podaj ilosc elementow zbioru: ";
    cin >> n;
    int t[n];
    for (int i=0;i<n;i++)t[i]=1;
    podzialy(t,n,n-1);


    return 0;
}
/*
1 1 1 1 1
1 1 1 1 2
1 1 1 2 1
1 1 1 2 2
1 1 1 2 3
1 1 2 1 1
1 1 2 1 2
1 1 2 1 3
1 1 2 2 1
1 1 2 2 2
1 1 2 2 3
1 1 2 3 1
1 1 2 3 2
1 1 2 3 3
1 1 2 3 4
1 2 1 1 1
1 2 1 1 2
1 2 1 1 3
1 2 1 2 1
1 2 1 2 2
1 2 1 2 3
1 2 1 3 1
1 2 1 3 2
1 2 1 3 3
1 2 1 3 4
1 2 2 1 1
1 2 2 1 2
1 2 2 1 3
1 2 2 2 1
1 2 2 2 2
1 2 2 2 3
1 2 2 3 1
1 2 2 3 2
1 2 2 3 3
1 2 2 3 4
1 2 3 1 1
1 2 3 1 2
1 2 3 1 3
1 2 3 1 4
1 2 3 2 1
1 2 3 2 2
1 2 3 2 3
1 2 3 2 4
1 2 3 3 1
1 2 3 3 2
1 2 3 3 3
1 2 3 3 4
1 2 3 4 1
1 2 3 4 2
1 2 3 4 3
1 2 3 4 4
1 2 3 4 5
*/

