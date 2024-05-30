#include <iostream>
#include <string>

class laras {
    public:
    int panjang_laras;
    
    
    laras(int panjang_laras){
        this -> panjang_laras = panjang_laras;
    }
    
    
    void pasang_laras(){
        std::cout << "panjang laras yang terpasang" << this->panjang_laras << std::endl;
    }
};


class peluru {
    public:
    int jumlah_peluru;
    
    peluru(int jumlah_peluru){
        this -> jumlah_peluru = jumlah_peluru;
    }

    void loadBullet(){
        std::cout << "peluru yang tersedia" << this -> jumlah_peluru << std::endl;
    }

    void reLoadBullet(int bullet){
        jumlah_peluru += bullet;
    }
};


class gun : public laras, public peluru {
    public:
    gun(int panjang_laras,int jumlah_peluru): peluru(jumlah_peluru), laras(panjang_laras) {
        
        
        
    }
    
    void dor() {
        jumlah_peluru -= 1;
        std::cout << "menembak target sejauh << panjang_laras * 100 >>" << std::endl;
        std::cout << "peluru yang tersisa adalah : <<jumlah_peluru>>" << std::endl;
    }
    
    
};

int main(){
    gun ak47 (100, 5);
    
    ak47.pasang_laras();
    ak47.loadBullet();
    
    for (int i=0; i< 5;i++) {
        ak47.dor();
    }
    
ak47.reLoadBullet(10);

for (int i=0;i=10;i++){
    ak47.dor();
    }
}