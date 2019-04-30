#include <iostream.h>
#include <conio.h>

main ()
{
	int M,U,H,W,I,tnt,tnnt,nm,nf,na;
	char nama[20],nim[10],grade;
      cout<<"nama="; cin>>nama;
      cout<<"\Nim=";cin>>nim;
      cout<<"\Nilai tugas1:";cin>>M;
      cout<<"\Nilai tugas2:";cin>>U;
      cout<<"\Nilai tugas3:";cin>>H;
      cout<<"\Nilai mid:";cin>>W;
      cout<<"\Nilai final:";cin>>I;
      tnnt=(M+U+H)/3;
      tnt=tnnt*20/100;
      nm=W*40/100;
      nf=I*40/100;
      na=tnt+nm+nf;
      cout<<"\nNama mahasiswa="<<nama;
      cout<<"\nNim           ="<<nim;
      cout<<"\nNilai akhir   ="<<na;
      cout<<"\nDengan grade  ="<<grade;
      if(na >=80){
      	cout<<"a";
      }else if(na >=70){
      	cout<<"b";
      } else if(na >=60){
      	cout<<"c";
      } else if(na >=50){
      	cout<<"d";
      } else {
      	cout<<"e";
      }
      getch();

      }
