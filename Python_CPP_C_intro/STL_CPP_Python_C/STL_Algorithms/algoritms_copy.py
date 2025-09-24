# Balangic listesi
v = [1,2,0,0]

# ilk iki elamai al, v[2:] kismina kopyala
v[2:4] = v[0:2]

print("v:", v) # [1,2,1,2]

# ikinci liste (balangicta 2 elemanli, sifir dolu gibi düsünelim)

w = [0,0]

# Burada C++'taki std::copy(v.begin(), v.begin(), w.begin())
# boş bir kopyalama (hiçbir şey yapılmaz). Python'da da boş bırakabiliriz.
# yani w değişmeden kalır.

print("w:", w)   # [0, 0]

"""
Özetle:

C++’ta std::copy(a_begin, a_end, b_begin) → Python’da dilimleme (slicing) ile kopyalama.

v[dest_start:dest_end] = v[src_start:src_end] şeklinde yapılır.

Eğer src_start == src_end ise hiçbir şey kopyalanmaz (C++’taki gibi).


"""
