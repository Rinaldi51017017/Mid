#include <iostream.h>
#include <conio.h>
main (){
int b,c,d,e,f,totalnt,totalt,mid,nfinal,Na;
char nama [20], nim [10],nhuruf;


cout<<"masukkan nama mahasiswa : "; cin >> nama;
cout<<"masukkan nim mahasiswa : "; cin >> nim;
cout<<"nlai tgs 1 : "; cin >> b;
cout<<"nilai tgs 2 : "; cin >> c;
cout<<"nilai tgs 3 : "; cin >> d;
cout<<"nilai mid : "; cin >> e;
cout<<"nilai final : "; cin >> f;
  totalnt = (b+c+d) / 3;
  totalt = totalnt * 20/100;
  mid = e * 40/100;
  nfinal = f * 40/100;
  Na = totalt + mid + nfinal;
  cout<<"in nama mahasiswa = "<<nama;
  cout<<"in nim            ="<<nim;
  cout<<"in nilai akhir    ="<<Na;
  cout<<"in dengan kreteria ="<<nhuruf;
   if (Na > = 80){
      cout <<"A";
   } else if (Na >=70){
      cout <<"B";
   } else if (Na >=60){
      cout <<"C";
   } else if (Na >=50 {
      cout <<"D";
   } else {
     cout <<"E";
   }
   getch();

