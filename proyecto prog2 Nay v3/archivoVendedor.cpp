#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cstdio>
#include <ctime>
#include "archivoVendedor.h"
#include "vendedor.h"
#include "gestioninterna.h"
using namespace std;

///PARA VENDEDORES///

///GRABAR REGISTROS///
  bool ArchivoVendedor::grabarRegistros(Vendedor b){
    FILE *aVendedor;
    //Vendedor reg;
   aVendedor=fopen("vendedores.dat", "ab");
    if(aVendedor==NULL)return false;
    int escribir=fwrite(&b,sizeof(Vendedor),1,aVendedor);
    fclose(aVendedor);
    return escribir;
    }
    /// //// /// /// /// ////

    /// LEER REGISTROS ///
    bool ArchivoVendedor::leerRegistros(Vendedor &b){
    FILE *aVendedor;
    aVendedor=fopen("vendedores.dat","rb");
    if (aVendedor==NULL){
         cout<< ""<<endl;
    return false;

    }
    int leer=fread(&b,sizeof(Vendedor),1,aVendedor);
    fclose(aVendedor);
    return leer;
    }
    /// /// /// /// /// ///
    bool ArchivoVendedor::listarRegistros(int id){
    Vendedor reg;
    FILE *aVendedor;
    aVendedor=fopen("vendedores.dat","rb");
    if (aVendedor==NULL)return false;
    while(fread(&reg,sizeof(Vendedor),1,aVendedor)==1){
        //reg.mostrarDatos();
    }
    system("pause");
    fclose(aVendedor);
    return true;

    }
    /// EJEMPLO: BUSCAR LEGAJO -> EN ESTE CASO SERÍA EL ID ///
    int ArchivoVendedor::buscarID(int idV){
    Vendedor b;
     FILE *aVendedor;
    int pos=0;
    aVendedor=fopen("vendedores.dat","rb");
    if (aVendedor==NULL)return -2;
     while(fread(&b,sizeof(Vendedor),1,aVendedor)==1){
        if (b.getVendedor()==idV){
            fclose(aVendedor);

            return pos;
    }
    pos++;
     }
   // pos++;

    fclose(aVendedor);
    return -1;
    }

    /// EJEMPLO: BUSCAR REGISTRO EN ESA POSICION DONDE SE ENCONTRÓ EL LEGAJO, EN ESTE CASO ID ///
    Vendedor ArchivoVendedor::buscarRegistro(int n){
    Vendedor reg;
    reg.setVendedor(-14);
     FILE *aVendedor;
    int pos=0;
    aVendedor=fopen("vendedores.dat","rb");
    if (aVendedor==NULL)return reg;
     fseek(aVendedor,n*sizeof(Vendedor),0);
    fread(&reg,sizeof(Vendedor),1,aVendedor);
    fclose(aVendedor);
    return reg;
    }

     bool ArchivoVendedor::leerID(Vendedor &b){
    FILE *aVendedor;
    aVendedor=fopen("vendedores.dat","rb");
    if (aVendedor==NULL){
         cout<< ""<<endl;
    return false;

    }
    int leer=fread(&b,sizeof(Vendedor),1,aVendedor);
    fclose(aVendedor);
    return leer;
    }

    bool ArchivoVendedor::actualizarRegistro(int n, Vendedor &b) {
    FILE *aVendedor=fopen("vendedores.dat", "rb+");
    if (aVendedor==NULL) return false;

    fseek(aVendedor,n*sizeof(Vendedor),SEEK_SET);
    int escribir=fwrite(&b,sizeof(Vendedor),1,aVendedor);
    fclose(aVendedor);

    return escribir==1;
}
