#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    // 1. Siralama (std::sort)
    std::vector<int> numbers = {5,2,8,1,3};
    std::cout << "Original dizi: ";
    for(int num : numbers) 
        std::cout << num << " ";
        std::cout << std::endl;

    // Kücükten büyüge siralama
    std::sort(numbers.begin(), numbers.end());
    std::cout << "Sirali dizi: ";
    for(int num : numbers)
        std::cout << num << " ";
        std::cout << std::endl;

    // 2. Ters Cevirme(std::reverse)
    std::reverse(numbers.begin(), numbers.end());
    std::cout << "Reverse dizi:";
    for (int num : numbers)
        std::cout << num << " ";
        std::cout << std::endl;

    // std::find
    int target = 8;
    auto it = std::find(numbers.begin(), numbers.end(),target);
    if(it != numbers.end()){
        std::cout << "Eleman bulundu: " << target << " ( indeks: " << std::distance(numbers.begin(),it) << ")" << std::endl;

    }else{
        std::cout << "Eleman bulunamadi: " << target << std::endl;
    }

    // 4. Toplama (std::accumulate)
    //#include <numeric> 
    //int sum = accumulate(numbers.begin(), numbers.end(), 0);
    //std::cout << "Elemanlarin toplami: " << sum << std::endl;

    // 5. Dönüstürme(std::transform)
    std::vector<int>squared(numbers.size());
    std::transform(numbers.begin(), numbers.end(), squared.begin(), [](int x){return x*x;});
    std::cout << "Kareleri alınmış dizi: ";
    for (int num : squared) std::cout << num << " ";
    std::cout << std::endl;

    // 6. Tekrarlanan Elemanlari Kaldirma (std::unique)
    std::vector<int> duplicate_numbers = {1,2,2,3,3,4,5};
    std::sort(duplicate_numbers.begin(),duplicate_numbers.end()); // önce siralama yapilmali
    auto unique_end = std::unique(duplicate_numbers.begin(),duplicate_numbers.end());
    duplicate_numbers.erase(unique_end, duplicate_numbers.end()); // Fazladan elamanlari sil
    std::cout << "Benzersiz elemanlar: ";
    for(int num: duplicate_numbers) std::cout << num << " ";
    std::cout << std::endl;

    // 7. Eleman sayma (std::count)
    int count_of_two = std::count(numbers.begin(), numbers.end(),2);
    std::cout << "2 elemaninin sayisi: " << count_of_two << std::endl;

    return 0; 


}