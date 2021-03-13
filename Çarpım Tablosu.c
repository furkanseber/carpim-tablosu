// ÇARPIM TABLOSU 
// FURKAN SEBER
// Marmara Üniversitesi

// Kütüphane
#include <stdio.h>
main (){
// Tanýmlar
   int a, b, i;
   a = 0;
   b = 0;
   i = 0;

// a : Çarpým tablosunda istediðimiz bölüm
// i : Çarpým tablosu için döngü elemaný
// b : Çarpým tablosu satýr sonuçlarý

// Input giriþi
   printf ("Lutfen bir rakam giriniz: ");
   scanf ("%d", &a);

// Çarpým Tablosu Döngüsü
// Her yeni satýrda i'yi 1 artýrarak çarpým tablosunu basýyor.
   for (i=0; i<11; i++){
       b = a * i;                                                                   
       printf ("\n %d x %d = %d", a, i, b);
   }

   printf ("\n\n Carpim Tablosu \n Furkan SEBER \n Marmara Universitesi \n 100220011");

   getch ();
}
