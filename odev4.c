#include <stdio.h>
#include <stdlib.h>


 struct Ogrenci{//5 adet ��rencinin ki�isel bilgilerini depolayacak olan struct� olu�turduk.
	char ad[200],soyad[200];
	int no,yas;
}kisi1,kisi2,kisi3,kisi4,kisi5;//5 adet ��renciyi tan�mlad�k.

 struct ogrenci_adres{//5 adet ��rencinin adres bilgilerini depolayacak olan struct� olu�turduk.
	char ulke[200],sehir[200];
	int ev_no;
}oa1,oa2,oa3,oa4,oa5;// 5 adet ��rencinin adres bilgilerini tan�mlad�k.

int main() {
	
   
   strcpy(kisi1.ad,"Cem");//��rencilerin ki�isel ve adres bilgilerini tan�mlad�k.
   strcpy(kisi1.soyad,"Guzel");
   kisi1.no=122;
   kisi1.yas=19;
   strcpy(oa1.ulke,"Turkiye");
   strcpy(oa1.sehir,"Istanbul");
   oa1.ev_no=7;
   
   strcpy(kisi2.ad,"Green");
   strcpy(kisi2.soyad,"Lake");
   kisi2.no=456;
   kisi2.yas=17;
   strcpy(oa2.ulke,"Ingiltere");
   strcpy(oa2.sehir,"London");
   oa2.ev_no=34;
   
   strcpy(kisi3.ad,"Micheal");
   strcpy(kisi3.soyad,"Scofields");
   kisi3.no=327;
   kisi3.yas=16;
   strcpy(oa3.ulke,"ABD");
   strcpy(oa3.sehir,"New York");
   oa3.ev_no=47;
   
   strcpy(kisi4.ad,"Lebron");
   strcpy(kisi4.soyad,"James");
   kisi4.no=984;
   kisi4.yas=15;
   strcpy(oa4.ulke,"ABD");
   strcpy(oa4.sehir,"Miami");
   oa4.ev_no=93;
   
   strcpy(kisi5.ad,"Mark");
   strcpy(kisi5.soyad,"Dony");
   kisi5.no=814;
   kisi5.yas=20;
   strcpy(oa5.ulke,"Almanya");
   strcpy(oa5.sehir,"M�nih");
   oa5.ev_no=10;
   
   printf("%s,%s,%d,%d \t Adres = %s,%s,%d\n\n",kisi1.ad,kisi1.soyad,kisi1.no,kisi1.yas,oa1.ulke,oa1.sehir,oa1.ev_no);//��rencilerin ki�isel ve adres bilgilerini ekrana yazd�rd�k.
   printf("%s,%s,%d,%d \t Adres = %s,%s,%d\n\n",kisi2.ad,kisi2.soyad,kisi2.no,kisi2.yas,oa2.ulke,oa2.sehir,oa2.ev_no);
   printf("%s,%s,%d,%d \t Adres = %s,%s,%d\n\n",kisi3.ad,kisi3.soyad,kisi3.no,kisi3.yas,oa3.ulke,oa3.sehir,oa3.ev_no);
   printf("%s,%s,%d,%d \t Adres = %s,%s,%d\n\n",kisi4.ad,kisi4.soyad,kisi4.no,kisi4.yas,oa4.ulke,oa4.sehir,oa4.ev_no);
   printf("%s,%s,%d,%d \t Adres = %s,%s,%d\n\n",kisi5.ad,kisi5.soyad,kisi5.no,kisi5.yas,oa5.ulke,oa5.sehir,oa5.ev_no);
	
	
	return 0;
}
