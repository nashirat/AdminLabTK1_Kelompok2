from string import ascii_uppercase

caps = """Rado mendapatkan pesan dari oranG yang tidak dikenal. 
Ketika ditanya namanya oleh Radoorang tersebut memberikan inisial namanya yaitu QH. 
orang terseBut memberi pesan aneH dan isinya berupa tulisan yang tidaK jelas. 
ORang tersebut telah mengirim Pesan Rado sebanyak 10X dengan isi pesan yang sama. 
karena Rado Curiga dan penAsaran dengan maksud pesan tersebut Rado meminta bantuan temannya VEVe untuk mengartikan isi pesan dari QH. 
sayanGnyaVeve tidak mengerti apa maksud dari pesan itu. 

Vevepun akhirnya menyerah Rado menjadi Was-Was karena takutnya pesan dari QH itu ternyata penting. 
Radopun meminta QH untuk menJelaskan apa maksud dari pesaN itu. 
QH menjawab “Cobalah untuk melihat lebih dekat apa isi pesan itu”. 
tanpa Rado sadari pesan dari QH dan cerita yang telah ia sampaikan merupakan Bagian pesan tersebut. 
ternyata pesan tersebut terletaK pada seluruh kalimat-kalimat barusan :V. 
coBalah untuk menemukan apa arti Pesan yang dimaksud berdasarkan cerita Rado ini.
"""

uplur = [i for i in caps if i in ascii_uppercase]
asciilur = [ord(i) for i in uplur]

all_shift = []
temp = []
res = 0
for i in range(len(uplur)):
    for j in range(4):
        huruf = asciilur[i] - 65
        if j == 0:
            res = (huruf + 2) % 26
            # res += 1
        elif j == 1:
            res = (huruf - 2)
            if res < 0:
                res = (res + 26) % 26
                # res += 1
            else:
                res = res % 26
                # res += 1
        elif j == 2:
            res = (huruf * 2) % 26
            res += 1
        elif j == 3:
            res = (huruf // 2) % 26
            # res += 1
        temp.append(res)
    all_shift.append(temp.copy())
    temp.clear()
j = 0
for i in range(len(all_shift)):
    print(uplur[i], asciilur[i], " | ", chr(all_shift[i][j]+65), "\t", chr(all_shift[i][j+1]+65), "\t", chr(all_shift[i][j+2]+65), "\t", chr(all_shift[i][j+3]+65))

# print(alpha)
