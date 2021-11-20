#include<stdio.h>
#include<stdlib.h>

#define boyut 15

typedef struct Yapilar{
	int indis;
	int eleman[boyut];
}yapilar;

yapilar yapi;
int kuyruk_dolumu()
{
	if(yapi.indis>=boyut-1) return 1;
	else return -1;
}
int kuyruk_bosmu()
{
	if(yapi.indis==-1) return 1;
	else return -1;
}
void ekle(int sayi)
{
	if(kuyruk_dolumu()==1)printf("Kuyruk dolu\n");
	else
	{
		yapi.indis++;
		yapi.eleman[yapi.indis]=sayi;
	}
}

int cikar()
{
	int cikan;
	cikan=yapi.eleman[yapi.indis];
	yapi.indis--;
	return cikan;
}

int main()
{
	yapi.indis=-1;
	int sayi;
	printf("\nIkili sayiya cevirmek istediginiz sayiyi giriniz:");
	scanf("%d",&sayi);
	while(sayi>0)
	{
		ekle(sayi%2);
		sayi=sayi/2;
	}
	while(kuyruk_bosmu()!=1)
	{
		printf("%d",cikar());
	}
}
