# LAPORAN TUGAS KELOMPOK 1 #

### KELOMPOK 2 ###
### Muhammad Sulthon Nashir 05311840000011 ###
### Dava Aditya Jauhar 05311940000030 ###

#### SOAL 1 ####

[Code Lengkap](https://github.com/nashirat/AdminLabTK1_Kelompok2/blob/main/Soal1/soal1.ino)

Penjelasan Algoritma Utama

1. Button State
Algoritma dibawah akan membaca buttonState dari digitalReaad(button). Setelah itu, jika buttonState tidak sama dengan state sebelumya, dan buttonState = high, akan menambah counter +1. Jika counter sudah lebih dari 2, maka akan direset kembali ke 1. Jika counter 1, maka semua lampu akan mati. Jika counter 2, akan menjalankan fungsi lampu menyala tergantung soalnya.

```ino
void buttonF1()
{
    buttonState1 = digitalRead(button);
    if (buttonState1 != lastButtonState1)
    {
        if (buttonState1 == HIGH)
        {
            buttonPushCounter1++;
        }
        else
        {
            Serial.println("changing....");
        }
        delay(10);
    }
    lastButtonState1 = buttonState1;
    if (buttonPushCounter1 > 2)
    {
        buttonPushCounter1 = 1;
    }
}
```

2. Pattern Lampu 1
Lampu akan nyala berbarengan ketika button diklik, lalu mati berbarengan ketika button diklik lagi.
```ino
void nyala1()
{
    if (buttonPushCounter1 == 2)
    {
        digitalWrite(led, HIGH);
        digitalWrite(led2, HIGH);
        digitalWrite(led3, HIGH);
    }
    else if (buttonPushCounter1 == 1)
    {
        digitalWrite(led, LOW);
        digitalWrite(led2, LOW);
        digitalWrite(led3, LOW);
    }
}
```
3. Pattern Lampu 2
Lampu kiri dan kanan akan nyala jika diklik, lalu mati dengan lampu tengah menyala.
```ino
void nyala2()
{
    if (buttonPushCounter2 == 2)
    {
        digitalWrite(led, HIGH);
        digitalWrite(led2, LOW);
        digitalWrite(led3, HIGH);
        delay(1000);
        digitalWrite(led, LOW);
        digitalWrite(led2, HIGH);
        digitalWrite(led3, LOW);
        delay(1000);
    }
    else if (buttonPushCounter2 == 1)
    {
        digitalWrite(led, LOW);
        digitalWrite(led2, LOW);
        digitalWrite(led3, LOW);
    }
}
```
4. Pattern Lampu 3
Lampu akan nyala urut dari kanan ke kiri, lalu mati dari kiri ke kanan.
```ino
void nyala3()
{
    if (buttonPushCounter3 == 2)
    {
        digitalWrite(led3, HIGH);
        delay(500);
        digitalWrite(led2, HIGH);
        delay(500);
        digitalWrite(led, HIGH);
        delay(500);
        digitalWrite(led, LOW);
        delay(500);
        digitalWrite(led2, LOW);
        delay(500);
        digitalWrite(led3, LOW);
        delay(500);
    }
    else if (buttonPushCounter3 == 1)
    {
        digitalWrite(led, LOW);
        digitalWrite(led2, LOW);
        digitalWrite(led3, LOW);
    }
}
```


### SOAL 2 ###
Karena terlalu banyak dan terlalu random, kami belum berhasil menemukan kata2 yang menurut kami berbentuk dan bisa dianggap sebagai kunci. Contoh: kami menemukan kata `pemisah ini`, tetapi tidak bisa menemukan kata selanjutnya yang masuk akal.
