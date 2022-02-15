#include <stdio.h>
void lpp();//luas persegi panjang
void kpp();//keliling pemuda pancasila
void ll();
void kl();
void lp();
void kp();
void pilihan();

void main(){
  char p='y';
  while(p=='y'){
    pilihan();
    printf("ulangi?(y/n)");
    scanf("%s", &p);
  }
}

void pilihan(){
  int p1, p2;
  system("cls");
  printf("Bangun Datar\n");
  printf("1. Luas\n2. Keliling\n");
  printf("pilih: ");
  scanf("%i",&p1);
  system("cls");
  printf("Bangun Datar\n");
  printf("1. Persegi Panjang\n2. Lingkaran\n3. Persegi\npilih: ");
  scanf("%i", &p2);
  system("cls");
  printf("Bangun Datar\n");
  switch(p1){
    case 1:
      switch(p2){
        case 1:
          lpp();
          break;
        case 2:
          ll();
          break;
        case 3:
          lp();
          break;
      }
      break;
    case 2:
      switch(p2){
        case 1:
          kpp();
          break;
        case 2:
          kl();
          break;
        case 3:
          kp();
          break;
      }
      break;
  }
}

void lpp(){
  int p, l;
  printf("Masukan Panjang: ");
  scanf("%i", &p);
  printf("Masukan Lebar: ");
  scanf("%i", &l);
  printf("Luas PP ini adalah %i\n", p*l);
}
void kpp(){
  int p, l;
  printf("Masukan Panjang: ");
  scanf("%i", &p);
  printf("Masukan Lebar: ");
  scanf("%i", &l);
  printf("Keliling PP ini adalah %i\n", 2*(p+l));
}
void ll(){
  float r;
  float phi=3.14;
  printf("Masukan Jari - Jari: ");
  scanf("%f", &r);
  printf("Luas Lingkaran ini adalah %2f\n",(r*r*phi));
}
void kl(){
  float r;
  float phi=3.14;
  printf("Masukan Jari - Jari: ");
  scanf("%f", &r);
  printf("Keliling Lingkaran ini adalah %2f\n",(2*r*phi));
}
void lp(){
  int s;
  printf("Masukan Sisi: ");
  scanf("%i", &s);
  printf("Luas Persegi ini adalah %i\n", s*s);
}
void kp(){
  int s;
  printf("Masukan Sisi: ");
  scanf("%i", &s);
  printf("Keliling Persegi ini adalah %i\n", 4*s);
}
