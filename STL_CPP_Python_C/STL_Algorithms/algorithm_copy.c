/*
C’de std::vector ve std::copy gibi hazır soyutlamalar yoktur. Onun yerine:

Diziler (array) veya malloc ile bellek yönetimi,

memcpy veya for döngüsü ile kopyalama kullanılır.

*/

// C Versiyonu (std::copy yerine memcpy / döngü)

#include <stdio.h>
#include <string.h> // memcpy icin

int main(){
    double v[4] = {1,2,0,0};
    // İlk 2 elemanı (v[0], v[1]) -> v[2], v[3] konumlarına kopyala
    memcpy(&v[2], &v[0], 2*sizeof(double)); 

    // v yazdir
    for(size_t i = 0; i < 4; i++){
        printf("%.1f", v[i]);
    }
    printf("\n");

    // w dizisi
    double w[2] = {0, 0};

    // w yazdır
    for (size_t i = 0; i < 2; i++) {
        printf("%.1f ", w[i]);
    }
    printf("\n");

    return 0;

    /*
    memcpy nedir?

    memcpy (memory copy) C’nin <string.h> kütüphanesinden gelen bir fonksiyondur.

    Bellekte bir kaynaktan belirli sayıda baytı alıp hedef adrese kopyalar.

    Yani, "şu kadar byte’ı buradan al, şuraya yapıştır" der.
    
    
    */


}