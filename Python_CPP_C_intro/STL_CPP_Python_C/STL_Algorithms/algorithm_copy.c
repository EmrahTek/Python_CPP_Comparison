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
}