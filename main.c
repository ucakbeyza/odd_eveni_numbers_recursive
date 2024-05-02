#include <stdio.h>

void kontrolEt(int *sayi) {
    if (*sayi % 2 == 0) {
        printf("%d sayisi cifttir.\n", *sayi);
    } else {
        printf("%d sayisi tek sayidir.\n", *sayi);
    }
}

int main() {
    int sayi;
    int *p;

    printf("Bir sayi girin: ");
    scanf("%d", &sayi);

    p = &sayi; // sayi'nin adresini p pointer'ına atadık

    kontrolEt(p); // kontrolEt fonksiyonunu p pointer'ı ile çağırdık

    return 0;
}
