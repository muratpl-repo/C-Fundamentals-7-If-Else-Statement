#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//////////////////////// NOT HESAPLAMA////////////////////////

int main()
{
    setlocale(LC_ALL,"Turkish");

    int puan;
    printf("L�tfen ald���n�z puan� giriniz...");
    scanf("%d",&puan);

    if (puan >= 80 && puan <= 100) {

        printf("�ok iyi puan...");
    }
    else if (puan >=60 && puan < 80) {
        printf("�yi puan...");
    }
    else if (puan >=40 && puan < 60) {
        printf("K�t� puan...");
    }
    else if (puan >=20 && puan < 40) {
        printf("�ok k�t� puan");
    }
    else if (puan >=0 && puan <20 ){
        printf("Ba�ar�s�z...");
    }
    else {

        printf("L�fen 0-100 aral���nda bir de�er giriniz...");
    }

    return 0;
}
