#include <iostream>
#include <fstream>
#include <cstdlib>
#include <time.h>
#include "stdlib.h"

using namespace std;


void Sortowanie(int tab[],int lew,int praw)
{
int i=lew;
int j=praw;
int x=tab[(lew+praw)/2];
do	{
    while(tab[i]<x)
    i++;
    while(tab[j]>x)
    j--;
    if(i<=j)
		{
		swap(tab[i],tab[j]);
        i++;
        j--;
        }
    }
while(i<=j);
if(lew<j) Sortowanie(tab,lew,j);
if(praw>i) Sortowanie(tab,i,praw);
}

int main()	{
//clock_t start = clock();
srand (time(NULL));
int k=0;
int n=1048576;
/********************************POSORTOWANY DO PO£OWY**********************************/
int *tabZLE=new int[n];

for(int i=0;i<(n/2);i++)
	{
	tabZLE[i]=i;
	}
for(int i=(n/2)+1;i<n;i++)
	{
	tabZLE[i]= rand() % 100000 + 1;
	}
clock_t start = clock();
Sortowanie(tabZLE,0,n-1);
k=(clock() - start);
printf( "Sredni Czas wykonywania: %lu ms\n", k );
system("pause");
return 0;
}

/****************************OPTYMISTYCZNY*******************************************//*
int *tabDOBRZE=new int[n];

for(int i=0;i<n;i++)
	{
	tabDOBRZE[i]=i;
	}
clock_t start = clock();
Sortowanie(tabDOBRZE,0,n-1);
k=(clock() - start);
printf( "Sredni Czas wykonywania: %lu ms\n", k );
system("pause");
return 0;
}

*/
/***************************PRZYPADKOWY*******************************************//*
int *tab=new int[n];
for(int i=0;i<n;i++)
	{
	tab[i]= rand() % 100000 + 1;
	}
//for(int i=0;i<n;i++){
//cout<<tab[i]<<" ";
//}
//cout<<endl;
clock_t start = clock();
Sortowanie(tab,0,n-1);
//for(int i=0;i<n;i++){
//	cout<<tab[i]<<" ";
//}
//printf( "Czas wykonywania: %lu ms\n", k );
k=(clock() - start);
printf( "Sredni Czas wykonywania: %lu ms\n", k );
system("pause");
return 0;
}
*/
/*****************************************************************************************/
