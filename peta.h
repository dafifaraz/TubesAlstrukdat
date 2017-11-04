/* ********** Definisi Tipe PETA ********** */
// Merupakan modifikasi dari ADT MATRIKS


#ifndef PETA_H
#define PETA_H

#include "boolean.h"
#include "point.h"

/* Ukuran minimum dan maksimum baris dan kolom */
#define BrsMax 100
#define KolMax 100

typedef struct {
  char jenis; //Normal, Castle, atau Village.
  int milik; //bernilai (0, 1, atau 2). Jika bernilai 0 maka petak tidak memiliki kepemilikan. Jika bernilai 1 maka ia milik pemain 1, dst.
  char unit; //unit yang menempati petak tersebut
} PETAK;
typedef struct { 
	PETAK P[BrsMax+1][KolMax+1];
 	int NBrsEff; /* banyaknya/ukuran baris yg terdefinisi */
	int NKolEff; /* banyaknya/ukuran kolom yg terdefinisi */
} PETA;

/* ********** DEFINISI PROTOTIPE PRIMITIF ********** */              
/* *** Selektor Peta *** */
#define NBrsEff(M) (M).NBrsEff
#define NKolEff(M) (M).NKolEff
#define Jenis(M,i,j) (M).P[(i)][(j)].jenis
#define Milik(M,i,j) (M).P[(i)][(j)].milik
#define Unit(M,i,j) (M).P[(i)][(j)].unit

POINT pojokBawah(PETA M);
/* M */

POINT pojokAtas(PETA M);
/* M */

void MAP(PETA M);
/* ETA */

#endif