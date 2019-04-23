#include<iostream.h>
#include<conio.h>
void main () {
     char kode;
     char *hari;
     clrscr();
     cout<<"           INPUT KODE HARI          \n";
     cout<<"Input Kode Hari   :   "; cin>>kode;
     clrscr();
     if ((kode=='a'||kode=='A')){
        hari = "Senin";
        }
     else if ((kode=='b'||kode=='B')){
        hari = "Selasa";
        }
     else if ((kode=='c'||kode=='C')){
        hari = "Rabu";
        }
     else if ((kode=='d'||kode=='D')){
        hari = "Kamis";
        }
     else if ((kode=='e'||kode=='E')){
        hari = "Jumat";
        }
     else if ((kode=='f'||kode=='F')){
        hari = "Sabtu";
        }
     else if ((kode=='g'||kode=='G')){
        hari = "Ahad";
        }
     else
     cout<<"Maaf kode hari yang Anda Masukkan Salah";

cout<<"             HARI            \n";
cout<<"------------------------------------\n";
cout<<"Kode Hari             : "<<kode<<"\n";
cout<<"Nama Hari             : "<<hari<<"\n";
getch(); }
