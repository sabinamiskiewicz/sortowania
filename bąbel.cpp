#include <iostream>
#include <fstream>
#include <cstdlib>
#include <time.h>
#include "stdlib.h"

using namespace std;
void Sortowanie(int tab[],int rozmiar)
{
for(int i=0;i<rozmiar;i++)
    {
    for(int j=0;j<rozmiar-1;j++)
        {
        if(tab[j]>tab[j+1])
        swap(tab[j],tab[j+1]);
        }
    }
}

int main()
{
srand (time(NULL));
int k=0;
int n=65536;
int rozmiar=n;

/**********************************************OPTYMIST******************************************************//*
int *tabDOBRZE=new int[n];

for(int i=0;i<n;i++)
	{
	tabDOBRZE[i]=i;

	}
clock_t start = clock();	
Sortowanie(tabDOBRZE,n);
k=(clock() - start);

printf( "Sredni Czas wykonywania: %lu ms\n", k );
system("pause");
return 0;
}
*/


/************************************************FATAL****POSOTROWANY OD KONCA****************************//*
int *tabZLE=new int[n];

for(int i=0;i<n;i++)
    {
    tabZLE[i]= n-i;
    }
//for(int i=0;i<n;i++){
//    cout<<tab[i]<<" ";
//}
//cout<<endl;
clock_t start = clock();
Sortowanie(tabZLE,n);
//for(int i=0;i<n;i++){
//    cout<<tab[i]<<" ";
//}
//printf( "Czas wykonywania: %lu ms\n", k );
k=(clock() - start);

printf( "Sredni Czas wykonywania: %lu ms\n", k );
system("pause");
return 0;
}
*/
/**************************************************PRZYPADEK**************************************************/
int *tab=new int[n];

for(int i=0;i<n;i++)
    {
    tab[i]= rand() % 1000 + 1;
    }
//for(int i=0;i<n;i++){
//    cout<<tab[i]<<" ";
//}
//cout<<endl;
clock_t start = clock();
Sortowanie(tab,n);
//for(int i=0;i<n;i++){
//    cout<<tab[i]<<" ";
//}
//printf( "Czas wykonywania: %lu ms\n", k );
k=(clock() - start);
printf("Sredni Czas wykonywania: %lu ms\n", k );
system("pause");
return 0;
}

