// �ARPIM TABLOSU 
// FURKAN SEBER
// Marmara �niversitesi

// K�t�phane
#include <stdio.h>
main (){
// Tan�mlar
   int a, b, i;
   a = 0;
   b = 0;
   i = 0;

// a : �arp�m tablosunda istedi�imiz b�l�m
// i : �arp�m tablosu i�in d�ng� eleman�
// b : �arp�m tablosu sat�r sonu�lar�

// Input giri�i
   printf ("Lutfen bir rakam giriniz: ");
   scanf ("%d", &a);

// �arp�m Tablosu D�ng�s�
// Her yeni sat�rda i'yi 1 art�rarak �arp�m tablosunu bas�yor.
   for (i=0; i<11; i++){
       b = a * i;                                                                   
       printf ("\n %d x %d = %d", a, i, b);
   }

   printf ("\n\n Carpim Tablosu \n Furkan SEBER \n Marmara Universitesi \n 100220011");

   getch ();
}
