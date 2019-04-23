#include <iostream.h>
#include <conio.h>
void main()
{
char hari;
clrscr();
cout<<" Masukkan kode program hari (A - G);";cin>>hari;
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
if(hari=='A'||hari=='a')
{cout <<"Senin";}
else if (hari=='B'||hari=='b')
{cout <<"Selasa";}
else if (hari=='C'||hari=='c')
{cout <<"Rabu";}
else if (hari=='D'||hari=='d')
{cout <<"Kamis";}
else if (hari=='E'||hari=='e')
{cout <<"Jumat";}
else if (hari=='F'||hari=='f')
{cout <<"Sabtu";}
else if (hari=='G'||hari=='g')
{cout <<"Minggu";}
else
cout<<"Tidak ada kode hari yang sesuai ";
getch();
}


