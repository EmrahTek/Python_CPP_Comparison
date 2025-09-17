/*

To copy a range in a container to a place in the same or a different container, use
std::copy:
std::copy Fonksiyonu Hakkında
std::copy, belirli bir kaynak aralıktaki elemanları hedef aralığa kopyalamak için kullanılır. 
Genel olarak, std::copy'nin parametreleri şunlardır:

cpp

std::copy(kaynak_başlangıç, kaynak_son, hedef_başlangıç);
*/

#include<iostream>
#include<vector>
#include<algorithm>

int main(){
    std::vector<double>v{1,2,0,0};
    //v.begin() --> baslangic, v.begin()+2 kadar bu eleman dahil degil.
    //sonra kopyalamanin baslanacagi yer.
    std::copy(v.begin(), v.begin()+2, v.begin()+2);
    for(size_t i = 0; i < v.size(); i++)
        std::cout << v[i] << " ";
    std::cout << "\n";
    std::vector <double> w(2);
    std::copy(v.begin(), v.begin(), w.begin());

    for(size_t i=0; i < w.size(); i++)
        std::cout << w[i] << " ";

    return 0; 

}