#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
int tahmin, sayi, tahmin_hakki = 3;
srand(time(NULL));
sayi = rand() % 10 + 1; // 1 ile 10 arasında bir sayı üretir

while (tahmin_hakki > 0) {
    printf("Tahmininizi giriniz: ");
    scanf("%d", &tahmin);

    if (tahmin == sayi) {
        printf("Tebrikler, sayıyı bildin !\n");
        break;
    } else if (tahmin > sayi) {
        printf("Tahmininiz sayıdan daha büyük.\n");
    } else {
        printf("Tahmininiz sayıdan daha küçük.\n");
    }

    tahmin_hakki--;
}

if (tahmin_hakki == 0) {
    printf("Malesef, bilemedin :(((\n");
}

return 0;
}
