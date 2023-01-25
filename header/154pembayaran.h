#ifndef PEMBAYARANDUA__
#define PEMBAYARANDUA__
#include "154dataMakanan.h"
#include "variabel.h"
#include <iomanip>
#include <iostream>
using namespace std;
void pembelianMakananBagianDua() {
  FoodData();
  hargaMakanan();
  cout << "===================================";
  cout << endl;
  cout << "             ETALASE 1          ";
  cout << endl;
  cout << "===================================";
  cout << endl;
  cin.ignore();
  cout << "Masukan Nama : ";
  getline(cin, name);
  pilihmerk:
  cout << clrs;
  cout << endl;
  cout << "===================================";
  cout << endl;
  cout << "             VENDOR / MERK         ";
  cout << endl;
  cout << "===================================";
  cout << endl;
  cout << "1. Whiskas";
  cout << endl;
  cout << "2. Max Life";
  cout << endl;
  cout << "3. PurinaSuperCat";
  cout << endl;
  cout << "4. Supercat";
  cout << endl;
  cout << "5. KitCat";
  cout << endl;
  cout << "6. ProDietDRY";
  cout << endl;
  cout << "7. ProDietWet";
  cout << endl;
  cout << "8. Life Cat";
  cout << endl;
  cout << "9. IAMS";
  cout << endl;
  cout << "10. Exit";
  cout << endl;
  cout << "Pilih [1-10] : ";
  cin >> pilih;
  if (pilih == 1) {
    cout << "===================================";
    cout << endl;
    cout << "              WHISKAS            ";
    cout << endl;
    cout << "===================================";
    cout << endl;
    cout << "1. Lihat Varian";
    cout << endl;
    cout << "2. Pilih Merk Lain";
    cout << endl;
    cout << "3. Sorting Harga & Nama";
    cout << endl;
    cout << "4. Exit";
    cout << endl;
    cout << "Pilih [1-4] : ";
    cin >> pilih;
    if (pilih == 1) {
      cout << "===================================";
      cout << endl;
      cout << "          VARIAN WHISKAS           ";
      cout << endl;
      cout << "===================================";
      cout << endl;
      int sizeOfMakananWhiskas =
          sizeof(makananWhiskasKucing) / sizeof(makananWhiskasKucing[0]);
      for (int i = 0; i < sizeOfMakananWhiskas; i++) {
        cout << "Whiskas " << i + 1 << " : " << makananWhiskasKucing[i]
             << "| Harga : " << hargamakananWhiskasKucing[i];
        cout << endl;
      }
      cout << endl;
      cout << "Masukan Jumlah Barang : ";
      cin >> jumlah;
      for (int i = 0; i < jumlah; i++) {
        cout << "Pilih makanan : ";
        cin >> pilih;
        cout << "Kamu Pilih : " << makananWhiskasKucing[pilih - 1];
        cout << endl;
        // proses pemindahan array
        savedata[indexing] = makananWhiskasKucing[pilih - 1];
        saveharga[indexing] = hargamakananWhiskasKucing[pilih - 1];
        indexing++;
      }
      // nanti ini bakal ke tulis ke txt
      tulisdata.open("./dummy/daftarBelanja.txt", ios::app);
      for (int i = 0; i < indexing; i++) {
        tulisdata << savedata[i] << " | " << saveharga[i];
        tulisdata << endl;
      }
      tulisdata.close();
      /*
      hitung total harga yang ada dalam array
      terus masukin ke dalam variable statis.
      */
      for (int i = 0; i < indexing; i++) {
        finalHarga += saveharga[i];
      }
      cout << "harga total : " << finalHarga;
      cout << endl;
      cout << "Lanjut Ke Pembayaran [y/n] : ";
      cin >> jawabanPengguna;
      if (jawabanPengguna == 'Y' || jawabanPengguna == 'y') {
        cout << clrs;
        cout << endl;
        cout << "pilih Pembayaran : ";
        cout << endl;
        cout << "1. Cash";
        cout << endl;
        cout << "2. E-Wallet";
        cout << endl;
        cout << "3. Debit";
        cout << endl;
        cout << "4. Batal";
        cout << endl;
        cout << "Pilih [1-4] : ";
        cin >> pilih;
        if (pilih == 1) {
          jenisPembayaran = "Cash";
          cout << endl;
          cout << "===================";
          cout << endl;
          cout << "        CASH       ";
          cout << endl;
          cout << "===================";
          cout << endl;
          cout << "Total Harga : ";
          cout << finalHarga;
          cout << endl;
          cout << "Masukan Jumlah Uang : ";
          cin >> bayar;
          cout << endl;
          cout << "Kembalian : ";
          cout << transaksiMakanan(finalHarga, bayar);
        } else if (pilih == 2) {
          jenisPembayaran = "E-Wallet";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "     METODE PEMBAYARAN    ";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "          E-Wallet        ";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "pilih E-Wallet : ";
          cout << endl;
          cout << "1. Gopay";
          cout << endl;
          cout << "2. Dana";
          cout << endl;
          cout << "3. OVO";
          cout << endl;
          cout << "4. Flip";
          cout << endl;
          cout << "5. Kembali";
          cout << endl;
          cout << "Pilih [1-5] : ";
          cin >> pilih;
          if (pilih == 1) {
            cout << "==========================";
            cout << endl;
            cout << "          GOPAY          ";
            cout << endl;
            cout << "==========================";
            cout << endl;
            // hitung
            cout << "Total Harga : ";
            cout << finalHarga;
            cout << endl;
            cout << "Masukan Jumlah Uang : ";
            cin >> bayar;
            cout << endl;
            cout << "Kembalian : ";
            cout << transaksiMakanan(finalHarga, bayar);
          } else if (pilih == 2) {
            cout << "==========================";
            cout << endl;
            cout << "           DANA           ";
            cout << endl;
            cout << "==========================";
            cout << endl;
            // hitung
            cout << "Total Harga : ";
            cout << finalHarga;
            cout << endl;
            cout << "Masukan Jumlah Uang : ";
            cin >> bayar;
            cout << endl;
            cout << "Kembalian : ";
            cout << transaksiMakanan(finalHarga, bayar);
          } else if (pilih == 3) {
            cout << "==========================";
            cout << endl;
            cout << "           OVO           ";
            cout << endl;
            cout << "==========================";
            cout << endl;
            // hitung
            cout << "Total Harga : ";
            cout << finalHarga;
            cout << endl;
            cout << "Masukan Jumlah Uang : ";
            cin >> bayar;
            cout << endl;
            cout << "Kembalian : ";
            cout << transaksiMakanan(finalHarga, bayar);
          } else if (pilih == 4) {
            cout << "==========================";
            cout << endl;
            cout << "           FLIP           ";
            cout << endl;
            cout << "==========================";
            cout << endl;
            // hitung
            cout << "Total Harga : ";
            cout << finalHarga;
            cout << endl;
            cout << "Masukan Jumlah Uang : ";
            cin >> bayar;
            cout << endl;
            cout << "Kembalian : ";
            cout << transaksiMakanan(finalHarga, bayar);
          } else if (pilih == 5) {
            cout << "==========================";
            cout << endl;
            cout << "           KEMBALI        ";
            cout << endl;
            cout << "==========================";
            cout << endl;
          }
        } else if (pilih == 3) {
          jenisPembayaran = "DEBIT";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "      METODE PEMBAYARAN   ";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "           DEBIT         ";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "Masukan Kartu Anda Kedalam EDC!";
          cout << endl;
          cout << "Sudah Masukan Kartu [y/n]";
          cin >> jawabanPengguna;
          if (jawabanPengguna == 'Y' || jawabanPengguna == 'y') {
            cout << "Total Harga : ";
            cout << finalHarga;
            cout << endl;
            cout << "Masukan Jumlah Uang : ";
            cin >> bayar;
            cout << endl;
            cout << "Kembalian : ";
            cout << transaksiMakanan(finalHarga, bayar);
          } else if (jawabanPengguna == 'N' || jawabanPengguna == 'n') {
            cout << "GAGAL";
            cout << endl;
            goto pilihmerk;
          }
        }
      }
      cout << endl;
      cout << endl;
      cout << endl;
      cout << "Kembali [y/n]? : ";
      cin >> jawabanPengguna;
      if (jawabanPengguna == 'Y' || jawabanPengguna == 'y') {
        goto pilihmerk;
      } else if (jawabanPengguna == 'N' || jawabanPengguna == 'n') {
        cout << "===================================";
        cout << endl;
        cout << "          PROGRAM SELESAI          ";
        cout << endl;
        cout << "===================================";
        cout << endl;
        cout << "===================================";
        cout << endl;
        cout << "   TERIMAKASIH SUDAH BERKUNJUNG    ";
        cout << endl;
        cout << "===================================";
        cout << endl;
      } else {
        cout << "Jawaban yang kamu masukan tidak valid!";
        cout << endl;
        cout << "===================================";
        cout << endl;
        cout << "          PROGRAM SELESAI          ";
        cout << endl;
        cout << "===================================";
        cout << endl;
        exit(-1);
      }
    } else if (pilih == 2) {
      goto pilihmerk;
    } else if (pilih == 3) {
      int size = sizeof(makananWhiskasKucing) / sizeof(makananWhiskasKucing[0]);
      sort(hargamakananWhiskasKucing, hargamakananWhiskasKucing + size);
      sort(makananWhiskasKucing, makananWhiskasKucing + size);

      cout << "---Sorting Berdasarkan Harga----\n";
      for (int i = 0; i < size; i++) {
        cout << "Rp. " << hargamakananWhiskasKucing[i] << endl;
      }

      cout << "---Sorting Berdasarkan Nama----\n";
      for (int i = 0; i < size; i++) {
        cout << makananWhiskasKucing[i] << endl;
      }
      cout << endl;
      cout << "Kembali [y/n] : ";
      cin >> jawabanPengguna;
      if (jawabanPengguna == 'y' || jawabanPengguna == 'Y') {
        cout << clrs;
        goto pilihmerk;
      } else {
        return;
      }
    } else if (pilih == 4) {
      exit(-1);
    }
  } else if (pilih == 2) {
    cout << "===================================";
    cout << endl;
    cout << "              MAX LIFE             ";
    cout << endl;
    cout << "===================================";
    cout << endl;
    cout << "1. Lihat Varian";
    cout << endl;
    cout << "2. Pilih Merk Lain";
    cout << endl;
    cout << "3. Sorting Harga & Nama";
    cout << endl;
    cout << "4. Exit";
    cout << endl;
    cout << "Pilih [1-4] : ";
    cin >> pilih;
    if (pilih == 1) {
      cout << "===================================";
      cout << endl;
      cout << "          VARIAN MAX LIFE          ";
      cout << endl;
      cout << "===================================";
      cout << endl;
      int sizeOfMakananMax =
          sizeof(makananMaxLifeKucing) / sizeof(makananMaxLifeKucing[0]);
      for (int i = 0; i < sizeOfMakananMax; i++) {
        cout << "Max Life " << i + 1 << " : " << makananMaxLifeKucing[i]
             << "| Harga : " << hargamakananMaxLifeKucing[i];
        cout << endl;
      }
      cout << endl;
      cout << "Masukan Jumlah Barang : ";
      cin >> jumlah;
      for (int i = 0; i < jumlah; i++) {
        cout << "Pilih makanan : ";
        cin >> pilih;
        cout << "Kamu Pilih : " << makananMaxLifeKucing[pilih - 1];
        cout << endl;
        // proses pemindahan array
        savedata[indexing] = makananMaxLifeKucing[pilih - 1];
        saveharga[indexing] = hargamakananMaxLifeKucing[pilih - 1];
        indexing++;
      }
      // nanti ini bakal ke tulis ke txt
      tulisdata.open("./dummy/daftarBelanja.txt", ios::app);
      for (int i = 0; i < indexing; i++) {
        tulisdata << savedata[i] << " | " << saveharga[i];
        tulisdata << endl;
      }
      tulisdata.close();
      /*
      hitung total harga yang ada dalam array
      terus masukin ke dalam variable statis.
      */
      for (int i = 0; i < indexing; i++) {
        finalHarga += saveharga[i];
      }
      cout << "harga total : " << finalHarga;
      cout << endl;
      cout << "Lanjut Ke Pembayaran [y/n] : ";
      cin >> jawabanPengguna;
      if (jawabanPengguna == 'Y' || jawabanPengguna == 'y') {
        cout << clrs;
        cout << endl;
        cout << "pilih Pembayaran : ";
        cout << endl;
        cout << "1. Cash";
        cout << endl;
        cout << "2. E-Wallet";
        cout << endl;
        cout << "3. Debit";
        cout << endl;
        cout << "4. Batal";
        cout << endl;
        cout << "Pilih [1-4] : ";
        cin >> pilih;
        if (pilih == 1) {
          jenisPembayaran = "Cash";
          cout << endl;
          cout << "===================";
          cout << endl;
          cout << "        CASH       ";
          cout << endl;
          cout << "===================";
          cout << endl;
          cout << "Total Harga : ";
          cout << finalHarga;
          cout << endl;
          cout << "Masukan Jumlah Uang : ";
          cin >> bayar;
          cout << endl;
          cout << "Kembalian : ";
          cout << transaksiMakanan(finalHarga, bayar);
        } else if (pilih == 2) {
          jenisPembayaran = "E-Wallet";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "     METODE PEMBAYARAN    ";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "          E-Wallet        ";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "pilih E-Wallet : ";
          cout << endl;
          cout << "1. Gopay";
          cout << endl;
          cout << "2. Dana";
          cout << endl;
          cout << "3. OVO";
          cout << endl;
          cout << "4. Flip";
          cout << endl;
          cout << "5. Kembali";
          cout << endl;
          cout << "Pilih [1-5] : ";
          cin >> pilih;
          if (pilih == 1) {
            cout << "==========================";
            cout << endl;
            cout << "          GOPAY          ";
            cout << endl;
            cout << "==========================";
            cout << endl;
            // hitung
            cout << "Total Harga : ";
            cout << finalHarga;
            cout << endl;
            cout << "Masukan Jumlah Uang : ";
            cin >> bayar;
            cout << endl;
            cout << "Kembalian : ";
            cout << transaksiMakanan(finalHarga, bayar);
          } else if (pilih == 2) {
            cout << "==========================";
            cout << endl;
            cout << "           DANA           ";
            cout << endl;
            cout << "==========================";
            cout << endl;
            // hitung
            cout << "Total Harga : ";
            cout << finalHarga;
            cout << endl;
            cout << "Masukan Jumlah Uang : ";
            cin >> bayar;
            cout << endl;
            cout << "Kembalian : ";
            cout << transaksiMakanan(finalHarga, bayar);
          } else if (pilih == 3) {
            cout << "==========================";
            cout << endl;
            cout << "           OVO           ";
            cout << endl;
            cout << "==========================";
            cout << endl;
            // hitung
            cout << "Total Harga : ";
            cout << finalHarga;
            cout << endl;
            cout << "Masukan Jumlah Uang : ";
            cin >> bayar;
            cout << endl;
            cout << "Kembalian : ";
            cout << transaksiMakanan(finalHarga, bayar);
          } else if (pilih == 4) {
            cout << "==========================";
            cout << endl;
            cout << "           FLIP           ";
            cout << endl;
            cout << "==========================";
            cout << endl;
            // hitung
            cout << "Total Harga : ";
            cout << finalHarga;
            cout << endl;
            cout << "Masukan Jumlah Uang : ";
            cin >> bayar;
            cout << endl;
            cout << "Kembalian : ";
            cout << transaksiMakanan(finalHarga, bayar);
          } else if (pilih == 5) {
            cout << "==========================";
            cout << endl;
            cout << "           KEMBALI        ";
            cout << endl;
            cout << "==========================";
            cout << endl;
          }
        } else if (pilih == 3) {
          jenisPembayaran = "DEBIT";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "      METODE PEMBAYARAN   ";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "           DEBIT         ";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "Masukan Kartu Anda Kedalam EDC!";
          cout << endl;
          cout << "Sudah Masukan Kartu [y/n]";
          cin >> jawabanPengguna;
          if (jawabanPengguna == 'Y' || jawabanPengguna == 'y') {
            cout << "Total Harga : ";
            cout << finalHarga;
            cout << endl;
            cout << "Masukan Jumlah Uang : ";
            cin >> bayar;
            cout << endl;
            cout << "Kembalian : ";
            cout << transaksiMakanan(finalHarga, bayar);
          } else if (jawabanPengguna == 'N' || jawabanPengguna == 'n') {
            cout << "GAGAL";
            cout << endl;
            goto pilihmerk;
          }
        }
      }
      cout << endl;
      cout << endl;
      cout << endl;
      cout << "Kembali [y/n]? : ";
      cin >> jawabanPengguna;
      if (jawabanPengguna == 'Y' || jawabanPengguna == 'y') {
        goto pilihmerk;
      } else if (jawabanPengguna == 'N' || jawabanPengguna == 'n') {
        cout << "===================================";
        cout << endl;
        cout << "          PROGRAM SELESAI          ";
        cout << endl;
        cout << "===================================";
        cout << endl;
        cout << "===================================";
        cout << endl;
        cout << "   TERIMAKASIH SUDAH BERKUNJUNG    ";
        cout << endl;
        cout << "===================================";
        cout << endl;
      } else {
        cout << "Jawaban yang kamu masukan tidak valid!";
        cout << endl;
        cout << "===================================";
        cout << endl;
        cout << "          PROGRAM SELESAI          ";
        cout << endl;
        cout << "===================================";
        cout << endl;
        exit(-1);
      }
    } else if (pilih == 2) {
      goto pilihmerk;
    } else if (pilih == 3) {
      int size = sizeof(makananMaxLifeKucing) / sizeof(makananMaxLifeKucing[0]);
      sort(hargamakananMaxLifeKucing, hargamakananMaxLifeKucing + size);
      sort(makananMaxLifeKucing, makananMaxLifeKucing + size);

      cout << "---Sorting Berdasarkan Harga----\n";
      for (int i = 0; i < size; i++) {
        cout << "Rp. " << hargamakananMaxLifeKucing[i] << endl;
      }

      cout << "---Sorting Berdasarkan Nama----\n";
      for (int i = 0; i < size; i++) {
        cout << makananMaxLifeKucing[i] << endl;
      }
      cout << endl;
      cout << "Kembali [y/n] : ";
      cin >> jawabanPengguna;
      if (jawabanPengguna == 'y' || jawabanPengguna == 'Y') {
        cout << clrs;
        goto pilihmerk;
      } else {
        return;
      }
    } else if (pilih == 4) {
      exit(-1);
    }

  } else if (pilih == 3) {
    cout << "===================================";
    cout << endl;
    cout << "          PURINA SUPER CAT         ";
    cout << endl;
    cout << "===================================";
    cout << endl;
    cout << "1. Lihat Varian";
    cout << endl;
    cout << "2. Pilih Merk Lain";
    cout << endl;
    cout << "3. Sorting Harga & Nama";
    cout << endl;
    cout << "4. Exit";
    cout << endl;
    cout << "Pilih [1-4] : ";
    cin >> pilih;
    if (pilih == 1) {
      cout << "===================================";
      cout << endl;
      cout << "       VARIAN PURINA SUPER CAT     ";
      cout << endl;
      cout << "===================================";
      cout << endl;
      int sizeOfMakananPurina =
          sizeof(makananPurinaSuperCat) / sizeof(makananPurinaSuperCat[0]);
      for (int i = 0; i < sizeOfMakananPurina; i++) {
        cout << "Purina Super Cat " << i + 1 << " : "
             << makananPurinaSuperCat[i]
             << "| Harga : " << hargamakananPurinaSuperCat[i];
        cout << endl;
      }
      cout << endl;
      cout << "Masukan Jumlah Barang : ";
      cin >> jumlah;
      for (int i = 0; i < jumlah; i++) {
        cout << "Pilih makanan : ";
        cin >> pilih;
        cout << "Kamu Pilih : " << makananPurinaSuperCat[pilih - 1];
        cout << endl;
        // proses pemindahan array
        savedata[indexing] = makananPurinaSuperCat[pilih - 1];
        saveharga[indexing] = hargamakananPurinaSuperCat[pilih - 1];
        indexing++;
      }
      // nanti ini bakal ke tulis ke txt
      tulisdata.open("./dummy/daftarBelanja.txt", ios::app);
      for (int i = 0; i < indexing; i++) {
        tulisdata << savedata[i] << " | " << saveharga[i];
        tulisdata << endl;
      }
      tulisdata.close();
      /*
      hitung total harga yang ada dalam array
      terus masukin ke dalam variable statis.
      */
      for (int i = 0; i < indexing; i++) {
        finalHarga += saveharga[i];
      }
      cout << "harga total : " << finalHarga;
      cout << endl;
      cout << "Lanjut Ke Pembayaran [y/n] : ";
      cin >> jawabanPengguna;
      if (jawabanPengguna == 'Y' || jawabanPengguna == 'y') {
        cout << clrs;
        cout << endl;
        cout << "pilih Pembayaran : ";
        cout << endl;
        cout << "1. Cash";
        cout << endl;
        cout << "2. E-Wallet";
        cout << endl;
        cout << "3. Debit";
        cout << endl;
        cout << "4. Batal";
        cout << endl;
        cout << "Pilih [1-4] : ";
        cin >> pilih;
        if (pilih == 1) {
          jenisPembayaran = "Cash";
          cout << endl;
          cout << "===================";
          cout << endl;
          cout << "        CASH       ";
          cout << endl;
          cout << "===================";
          cout << endl;
          cout << "Total Harga : ";
          cout << finalHarga;
          cout << endl;
          cout << "Masukan Jumlah Uang : ";
          cin >> bayar;
          cout << endl;
          cout << "Kembalian : ";
          cout << transaksiMakanan(finalHarga, bayar);
        } else if (pilih == 2) {
          jenisPembayaran = "E-Wallet";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "     METODE PEMBAYARAN    ";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "          E-Wallet        ";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "pilih E-Wallet : ";
          cout << endl;
          cout << "1. Gopay";
          cout << endl;
          cout << "2. Dana";
          cout << endl;
          cout << "3. OVO";
          cout << endl;
          cout << "4. Flip";
          cout << endl;
          cout << "5. Kembali";
          cout << endl;
          cout << "Pilih [1-5] : ";
          cin >> pilih;
          if (pilih == 1) {
            cout << "==========================";
            cout << endl;
            cout << "          GOPAY          ";
            cout << endl;
            cout << "==========================";
            cout << endl;
            // hitung
            cout << "Total Harga : ";
            cout << finalHarga;
            cout << endl;
            cout << "Masukan Jumlah Uang : ";
            cin >> bayar;
            cout << endl;
            cout << "Kembalian : ";
            cout << transaksiMakanan(finalHarga, bayar);
          } else if (pilih == 2) {
            cout << "==========================";
            cout << endl;
            cout << "           DANA           ";
            cout << endl;
            cout << "==========================";
            cout << endl;
            // hitung
            cout << "Total Harga : ";
            cout << finalHarga;
            cout << endl;
            cout << "Masukan Jumlah Uang : ";
            cin >> bayar;
            cout << endl;
            cout << "Kembalian : ";
            cout << transaksiMakanan(finalHarga, bayar);
          } else if (pilih == 3) {
            cout << "==========================";
            cout << endl;
            cout << "           OVO           ";
            cout << endl;
            cout << "==========================";
            cout << endl;
            // hitung
            cout << "Total Harga : ";
            cout << finalHarga;
            cout << endl;
            cout << "Masukan Jumlah Uang : ";
            cin >> bayar;
            cout << endl;
            cout << "Kembalian : ";
            cout << transaksiMakanan(finalHarga, bayar);
          } else if (pilih == 4) {
            cout << "==========================";
            cout << endl;
            cout << "           FLIP           ";
            cout << endl;
            cout << "==========================";
            cout << endl;
            // hitung
            cout << "Total Harga : ";
            cout << finalHarga;
            cout << endl;
            cout << "Masukan Jumlah Uang : ";
            cin >> bayar;
            cout << endl;
            cout << "Kembalian : ";
            cout << transaksiMakanan(finalHarga, bayar);
          } else if (pilih == 5) {
            cout << "==========================";
            cout << endl;
            cout << "           KEMBALI        ";
            cout << endl;
            cout << "==========================";
            cout << endl;
          }
        } else if (pilih == 3) {
          jenisPembayaran = "DEBIT";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "      METODE PEMBAYARAN   ";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "           DEBIT         ";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "Masukan Kartu Anda Kedalam EDC!";
          cout << endl;
          cout << "Sudah Masukan Kartu [y/n]";
          cin >> jawabanPengguna;
          if (jawabanPengguna == 'Y' || jawabanPengguna == 'y') {
            cout << "Total Harga : ";
            cout << finalHarga;
            cout << endl;
            cout << "Masukan Jumlah Uang : ";
            cin >> bayar;
            cout << endl;
            cout << "Kembalian : ";
            cout << transaksiMakanan(finalHarga, bayar);
          } else if (jawabanPengguna == 'N' || jawabanPengguna == 'n') {
            cout << "GAGAL";
            cout << endl;
            goto pilihmerk;
          }
        }
      }
      cout << endl;
      cout << endl;
      cout << endl;
      cout << "Kembali [y/n]? : ";
      cin >> jawabanPengguna;
      if (jawabanPengguna == 'Y' || jawabanPengguna == 'y') {
        goto pilihmerk;
      } else if (jawabanPengguna == 'N' || jawabanPengguna == 'n') {
        cout << "===================================";
        cout << endl;
        cout << "          PROGRAM SELESAI          ";
        cout << endl;
        cout << "===================================";
        cout << endl;
        cout << "===================================";
        cout << endl;
        cout << "   TERIMAKASIH SUDAH BERKUNJUNG    ";
        cout << endl;
        cout << "===================================";
        cout << endl;
      } else {
        cout << "Jawaban yang kamu masukan tidak valid!";
        cout << endl;
        cout << "===================================";
        cout << endl;
        cout << "          PROGRAM SELESAI          ";
        cout << endl;
        cout << "===================================";
        cout << endl;
        exit(-1);
      }
    } else if (pilih == 2) {
      goto pilihmerk;
    } else if (pilih == 3) {
      int size =
          sizeof(makananPurinaSuperCat) / sizeof(makananPurinaSuperCat[0]);
      sort(hargamakananPurinaSuperCat, hargamakananPurinaSuperCat + size);
      sort(makananPurinaSuperCat, makananPurinaSuperCat + size);

      cout << "---Sorting Berdasarkan Harga----\n";
      for (int i = 0; i < size; i++) {
        cout << "Rp. " << hargamakananPurinaSuperCat[i] << endl;
      }

      cout << "---Sorting Berdasarkan Nama----\n";
      for (int i = 0; i < size; i++) {
        cout << makananPurinaSuperCat[i] << endl;
      }
      cout << endl;
      cout << "Kembali [y/n] : ";
      cin >> jawabanPengguna;
      if (jawabanPengguna == 'y' || jawabanPengguna == 'Y') {
        cout << clrs;
        goto pilihmerk;
      } else {
        return;
      }
    } else if (pilih == 4) {
      exit(-1);
    }
  }else if (pilih == 4) {
    cout << "===================================";
    cout << endl;
    cout << "              SUPERCAT             ";
    cout << endl;
    cout << "===================================";
    cout << endl;
    cout << "1. Lihat Varian";
    cout << endl;
    cout << "2. Pilih Merk Lain";
    cout << endl;
    cout << "3. Sorting Harga & Nama";
    cout << endl;
    cout << "4. Exit";
    cout << endl;
    cout << "Pilih [1-4] : ";
    cin >> pilih;
    if (pilih == 1) {
      cout << "===================================";
      cout << endl;
      cout << "        VARIAN  SUPER CAT          ";
      cout << endl;
      cout << "===================================";
      cout << endl;
      int sizeOfMakananSuperCat =
          sizeof(makananSuperCat) / sizeof(makananSuperCat[0]);
      for (int i = 0; i < sizeOfMakananSuperCat; i++) {
        cout << "Super Cat " << i + 1 << " : " << makananSuperCat[i]
             << "| Harga : " << hargamakananSuperCat[i];
        cout << endl;
      }
      cout << endl;
      cout << "Masukan Jumlah Barang : ";
      cin >> jumlah;
      for (int i = 0; i < jumlah; i++) {
        cout << "Pilih makanan : ";
        cin >> pilih;
        cout << "Kamu Pilih : " << makananSuperCat[pilih - 1];
        cout << endl;
        // proses pemindahan array
        savedata[indexing] = makananSuperCat[pilih - 1];
        saveharga[indexing] = hargamakananSuperCat[pilih - 1];
        indexing++;
      }
      // nanti ini bakal ke tulis ke txt
      tulisdata.open("./dummy/daftarBelanja.txt", ios::app);
      for (int i = 0; i < indexing; i++) {
        tulisdata << savedata[i] << " | " << saveharga[i];
        tulisdata << endl;
      }
      tulisdata.close();
      /*
      hitung total harga yang ada dalam array
      terus masukin ke dalam variable statis.
      */
      for (int i = 0; i < indexing; i++) {
        finalHarga += saveharga[i];
      }
      cout << "harga total : " << finalHarga;
      cout << endl;
      cout << "Lanjut Ke Pembayaran [y/n] : ";
      cin >> jawabanPengguna;
      if (jawabanPengguna == 'Y' || jawabanPengguna == 'y') {
        cout << clrs;
        cout << endl;
        cout << "pilih Pembayaran : ";
        cout << endl;
        cout << "1. Cash";
        cout << endl;
        cout << "2. E-Wallet";
        cout << endl;
        cout << "3. Debit";
        cout << endl;
        cout << "4. Batal";
        cout << endl;
        cout << "Pilih [1-4] : ";
        cin >> pilih;
        if (pilih == 1) {
          jenisPembayaran = "Cash";
          cout << endl;
          cout << "===================";
          cout << endl;
          cout << "        CASH       ";
          cout << endl;
          cout << "===================";
          cout << endl;
          cout << "Total Harga : ";
          cout << finalHarga;
          cout << endl;
          cout << "Masukan Jumlah Uang : ";
          cin >> bayar;
          cout << endl;
          cout << "Kembalian : ";
          cout << transaksiMakanan(finalHarga, bayar);
        } else if (pilih == 2) {
          jenisPembayaran = "E-Wallet";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "     METODE PEMBAYARAN    ";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "          E-Wallet        ";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "pilih E-Wallet : ";
          cout << endl;
          cout << "1. Gopay";
          cout << endl;
          cout << "2. Dana";
          cout << endl;
          cout << "3. OVO";
          cout << endl;
          cout << "4. Flip";
          cout << endl;
          cout << "5. Kembali";
          cout << endl;
          cout << "Pilih [1-5] : ";
          cin >> pilih;
          if (pilih == 1) {
            cout << "==========================";
            cout << endl;
            cout << "          GOPAY          ";
            cout << endl;
            cout << "==========================";
            cout << endl;
            // hitung
            cout << "Total Harga : ";
            cout << finalHarga;
            cout << endl;
            cout << "Masukan Jumlah Uang : ";
            cin >> bayar;
            cout << endl;
            cout << "Kembalian : ";
            cout << transaksiMakanan(finalHarga, bayar);
          } else if (pilih == 2) {
            cout << "==========================";
            cout << endl;
            cout << "           DANA           ";
            cout << endl;
            cout << "==========================";
            cout << endl;
            // hitung
            cout << "Total Harga : ";
            cout << finalHarga;
            cout << endl;
            cout << "Masukan Jumlah Uang : ";
            cin >> bayar;
            cout << endl;
            cout << "Kembalian : ";
            cout << transaksiMakanan(finalHarga, bayar);
          } else if (pilih == 3) {
            cout << "==========================";
            cout << endl;
            cout << "           OVO           ";
            cout << endl;
            cout << "==========================";
            cout << endl;
            // hitung
            cout << "Total Harga : ";
            cout << finalHarga;
            cout << endl;
            cout << "Masukan Jumlah Uang : ";
            cin >> bayar;
            cout << endl;
            cout << "Kembalian : ";
            cout << transaksiMakanan(finalHarga, bayar);
          } else if (pilih == 4) {
            cout << "==========================";
            cout << endl;
            cout << "           FLIP           ";
            cout << endl;
            cout << "==========================";
            cout << endl;
            // hitung
            cout << "Total Harga : ";
            cout << finalHarga;
            cout << endl;
            cout << "Masukan Jumlah Uang : ";
            cin >> bayar;
            cout << endl;
            cout << "Kembalian : ";
            cout << transaksiMakanan(finalHarga, bayar);
          } else if (pilih == 5) {
            cout << "==========================";
            cout << endl;
            cout << "           KEMBALI        ";
            cout << endl;
            cout << "==========================";
            cout << endl;
          }
        } else if (pilih == 3) {
          jenisPembayaran = "DEBIT";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "      METODE PEMBAYARAN   ";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "           DEBIT         ";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "Masukan Kartu Anda Kedalam EDC!";
          cout << endl;
          cout << "Sudah Masukan Kartu [y/n]";
          cin >> jawabanPengguna;
          if (jawabanPengguna == 'Y' || jawabanPengguna == 'y') {
            cout << "Total Harga : ";
            cout << finalHarga;
            cout << endl;
            cout << "Masukan Jumlah Uang : ";
            cin >> bayar;
            cout << endl;
            cout << "Kembalian : ";
            cout << transaksiMakanan(finalHarga, bayar);
          } else if (jawabanPengguna == 'N' || jawabanPengguna == 'n') {
            cout << "GAGAL";
            cout << endl;
            goto pilihmerk;
          }
        }
      }
      cout << endl;
      cout << endl;
      cout << endl;
      cout << "Kembali [y/n]? : ";
      cin >> jawabanPengguna;
      if (jawabanPengguna == 'Y' || jawabanPengguna == 'y') {
        goto pilihmerk;
      } else if (jawabanPengguna == 'N' || jawabanPengguna == 'n') {
        cout << "===================================";
        cout << endl;
        cout << "          PROGRAM SELESAI          ";
        cout << endl;
        cout << "===================================";
        cout << endl;
        cout << "===================================";
        cout << endl;
        cout << "   TERIMAKASIH SUDAH BERKUNJUNG    ";
        cout << endl;
        cout << "===================================";
        cout << endl;
      } else {
        cout << "Jawaban yang kamu masukan tidak valid!";
        cout << endl;
        cout << "===================================";
        cout << endl;
        cout << "          PROGRAM SELESAI          ";
        cout << endl;
        cout << "===================================";
        cout << endl;
        exit(-1);
      }
    } else if (pilih == 2) {
      goto pilihmerk;
    } else if (pilih == 3) {
      int size = sizeof(makananSuperCat) / sizeof(makananSuperCat[0]);
      sort(hargamakananSuperCat, hargamakananSuperCat + size);
      sort(makananSuperCat, makananSuperCat + size);

      cout << "---Sorting Berdasarkan Harga----\n";
      for (int i = 0; i < size; i++) {
        cout << "Rp. " << hargamakananSuperCat[i] << endl;
      }

      cout << "---Sorting Berdasarkan Nama----\n";
      for (int i = 0; i < size; i++) {
        cout << makananSuperCat[i] << endl;
      }
      cout << endl;
      cout << "Kembali [y/n] : ";
      cin >> jawabanPengguna;
      if (jawabanPengguna == 'y' || jawabanPengguna == 'Y') {
        cout << clrs;
        goto pilihmerk;
      } else {
        return;
      }
    } else if (pilih == 4) {
      exit(-1);
    }
  } else if (pilih == 5) {
    cout << "===================================";
    cout << endl;
    cout << "               KIT CAT             ";
    cout << endl;
    cout << "===================================";
    cout << endl;
    cout << "1. Lihat Varian";
    cout << endl;
    cout << "2. Pilih Merk Lain";
    cout << endl;
    cout << "3. Sorting Harga & Nama";
    cout << endl;
    cout << "4. Exit";
    cout << endl;
    cout << "Pilih [1-4] : ";
    cin >> pilih;
    if (pilih == 1) {
      cout << "===================================";
      cout << endl;
      cout << "          VARIAN KIT CAT           ";
      cout << endl;
      cout << "===================================";
      cout << endl;
      int sizeOfMakananKitCat =
          sizeof(makananKitCat) / sizeof(makananKitCat[0]);
      for (int i = 0; i < sizeOfMakananKitCat; i++) {
        cout << "Kit Cat " << i + 1 << " : " << makananKitCat[i]
             << "| Harga : " << hargamakananKitCat[i];
        cout << endl;
      }
      cout << endl;
      cout << "Masukan Jumlah Barang : ";
      cin >> jumlah;
      for (int i = 0; i < jumlah; i++) {
        cout << "Pilih makanan : ";
        cin >> pilih;
        cout << "Kamu Pilih : " << makananKitCat[pilih - 1];
        cout << endl;
        // proses pemindahan array
        savedata[indexing] = makananKitCat[pilih - 1];
        saveharga[indexing] = hargamakananKitCat[pilih - 1];
        indexing++;
      }
      // nanti ini bakal ke tulis ke txt
      tulisdata.open("./dummy/daftarBelanja.txt", ios::app);
      for (int i = 0; i < indexing; i++) {
        tulisdata << savedata[i] << " | " << saveharga[i];
        tulisdata << endl;
      }
      tulisdata.close();
      /*
      hitung total harga yang ada dalam array
      terus masukin ke dalam variable statis.
      */
      for (int i = 0; i < indexing; i++) {
        finalHarga += saveharga[i];
      }
      cout << "harga total : " << finalHarga;
      cout << endl;
      cout << "Lanjut Ke Pembayaran [y/n] : ";
      cin >> jawabanPengguna;
      if (jawabanPengguna == 'Y' || jawabanPengguna == 'y') {
        cout << clrs;
        cout << endl;
        cout << "pilih Pembayaran : ";
        cout << endl;
        cout << "1. Cash";
        cout << endl;
        cout << "2. E-Wallet";
        cout << endl;
        cout << "3. Debit";
        cout << endl;
        cout << "4. Batal";
        cout << endl;
        cout << "Pilih [1-4] : ";
        cin >> pilih;
        if (pilih == 1) {
          jenisPembayaran = "Cash";
          cout << endl;
          cout << "===================";
          cout << endl;
          cout << "        CASH       ";
          cout << endl;
          cout << "===================";
          cout << endl;
          cout << "Total Harga : ";
          cout << finalHarga;
          cout << endl;
          cout << "Masukan Jumlah Uang : ";
          cin >> bayar;
          cout << endl;
          cout << "Kembalian : ";
          cout << transaksiMakanan(finalHarga, bayar);
        } else if (pilih == 2) {
          jenisPembayaran = "E-Wallet";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "     METODE PEMBAYARAN    ";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "          E-Wallet        ";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "pilih E-Wallet : ";
          cout << endl;
          cout << "1. Gopay";
          cout << endl;
          cout << "2. Dana";
          cout << endl;
          cout << "3. OVO";
          cout << endl;
          cout << "4. Flip";
          cout << endl;
          cout << "5. Kembali";
          cout << endl;
          cout << "Pilih [1-5] : ";
          cin >> pilih;
          if (pilih == 1) {
            cout << "==========================";
            cout << endl;
            cout << "          GOPAY          ";
            cout << endl;
            cout << "==========================";
            cout << endl;
            // hitung
            cout << "Total Harga : ";
            cout << finalHarga;
            cout << endl;
            cout << "Masukan Jumlah Uang : ";
            cin >> bayar;
            cout << endl;
            cout << "Kembalian : ";
            cout << transaksiMakanan(finalHarga, bayar);
          } else if (pilih == 2) {
            cout << "==========================";
            cout << endl;
            cout << "           DANA           ";
            cout << endl;
            cout << "==========================";
            cout << endl;
            // hitung
            cout << "Total Harga : ";
            cout << finalHarga;
            cout << endl;
            cout << "Masukan Jumlah Uang : ";
            cin >> bayar;
            cout << endl;
            cout << "Kembalian : ";
            cout << transaksiMakanan(finalHarga, bayar);
          } else if (pilih == 3) {
            cout << "==========================";
            cout << endl;
            cout << "           OVO           ";
            cout << endl;
            cout << "==========================";
            cout << endl;
            // hitung
            cout << "Total Harga : ";
            cout << finalHarga;
            cout << endl;
            cout << "Masukan Jumlah Uang : ";
            cin >> bayar;
            cout << endl;
            cout << "Kembalian : ";
            cout << transaksiMakanan(finalHarga, bayar);
          } else if (pilih == 4) {
            cout << "==========================";
            cout << endl;
            cout << "           FLIP           ";
            cout << endl;
            cout << "==========================";
            cout << endl;
            // hitung
            cout << "Total Harga : ";
            cout << finalHarga;
            cout << endl;
            cout << "Masukan Jumlah Uang : ";
            cin >> bayar;
            cout << endl;
            cout << "Kembalian : ";
            cout << transaksiMakanan(finalHarga, bayar);
          } else if (pilih == 5) {
            cout << "==========================";
            cout << endl;
            cout << "           KEMBALI        ";
            cout << endl;
            cout << "==========================";
            cout << endl;
          }
        } else if (pilih == 3) {
          jenisPembayaran = "DEBIT";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "      METODE PEMBAYARAN   ";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "           DEBIT         ";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "Masukan Kartu Anda Kedalam EDC!";
          cout << endl;
          cout << "Sudah Masukan Kartu [y/n]";
          cin >> jawabanPengguna;
          if (jawabanPengguna == 'Y' || jawabanPengguna == 'y') {
            cout << "Total Harga : ";
            cout << finalHarga;
            cout << endl;
            cout << "Masukan Jumlah Uang : ";
            cin >> bayar;
            cout << endl;
            cout << "Kembalian : ";
            cout << transaksiMakanan(finalHarga, bayar);
          } else if (jawabanPengguna == 'N' || jawabanPengguna == 'n') {
            cout << "GAGAL";
            cout << endl;
            goto pilihmerk;
          }
        }
      }
      cout << endl;
      cout << endl;
      cout << endl;
      cout << "Kembali [y/n]? : ";
      cin >> jawabanPengguna;
      if (jawabanPengguna == 'Y' || jawabanPengguna == 'y') {
        goto pilihmerk;
      } else if (jawabanPengguna == 'N' || jawabanPengguna == 'n') {
        cout << "===================================";
        cout << endl;
        cout << "          PROGRAM SELESAI          ";
        cout << endl;
        cout << "===================================";
        cout << endl;
        cout << "===================================";
        cout << endl;
        cout << "   TERIMAKASIH SUDAH BERKUNJUNG    ";
        cout << endl;
        cout << "===================================";
        cout << endl;
      } else {
        cout << "Jawaban yang kamu masukan tidak valid!";
        cout << endl;
        cout << "===================================";
        cout << endl;
        cout << "          PROGRAM SELESAI          ";
        cout << endl;
        cout << "===================================";
        cout << endl;
        exit(-1);
      }
    } else if (pilih == 2) {
      goto pilihmerk;
    } else if (pilih == 3) {
      int size = sizeof(makananKitCat) / sizeof(makananKitCat[0]);
      sort(hargamakananKitCat, hargamakananKitCat + size);
      sort(makananKitCat, makananKitCat + size);

      cout << "---Sorting Berdasarkan Harga----\n";
      for (int i = 0; i < size; i++) {
        cout << "Rp. " << hargamakananKitCat[i] << endl;
      }

      cout << "---Sorting Berdasarkan Nama----\n";
      for (int i = 0; i < size; i++) {
        cout << makananKitCat[i] << endl;
      }
      cout << endl;
      cout << "Kembali [y/n] : ";
      cin >> jawabanPengguna;
      if (jawabanPengguna == 'y' || jawabanPengguna == 'Y') {
        cout << clrs;
        goto pilihmerk;
      } else {
        return;
      }

    } else if (pilih == 4) {
      exit(-1);
    }
  } else if (pilih == 6) {
    cout << "===================================";
    cout << endl;
    cout << "            PRO DIET DRY           ";
    cout << endl;
    cout << "===================================";
    cout << endl;
    cout << "1. Lihat Varian";
    cout << endl;
    cout << "2. Pilih Merk Lain";
    cout << endl;
    cout << "3. Sorting Harga & Nama";
    cout << endl;
    cout << "4. Exit";
    cout << endl;
    cout << "Pilih [1-4] : ";
    cin >> pilih;
    if (pilih == 1) {
      cout << "===================================";
      cout << endl;
      cout << "        VARIAN PRO DIET DRY     ";
      cout << endl;
      cout << "===================================";
      cout << endl;
      int sizeOfMakananDietDry =
          sizeof(makananProDietDRY) / sizeof(makananProDietDRY[0]);
      for (int i = 0; i < sizeOfMakananDietDry; i++) {
        cout << "Pro Diet Dry " << i + 1 << " : " << makananProDietDRY[i]
             << "| Harga : " << hargamakananProDietDRY[i];
        cout << endl;
      }
      cout << endl;
      cout << "Masukan Jumlah Barang : ";
      cin >> jumlah;
      for (int i = 0; i < jumlah; i++) {
        cout << "Pilih makanan : ";
        cin >> pilih;
        cout << "Kamu Pilih : " << makananProDietDRY[pilih - 1];
        cout << endl;
        // proses pemindahan array
        savedata[indexing] = makananProDietDRY[pilih - 1];
        saveharga[indexing] = hargamakananProDietDRY[pilih - 1];
        indexing++;
      }
      // nanti ini bakal ke tulis ke txt
      tulisdata.open("./dummy/daftarBelanja.txt", ios::app);
      for (int i = 0; i < indexing; i++) {
        tulisdata << savedata[i] << " | " << saveharga[i];
        tulisdata << endl;
      }
      tulisdata.close();
      /*
      hitung total harga yang ada dalam array
      terus masukin ke dalam variable statis.
      */
      for (int i = 0; i < indexing; i++) {
        finalHarga += saveharga[i];
      }
      cout << "harga total : " << finalHarga;
      cout << endl;
      cout << "Lanjut Ke Pembayaran [y/n] : ";
      cin >> jawabanPengguna;
      if (jawabanPengguna == 'Y' || jawabanPengguna == 'y') {
        cout << clrs;
        cout << endl;
        cout << "pilih Pembayaran : ";
        cout << endl;
        cout << "1. Cash";
        cout << endl;
        cout << "2. E-Wallet";
        cout << endl;
        cout << "3. Debit";
        cout << endl;
        cout << "4. Batal";
        cout << endl;
        cout << "Pilih [1-4] : ";
        cin >> pilih;
        if (pilih == 1) {
          jenisPembayaran = "Cash";
          cout << endl;
          cout << "===================";
          cout << endl;
          cout << "        CASH       ";
          cout << endl;
          cout << "===================";
          cout << endl;
          cout << "Total Harga : ";
          cout << finalHarga;
          cout << endl;
          cout << "Masukan Jumlah Uang : ";
          cin >> bayar;
          cout << endl;
          cout << "Kembalian : ";
          cout << transaksiMakanan(finalHarga, bayar);
        } else if (pilih == 2) {
          jenisPembayaran = "E-Wallet";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "     METODE PEMBAYARAN    ";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "          E-Wallet        ";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "pilih E-Wallet : ";
          cout << endl;
          cout << "1. Gopay";
          cout << endl;
          cout << "2. Dana";
          cout << endl;
          cout << "3. OVO";
          cout << endl;
          cout << "4. Flip";
          cout << endl;
          cout << "5. Kembali";
          cout << endl;
          cout << "Pilih [1-5] : ";
          cin >> pilih;
          if (pilih == 1) {
            cout << "==========================";
            cout << endl;
            cout << "          GOPAY          ";
            cout << endl;
            cout << "==========================";
            cout << endl;
            // hitung
            cout << "Total Harga : ";
            cout << finalHarga;
            cout << endl;
            cout << "Masukan Jumlah Uang : ";
            cin >> bayar;
            cout << endl;
            cout << "Kembalian : ";
            cout << transaksiMakanan(finalHarga, bayar);
          } else if (pilih == 2) {
            cout << "==========================";
            cout << endl;
            cout << "           DANA           ";
            cout << endl;
            cout << "==========================";
            cout << endl;
            // hitung
            cout << "Total Harga : ";
            cout << finalHarga;
            cout << endl;
            cout << "Masukan Jumlah Uang : ";
            cin >> bayar;
            cout << endl;
            cout << "Kembalian : ";
            cout << transaksiMakanan(finalHarga, bayar);
          } else if (pilih == 3) {
            cout << "==========================";
            cout << endl;
            cout << "           OVO           ";
            cout << endl;
            cout << "==========================";
            cout << endl;
            // hitung
            cout << "Total Harga : ";
            cout << finalHarga;
            cout << endl;
            cout << "Masukan Jumlah Uang : ";
            cin >> bayar;
            cout << endl;
            cout << "Kembalian : ";
            cout << transaksiMakanan(finalHarga, bayar);
          } else if (pilih == 4) {
            cout << "==========================";
            cout << endl;
            cout << "           FLIP           ";
            cout << endl;
            cout << "==========================";
            cout << endl;
            // hitung
            cout << "Total Harga : ";
            cout << finalHarga;
            cout << endl;
            cout << "Masukan Jumlah Uang : ";
            cin >> bayar;
            cout << endl;
            cout << "Kembalian : ";
            cout << transaksiMakanan(finalHarga, bayar);
          } else if (pilih == 5) {
            cout << "==========================";
            cout << endl;
            cout << "           KEMBALI        ";
            cout << endl;
            cout << "==========================";
            cout << endl;
          }
        } else if (pilih == 3) {
          jenisPembayaran = "DEBIT";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "      METODE PEMBAYARAN   ";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "           DEBIT         ";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "Masukan Kartu Anda Kedalam EDC!";
          cout << endl;
          cout << "Sudah Masukan Kartu [y/n]";
          cin >> jawabanPengguna;
          if (jawabanPengguna == 'Y' || jawabanPengguna == 'y') {
            cout << "Total Harga : ";
            cout << finalHarga;
            cout << endl;
            cout << "Masukan Jumlah Uang : ";
            cin >> bayar;
            cout << endl;
            cout << "Kembalian : ";
            cout << transaksiMakanan(finalHarga, bayar);
          } else if (jawabanPengguna == 'N' || jawabanPengguna == 'n') {
            cout << "GAGAL";
            cout << endl;
            goto pilihmerk;
          }
        }
      }
      cout << endl;
      cout << endl;
      cout << endl;
      cout << "Kembali [y/n]? : ";
      cin >> jawabanPengguna;
      if (jawabanPengguna == 'Y' || jawabanPengguna == 'y') {
        goto pilihmerk;
      } else if (jawabanPengguna == 'N' || jawabanPengguna == 'n') {
        cout << "===================================";
        cout << endl;
        cout << "          PROGRAM SELESAI          ";
        cout << endl;
        cout << "===================================";
        cout << endl;
        cout << "===================================";
        cout << endl;
        cout << "   TERIMAKASIH SUDAH BERKUNJUNG    ";
        cout << endl;
        cout << "===================================";
        cout << endl;
      } else {
        cout << "Jawaban yang kamu masukan tidak valid!";
        cout << endl;
        cout << "===================================";
        cout << endl;
        cout << "          PROGRAM SELESAI          ";
        cout << endl;
        cout << "===================================";
        cout << endl;
        exit(-1);
      }
    } else if (pilih == 2) {
      goto pilihmerk;
    } else if (pilih == 3) {
      int size = sizeof(makananProDietDRY) / sizeof(makananProDietDRY[0]);
      sort(hargamakananProDietDRY, hargamakananProDietDRY + size);
      sort(makananProDietDRY, makananProDietDRY + size);

      cout << "---Sorting Berdasarkan Harga----\n";
      for (int i = 0; i < size; i++) {
        cout << "Rp. " << hargamakananProDietDRY[i] << endl;
      }

      cout << "---Sorting Berdasarkan Nama----\n";
      for (int i = 0; i < size; i++) {
        cout << makananProDietDRY[i] << endl;
      }
      cout << endl;
      cout << "Kembali [y/n] : ";
      cin >> jawabanPengguna;
      if (jawabanPengguna == 'y' || jawabanPengguna == 'Y') {
        cout << clrs;
        goto pilihmerk;
      } else {
        return;
      }
    } else if (pilih == 4) {
      exit(-1);
    }
  } else if (pilih == 7) {
    cout << "===================================";
    cout << endl;
    cout << "            PRO DIET WET           ";
    cout << endl;
    cout << "===================================";
    cout << endl;
    cout << "1. Lihat Varian";
    cout << endl;
    cout << "2. Pilih Merk Lain";
    cout << endl;
    cout << "3. Sorting Harga & Nama";
    cout << endl;
    cout << "4. Exit";
    cout << endl;
    cout << "Pilih [1-4] : ";
    cin >> pilih;
    if (pilih == 1) {
      cout << "===================================";
      cout << endl;
      cout << "        VARIAN PRO DIET WET     ";
      cout << endl;
      cout << "===================================";
      cout << endl;
      int sizeOfMakananDietWet =
          sizeof(makananProDietWET) / sizeof(makananProDietWET[0]);
      for (int i = 0; i < sizeOfMakananDietWet; i++) {
        cout << "Pro Diet Wet " << i + 1 << " : " << makananProDietWET[i]
             << "| Harga : " << hargamakananProDietWET[i];
        cout << endl;
      }
      cout << endl;
      cout << "Masukan Jumlah Barang : ";
      cin >> jumlah;
      for (int i = 0; i < jumlah; i++) {
        cout << "Pilih makanan : ";
        cin >> pilih;
        cout << "Kamu Pilih : " << makananProDietWET[pilih - 1];
        cout << endl;
        // proses pemindahan array
        savedata[indexing] = makananProDietWET[pilih - 1];
        saveharga[indexing] = hargamakananProDietWET[pilih - 1];
        indexing++;
      }
      // nanti ini bakal ke tulis ke txt
      tulisdata.open("./dummy/daftarBelanja.txt", ios::app);
      for (int i = 0; i < indexing; i++) {
        tulisdata << savedata[i] << " | " << saveharga[i];
        tulisdata << endl;
      }
      tulisdata.close();
      /*
      hitung total harga yang ada dalam array
      terus masukin ke dalam variable statis.
      */
      for (int i = 0; i < indexing; i++) {
        finalHarga += saveharga[i];
      }
      cout << "harga total : " << finalHarga;
      cout << endl;
      cout << "Lanjut Ke Pembayaran [y/n] : ";
      cin >> jawabanPengguna;
      if (jawabanPengguna == 'Y' || jawabanPengguna == 'y') {
        cout << clrs;
        cout << endl;
        cout << "pilih Pembayaran : ";
        cout << endl;
        cout << "1. Cash";
        cout << endl;
        cout << "2. E-Wallet";
        cout << endl;
        cout << "3. Debit";
        cout << endl;
        cout << "4. Batal";
        cout << endl;
        cout << "Pilih [1-4] : ";
        cin >> pilih;
        if (pilih == 1) {
          jenisPembayaran = "Cash";
          cout << endl;
          cout << "===================";
          cout << endl;
          cout << "        CASH       ";
          cout << endl;
          cout << "===================";
          cout << endl;
          cout << "Total Harga : ";
          cout << finalHarga;
          cout << endl;
          cout << "Masukan Jumlah Uang : ";
          cin >> bayar;
          cout << endl;
          cout << "Kembalian : ";
          cout << transaksiMakanan(finalHarga, bayar);
        } else if (pilih == 2) {
          jenisPembayaran = "E-Wallet";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "     METODE PEMBAYARAN    ";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "          E-Wallet        ";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "pilih E-Wallet : ";
          cout << endl;
          cout << "1. Gopay";
          cout << endl;
          cout << "2. Dana";
          cout << endl;
          cout << "3. OVO";
          cout << endl;
          cout << "4. Flip";
          cout << endl;
          cout << "5. Kembali";
          cout << endl;
          cout << "Pilih [1-5] : ";
          cin >> pilih;
          if (pilih == 1) {
            cout << "==========================";
            cout << endl;
            cout << "          GOPAY          ";
            cout << endl;
            cout << "==========================";
            cout << endl;
            // hitung
            cout << "Total Harga : ";
            cout << finalHarga;
            cout << endl;
            cout << "Masukan Jumlah Uang : ";
            cin >> bayar;
            cout << endl;
            cout << "Kembalian : ";
            cout << transaksiMakanan(finalHarga, bayar);
          } else if (pilih == 2) {
            cout << "==========================";
            cout << endl;
            cout << "           DANA           ";
            cout << endl;
            cout << "==========================";
            cout << endl;
            // hitung
            cout << "Total Harga : ";
            cout << finalHarga;
            cout << endl;
            cout << "Masukan Jumlah Uang : ";
            cin >> bayar;
            cout << endl;
            cout << "Kembalian : ";
            cout << transaksiMakanan(finalHarga, bayar);
          } else if (pilih == 3) {
            cout << "==========================";
            cout << endl;
            cout << "           OVO           ";
            cout << endl;
            cout << "==========================";
            cout << endl;
            // hitung
            cout << "Total Harga : ";
            cout << finalHarga;
            cout << endl;
            cout << "Masukan Jumlah Uang : ";
            cin >> bayar;
            cout << endl;
            cout << "Kembalian : ";
            cout << transaksiMakanan(finalHarga, bayar);
          } else if (pilih == 4) {
            cout << "==========================";
            cout << endl;
            cout << "           FLIP           ";
            cout << endl;
            cout << "==========================";
            cout << endl;
            // hitung
            cout << "Total Harga : ";
            cout << finalHarga;
            cout << endl;
            cout << "Masukan Jumlah Uang : ";
            cin >> bayar;
            cout << endl;
            cout << "Kembalian : ";
            cout << transaksiMakanan(finalHarga, bayar);
          } else if (pilih == 5) {
            cout << "==========================";
            cout << endl;
            cout << "           KEMBALI        ";
            cout << endl;
            cout << "==========================";
            cout << endl;
          }
        } else if (pilih == 3) {
          jenisPembayaran = "DEBIT";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "      METODE PEMBAYARAN   ";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "           DEBIT         ";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "Masukan Kartu Anda Kedalam EDC!";
          cout << endl;
          cout << "Sudah Masukan Kartu [y/n]";
          cin >> jawabanPengguna;
          if (jawabanPengguna == 'Y' || jawabanPengguna == 'y') {
            cout << "Total Harga : ";
            cout << finalHarga;
            cout << endl;
            cout << "Masukan Jumlah Uang : ";
            cin >> bayar;
            cout << endl;
            cout << "Kembalian : ";
            cout << transaksiMakanan(finalHarga, bayar);
          } else if (jawabanPengguna == 'N' || jawabanPengguna == 'n') {
            cout << "GAGAL";
            cout << endl;
            goto pilihmerk;
          }
        }
      }
      cout << endl;
      cout << endl;
      cout << endl;
      cout << "Kembali [y]? : ";
      cin >> jawabanPengguna;
      if (jawabanPengguna == 'Y' || jawabanPengguna == 'y') {
        goto pilihmerk;
      } else if (jawabanPengguna == 'N' || jawabanPengguna == 'n') {
        cout << "===================================";
        cout << endl;
        cout << "          PROGRAM SELESAI          ";
        cout << endl;
        cout << "===================================";
        cout << endl;
        cout << "===================================";
        cout << endl;
        cout << "   TERIMAKASIH SUDAH BERKUNJUNG    ";
        cout << endl;
        cout << "===================================";
        cout << endl;
      } else {
        cout << "Jawaban yang kamu masukan tidak valid!";
        cout << endl;
        cout << "===================================";
        cout << endl;
        cout << "          PROGRAM SELESAI          ";
        cout << endl;
        cout << "===================================";
        cout << endl;
        exit(-1);
      }
    } else if (pilih == 2) {
      goto pilihmerk;
    } else if (pilih == 3) {
      int size = sizeof(makananProDietWET) / sizeof(makananProDietWET[0]);
      sort(hargamakananProDietWET, hargamakananProDietWET + size);
      sort(makananProDietWET, makananProDietWET + size);

      cout << "---Sorting Berdasarkan Harga----\n";
      for (int i = 0; i < size; i++) {
        cout << "Rp. " << hargamakananProDietWET[i] << endl;
      }

      cout << "---Sorting Berdasarkan Nama----\n";
      for (int i = 0; i < size; i++) {
        cout << makananProDietWET[i] << endl;
      }
      cout << endl;
      cout << "Kembali [y/n] : ";
      cin >> jawabanPengguna;
      if (jawabanPengguna == 'y' || jawabanPengguna == 'Y') {
        cout << clrs;
        goto pilihmerk;
      } else {
        return;
      }
    } else if (pilih == 4) {
      exit(-1);
    }
  } else if (pilih == 8) {
    cout << "===================================";
    cout << endl;
    cout << "            PRO LIFE CAT           ";
    cout << endl;
    cout << "===================================";
    cout << endl;
    cout << "1. Lihat Varian";
    cout << endl;
    cout << "2. Pilih Merk Lain";
    cout << endl;
    cout << "3. Sorting Harga & Nama";
    cout << endl;
    cout << "4. Exit";
    cout << endl;
    cout << "Pilih [1-4] : ";
    cin >> pilih;
    if (pilih == 1) {
      cout << "===================================";
      cout << endl;
      cout << "        VARIAN PRO LIFE CAT     ";
      cout << endl;
      cout << "===================================";
      cout << endl;
      int sizeOfMakananProLifeCat =
          sizeof(makananLifeCat) / sizeof(makananLifeCat[0]);
      for (int i = 0; i < sizeOfMakananProLifeCat; i++) {
        cout << "Pro Life Cat " << i + 1 << " : " << makananLifeCat[i]
             << "| Harga : " << hargamakananLifeCat[i];
        cout << endl;
      }
      cout << endl;
      cout << "Masukan Jumlah Barang : ";
      cin >> jumlah;
      for (int i = 0; i < jumlah; i++) {
        cout << "Pilih makanan : ";
        cin >> pilih;
        cout << "Kamu Pilih : " << makananLifeCat[pilih - 1];
        cout << endl;
        // proses pemindahan array
        savedata[indexing] = makananLifeCat[pilih - 1];
        saveharga[indexing] = hargamakananLifeCat[pilih - 1];
        indexing++;
      }
      // nanti ini bakal ke tulis ke txt
      tulisdata.open("./dummy/daftarBelanja.txt", ios::app);
      for (int i = 0; i < indexing; i++) {
        tulisdata << savedata[i] << " | " << saveharga[i];
        tulisdata << endl;
      }
      tulisdata.close();
      /*
      hitung total harga yang ada dalam array
      terus masukin ke dalam variable statis.
      */
      for (int i = 0; i < indexing; i++) {
        finalHarga += saveharga[i];
      }
      cout << "harga total : " << finalHarga;
      cout << endl;
      cout << "Lanjut Ke Pembayaran [y/n] : ";
      cin >> jawabanPengguna;
      if (jawabanPengguna == 'Y' || jawabanPengguna == 'y') {
        cout << clrs;
        cout << endl;
        cout << "pilih Pembayaran : ";
        cout << endl;
        cout << "1. Cash";
        cout << endl;
        cout << "2. E-Wallet";
        cout << endl;
        cout << "3. Debit";
        cout << endl;
        cout << "4. Batal";
        cout << endl;
        cout << "Pilih [1-4] : ";
        cin >> pilih;
        if (pilih == 1) {
          jenisPembayaran = "Cash";
          cout << endl;
          cout << "===================";
          cout << endl;
          cout << "        CASH       ";
          cout << endl;
          cout << "===================";
          cout << endl;
          cout << "Total Harga : ";
          cout << finalHarga;
          cout << endl;
          cout << "Masukan Jumlah Uang : ";
          cin >> bayar;
          cout << endl;
          cout << "Kembalian : ";
          cout << transaksiMakanan(finalHarga, bayar);
        } else if (pilih == 2) {
          jenisPembayaran = "E-Wallet";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "     METODE PEMBAYARAN    ";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "          E-Wallet        ";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "pilih E-Wallet : ";
          cout << endl;
          cout << "1. Gopay";
          cout << endl;
          cout << "2. Dana";
          cout << endl;
          cout << "3. OVO";
          cout << endl;
          cout << "4. Flip";
          cout << endl;
          cout << "5. Kembali";
          cout << endl;
          cout << "Pilih [1-5] : ";
          cin >> pilih;
          if (pilih == 1) {
            cout << "==========================";
            cout << endl;
            cout << "          GOPAY          ";
            cout << endl;
            cout << "==========================";
            cout << endl;
            // hitung
            cout << "Total Harga : ";
            cout << finalHarga;
            cout << endl;
            cout << "Masukan Jumlah Uang : ";
            cin >> bayar;
            cout << endl;
            cout << "Kembalian : ";
            cout << transaksiMakanan(finalHarga, bayar);
          } else if (pilih == 2) {
            cout << "==========================";
            cout << endl;
            cout << "           DANA           ";
            cout << endl;
            cout << "==========================";
            cout << endl;
            // hitung
            cout << "Total Harga : ";
            cout << finalHarga;
            cout << endl;
            cout << "Masukan Jumlah Uang : ";
            cin >> bayar;
            cout << endl;
            cout << "Kembalian : ";
            cout << transaksiMakanan(finalHarga, bayar);
          } else if (pilih == 3) {
            cout << "==========================";
            cout << endl;
            cout << "           OVO           ";
            cout << endl;
            cout << "==========================";
            cout << endl;
            // hitung
            cout << "Total Harga : ";
            cout << finalHarga;
            cout << endl;
            cout << "Masukan Jumlah Uang : ";
            cin >> bayar;
            cout << endl;
            cout << "Kembalian : ";
            cout << transaksiMakanan(finalHarga, bayar);
          } else if (pilih == 4) {
            cout << "==========================";
            cout << endl;
            cout << "           FLIP           ";
            cout << endl;
            cout << "==========================";
            cout << endl;
            // hitung
            cout << "Total Harga : ";
            cout << finalHarga;
            cout << endl;
            cout << "Masukan Jumlah Uang : ";
            cin >> bayar;
            cout << endl;
            cout << "Kembalian : ";
            cout << transaksiMakanan(finalHarga, bayar);
          } else if (pilih == 5) {
            cout << "==========================";
            cout << endl;
            cout << "           KEMBALI        ";
            cout << endl;
            cout << "==========================";
            cout << endl;
          }
        } else if (pilih == 3) {
          jenisPembayaran = "DEBIT";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "      METODE PEMBAYARAN   ";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "           DEBIT         ";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "Masukan Kartu Anda Kedalam EDC!";
          cout << endl;
          cout << "Sudah Masukan Kartu [y/n]";
          cin >> jawabanPengguna;
          if (jawabanPengguna == 'Y' || jawabanPengguna == 'y') {
            cout << "Total Harga : ";
            cout << finalHarga;
            cout << endl;
            cout << "Masukan Jumlah Uang : ";
            cin >> bayar;
            cout << endl;
            cout << "Kembalian : ";
            cout << transaksiMakanan(finalHarga, bayar);
          } else if (jawabanPengguna == 'N' || jawabanPengguna == 'n') {
            cout << "GAGAL";
            cout << endl;
            goto pilihmerk;
          }
        }
      }
      cout << endl;
      cout << endl;
      cout << endl;
      cout << "Kembali [y/n]? : ";
      cin >> jawabanPengguna;
      if (jawabanPengguna == 'Y' || jawabanPengguna == 'y') {
        goto pilihmerk;
      } else if (jawabanPengguna == 'N' || jawabanPengguna == 'n') {
        cout << "===================================";
        cout << endl;
        cout << "          PROGRAM SELESAI          ";
        cout << endl;
        cout << "===================================";
        cout << endl;
        cout << "===================================";
        cout << endl;
        cout << "   TERIMAKASIH SUDAH BERKUNJUNG    ";
        cout << endl;
        cout << "===================================";
        cout << endl;
      } else {
        cout << "Jawaban yang kamu masukan tidak valid!";
        cout << endl;
        cout << "===================================";
        cout << endl;
        cout << "          PROGRAM SELESAI          ";
        cout << endl;
        cout << "===================================";
        cout << endl;
        exit(-1);
      }
    } else if (pilih == 2) {
      goto pilihmerk;
    } else if (pilih == 3) {
      int size = sizeof(makananLifeCat) / sizeof(makananLifeCat[0]);
      sort(hargamakananLifeCat, hargamakananLifeCat + size);
      sort(makananLifeCat, makananLifeCat + size);

      cout << "---Sorting Berdasarkan Harga----\n";
      for (int i = 0; i < size; i++) {
        cout << "Rp. " << hargamakananLifeCat[i] << endl;
      }

      cout << "---Sorting Berdasarkan Nama----\n";
      for (int i = 0; i < size; i++) {
        cout << makananLifeCat[i] << endl;
      }
      cout << endl;
      cout << "Kembali [y/n] : ";
      cin >> jawabanPengguna;
      if (jawabanPengguna == 'y' || jawabanPengguna == 'Y') {
        cout << clrs;
        goto pilihmerk;
      } else {
        return;
      }
    }
  } else if (pilih == 9) {
    cout << "===================================";
    cout << endl;
    cout << "                 IAMS              ";
    cout << endl;
    cout << "===================================";
    cout << endl;
    cout << "1. Lihat Varian";
    cout << endl;
    cout << "2. Pilih Merk Lain";
    cout << endl;
    cout << "3. Sorting Harga & Makanan";
    cout << endl;
    cout << "4. Exit";
    cout << endl;
    cout << "Pilih [1-4] : ";
    cin >> pilih;
    if (pilih == 1) {
      cout << "===================================";
      cout << endl;
      cout << "           VARIAN IAMS             ";
      cout << endl;
      cout << "===================================";
      cout << endl;
      int sizeOfMakananIams =
          sizeof(makananIamsKucing) / sizeof(makananIamsKucing[0]);
      for (int i = 0; i < sizeOfMakananIams; i++) {
        cout << "IAMS " << i + 1 << " : " << makananIamsKucing[i]
             << "| Harga : " << hargamakananIamsKucing[i];
        cout << endl;
      }
      cout << endl;
      cout << "Masukan Jumlah Barang : ";
      cin >> jumlah;
      for (int i = 0; i < jumlah; i++) {
        cout << "Pilih makanan : ";
        cin >> pilih;
        cout << "Kamu Pilih : " << makananIamsKucing[pilih - 1];
        cout << endl;
        // proses pemindahan array
        savedata[indexing] = makananIamsKucing[pilih - 1];
        saveharga[indexing] = hargamakananIamsKucing[pilih - 1];
        indexing++;
      }
      // nanti ini bakal ke tulis ke txt
      tulisdata.open("./dummy/daftarBelanja.txt", ios::app);
      for (int i = 0; i < indexing; i++) {
        tulisdata << savedata[i] << " | " << saveharga[i];
        tulisdata << endl;
      }
      tulisdata.close();
      /*
      hitung total harga yang ada dalam array
      terus masukin ke dalam variable statis.
      */
      for (int i = 0; i < indexing; i++) {
        finalHarga += saveharga[i];
      }
      cout << "harga total : " << finalHarga;
      cout << endl;
      cout << "Lanjut Ke Pembayaran [y/n] : ";
      cin >> jawabanPengguna;
      if (jawabanPengguna == 'Y' || jawabanPengguna == 'y') {
        cout << clrs;
        cout << endl;
        cout << "pilih Pembayaran : ";
        cout << endl;
        cout << "1. Cash";
        cout << endl;
        cout << "2. E-Wallet";
        cout << endl;
        cout << "3. Debit";
        cout << endl;
        cout << "4. Batal";
        cout << endl;
        cout << "Pilih [1-4] : ";
        cin >> pilih;
        if (pilih == 1) {
          jenisPembayaran = "Cash";
          cout << endl;
          cout << "===================";
          cout << endl;
          cout << "        CASH       ";
          cout << endl;
          cout << "===================";
          cout << endl;
          cout << "Total Harga : ";
          cout << finalHarga;
          cout << endl;
          cout << "Masukan Jumlah Uang : ";
          cin >> bayar;
          cout << endl;
          cout << "Kembalian : ";
          cout << transaksiMakanan(finalHarga, bayar);
        } else if (pilih == 2) {
          jenisPembayaran = "E-Wallet";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "     METODE PEMBAYARAN    ";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "          E-Wallet        ";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "pilih E-Wallet : ";
          cout << endl;
          cout << "1. Gopay";
          cout << endl;
          cout << "2. Dana";
          cout << endl;
          cout << "3. OVO";
          cout << endl;
          cout << "4. Flip";
          cout << endl;
          cout << "5. Kembali";
          cout << endl;
          cout << "Pilih [1-5] : ";
          cin >> pilih;
          if (pilih == 1) {
            cout << "==========================";
            cout << endl;
            cout << "          GOPAY          ";
            cout << endl;
            cout << "==========================";
            cout << endl;
            // hitung
            cout << "Total Harga : ";
            cout << finalHarga;
            cout << endl;
            cout << "Masukan Jumlah Uang : ";
            cin >> bayar;
            cout << endl;
            cout << "Kembalian : ";
            cout << transaksiMakanan(finalHarga, bayar);
          } else if (pilih == 2) {
            cout << "==========================";
            cout << endl;
            cout << "           DANA           ";
            cout << endl;
            cout << "==========================";
            cout << endl;
            // hitung
            cout << "Total Harga : ";
            cout << finalHarga;
            cout << endl;
            cout << "Masukan Jumlah Uang : ";
            cin >> bayar;
            cout << endl;
            cout << "Kembalian : ";
            cout << transaksiMakanan(finalHarga, bayar);
          } else if (pilih == 3) {
            cout << "==========================";
            cout << endl;
            cout << "           OVO           ";
            cout << endl;
            cout << "==========================";
            cout << endl;
            // hitung
            cout << "Total Harga : ";
            cout << finalHarga;
            cout << endl;
            cout << "Masukan Jumlah Uang : ";
            cin >> bayar;
            cout << endl;
            cout << "Kembalian : ";
            cout << transaksiMakanan(finalHarga, bayar);
          } else if (pilih == 4) {
            cout << "==========================";
            cout << endl;
            cout << "           FLIP           ";
            cout << endl;
            cout << "==========================";
            cout << endl;
            // hitung
            cout << "Total Harga : ";
            cout << finalHarga;
            cout << endl;
            cout << "Masukan Jumlah Uang : ";
            cin >> bayar;
            cout << endl;
            cout << "Kembalian : ";
            cout << transaksiMakanan(finalHarga, bayar);
          } else if (pilih == 5) {
            cout << "==========================";
            cout << endl;
            cout << "           KEMBALI        ";
            cout << endl;
            cout << "==========================";
            cout << endl;
          }
        } else if (pilih == 3) {
          jenisPembayaran = "DEBIT";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "      METODE PEMBAYARAN   ";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "           DEBIT         ";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "Masukan Kartu Anda Kedalam EDC!";
          cout << endl;
          cout << "Sudah Masukan Kartu [y/n]";
          cin >> jawabanPengguna;
          if (jawabanPengguna == 'Y' || jawabanPengguna == 'y') {
            cout << "Total Harga : ";
            cout << finalHarga;
            cout << endl;
            cout << "Masukan Jumlah Uang : ";
            cin >> bayar;
            cout << endl;
            cout << "Kembalian : ";
            cout << transaksiMakanan(finalHarga, bayar);
          } else if (jawabanPengguna == 'N' || jawabanPengguna == 'n') {
            cout << "GAGAL";
            cout << endl;
            goto pilihmerk;
          }
        }
      }
      cout << endl;
      cout << endl;
      cout << endl;
      cout << "Kembali [y/n]? : ";
      cin >> jawabanPengguna;
      if (jawabanPengguna == 'Y' || jawabanPengguna == 'y') {
        goto pilihmerk;
      } else if (jawabanPengguna == 'N' || jawabanPengguna == 'n') {
        cout << "===================================";
        cout << endl;
        cout << "          PROGRAM SELESAI          ";
        cout << endl;
        cout << "===================================";
        cout << endl;
        cout << "===================================";
        cout << endl;
        cout << "   TERIMAKASIH SUDAH BERKUNJUNG    ";
        cout << endl;
        cout << "===================================";
        cout << endl;
      } else {
        cout << "Jawaban yang kamu masukan tidak valid!";
        cout << endl;
        cout << "===================================";
        cout << endl;
        cout << "          PROGRAM SELESAI          ";
        cout << endl;
        cout << "===================================";
        cout << endl;
        exit(-1);
      }
    } else if (pilih == 2) {
      goto pilihmerk;
    } else if (pilih == 3) {
      int size = sizeof(makananIamsKucing) / sizeof(makananIamsKucing[0]);
      sort(hargamakananIamsKucing, hargamakananIamsKucing + size);
      sort(makananIamsKucing, makananIamsKucing + size);

      cout << "---Sorting Berdasarkan Harga----\n";
      for (int i = 0; i < size; i++) {
        cout << "Rp. " << hargamakananIamsKucing[i] << endl;
      }

      cout << "---Sorting Berdasarkan Nama----\n";
      for (int i = 0; i < size; i++) {
        cout << makananIamsKucing[i] << endl;
      }
      cout << endl;
      cout << "Kembali [y/n] : ";
      cin >> jawabanPengguna;
      if (jawabanPengguna == 'y' || jawabanPengguna == 'Y') {
        cout << clrs;
        goto pilihmerk;
      } else {
        return;
      }
    } else if (pilih == 4) {
      exit(-1);
    }
}else if(pilih == 10) {
cout << "===================================";
    cout << endl;
    cout << "          PROGRAM SELESAI          ";
    cout << endl;
    cout << "===================================";
    cout << endl;
    cout << "===================================";
    cout << endl;
    cout << "   TERIMAKASIH SUDAH BERKUNJUNG    ";
    cout << endl;
    cout << "===================================";
    cout << endl;
  } else {
    cout << "Inputan Salah, Kembali ke Opsi!";
    goto pilihmerk;
  }
  // tulisdata
  tulisdata.open("./dummy/strukmakanan.txt");
  tulisdata << "==================================";
  tulisdata << endl;
  tulisdata << setw(18) << "  HALLO  " << name << "!    ";
  tulisdata << endl;
  tulisdata << "==================================";
  tulisdata << endl;
  tulisdata << "       ========STRUK========";
  tulisdata << endl;
  tulisdata << "Makanan         : ";
  tulisdata << endl;
  for (int i = 0; i < indexing; i++) {
    tulisdata <<"                "<< savedata[i] << " ";
    tulisdata << endl;
  }
  tulisdata << "Uang Yang Dibayarkan  :" << bayar;
  tulisdata << endl;
  tulisdata << "Harga                 : " << finalHarga;
  tulisdata << endl;
  tulisdata << "Kembalian             : " << transaksiMakanan(finalHarga, bayar);
  tulisdata << endl;
  tulisdata << " ==========TERIMA KASIH========== ";
  tulisdata << endl;
  tulisdata << "==================================";
  tulisdata << endl;
  tulisdata << endl;
  tulisdata.close();
}
#endif