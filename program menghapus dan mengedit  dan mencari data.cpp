#include <iostream>
using namespace std;

int main() {
	
  int B[10],jumlah,ganti,hapus,cari,ketemu=0;
  
  std::cout << "Masukkan jumlah data :" << '\n';
  std::cin >> jumlah;

  
  if (jumlah > 9)
  {
    
    std::cout << "\nMaaf maximal data adalah 10\n" << '\n';
    
  }
else
{

  for (int i = 0; i < jumlah; i++) {
    
    std::cout << "masukan data ke-"<<i+1 << ":";
    std::cin >> B[i];
  }
  
  std::cout << "data yang telah dimasukan :" << '\n';
  for (int j = 0; j < jumlah; j++) {
    
    std::cout << "B["<<j<<"]="<<B[j] << '\n';
  }
}

std::cout << "\n\n Masukan nilai data yang akan di ubah :" << 'n';
std::cin >> ganti;

for (int g = 0; g < jumlah; g++){
	
	if (B[g]==ganti){
		
		std::cout << "masukan nilai baru :" <<'\n';
		std::cin >> B[g];
	}
}

std::cout << "\n\nData setelah diubah" << '\n';
for (int h = 0; h < jumlah; h++){
	std::cout << "\nB["<<h<<"]="<<B[h] << '\n';
} 

std::cout << "\n\nMasukan  data yang akan di hapus :" << '\n';
std::cin >> hapus;


for (int j = 0; j < jumlah; j++){
if (hapus==B[j]){
	
	for (int k = j ; k < jumlah; k++){
		
		B[k]=B[k+1];
	}
	
	jumlah -=1;
	break;
	}
}

std::cout << "\n\nData baru :" << '\n';
for (int p = 0; p < jumlah; p++){
std::cout << "\nB["<<p<<"]="<<B[p] << '\n';	
}

std::cout << "\n\nMasukan nilai data yang akan di caei :" <<'\n';
std::cin >> cari;


for (int n = 0; n < jumlah; n++){
if (cari==B[n]){
	
	std::cout << "\nNilai "<<cari<<"di temukan pada indeks :"<<n << '\n';
	ketemu=1;
	break;
	}	
}

if (ketemu==0)
std::cout << "maaf data yang anda cari tidak di temukan" << '\n';
	return 0;
} 
