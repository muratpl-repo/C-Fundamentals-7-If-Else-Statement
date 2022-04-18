#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//////////////////////// NOT HESAPLAMA////////////////////////

int main()
{
    setlocale(LC_ALL,"Turkish");

    int puan;
    printf("Lütfen aldýðýnýz puaný giriniz...");
    scanf("%d",&puan);

    if (puan >= 80 && puan <= 100) {

        printf("Çok iyi puan...");
    }
    else if (puan >=60 && puan < 80) {
        printf("Ýyi puan...");
    }
    else if (puan >=40 && puan < 60) {
        printf("Kötü puan...");
    }
    else if (puan >=20 && puan < 40) {
        printf("Çok kötü puan");
    }
    else if (puan >=0 && puan <20 ){
        printf("Baþarýsýz...");
    }
    else {

        printf("Lüfen 0-100 aralýðýnda bir deðer giriniz...");
    }

    return 0;
}
