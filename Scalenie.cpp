#include<iostream>
#include<cstdlib>
#include <time.h>
#include <fstream>
#include "stdlib.h"
using namespace std;
 
int *pom;
void scalenie_podtablic(int tab[],int lewy,int srodek,int prawy) 
	{
	int i,j;
	/*zapisz L. czesc podtablicy w tab pom*/
	for(i = srodek + 1; i>lewy; i--) 
		pom[i-1] = tab[i-1]; 
	/*zapisz P. czesc podtablicy w tab pom*/
	for(j = srodek; j<prawy; j++) 
		pom[prawy+srodek-j] = tab[j+1]; 
	/*scalenie dwóch podtablic pomocniczych i zapisanie ich w tab*/
	for(int k=lewy;k<=prawy;k++) 
		if(pom[j]<pom[i])
      		tab[k] = pom[j--];
		else
			tab[k] = pom[i++];
	}
 
void sort_przez_scalanie(int tab[],int lewy, int prawy)
	{
	/*kiedy jeden element*/
	if(prawy<=lewy) return; 
	/*gdzie srodek podtab*/
	int srodek=(prawy+lewy)/2;
	/*dzielimy tab na czesc L. i P.*/
	sort_przez_scalanie(tab,lewy,srodek); 
	sort_przez_scalanie(tab,srodek+1,prawy);
	/*scalamy posortowane tab*/
	scalenie_podtablic(tab,lewy,srodek,prawy);
	}
 
int main()
{
srand (time(NULL));
int k=0;
int n=1048576;
pom = new int[n]; 

/************************************************FATAL****POSOTROWANY OD KONCA****************************//*
int *tabZLE=new int[n];

for(int i=0;i<n;i++)
	{
	tabZLE[i]= n-i;
    }
//for(int i=0;i<n;i++)
//	{
//	cout<<tab[i]<<" ";
//	}
//cout<<endl;
clock_t start = clock();
sort_przez_scalanie(tabZLE,0,n-1);
//for(int i=0;i<n;i++)
//	{
//  cout<<tab[i]<<" ";
//	}
//printf( "Czas wykonywania: %lu ms\n", k );
k=(clock() - start);
printf( "Sredni Czas wykonywania: %lu ms\n", k );
system("pause");
return 0;
}
*/
/**********************************************OPTYMIST******************************************************//*
int *tabDOBRZE=new int[n];
for(int i=0;i<n;i++)
	{
	tabDOBRZE[i]=i;
	}
clock_t start = clock();
sort_przez_scalanie(tabDOBRZE,0,n-1);
k=(clock() - start);
printf( "Sredni Czas wykonywania: %lu ms\n", k );
system("pause");
return 0;
}*/


/**************************************************przpadek******************************************/
//wczytanie elementów tablicy
int *tab=new int[n];
for(int i=0;i<n;i++)
	{
	tab[i]=rand() % 10 +1;
	}
//wyswietlanie nieposort
//for(int i=0;i<n;i++)
//	{
//	cout<<tab[i]<<" ";
//	}
//cout<<endl;
clock_t start = clock();
sort_przez_scalanie(tab,0,n-1);
k=(clock() - start);
printf( "Sredni Czas wykonywania: %lu ms\n", k );
system("pause");
return 0;
}
