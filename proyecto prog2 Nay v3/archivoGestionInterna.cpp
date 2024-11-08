#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cstdio>
#include <ctime>

using namespace std;

#include "archivoGestionInterna.h"
#include "gestioninterna.h"
#include "vendedor.h"

    ///GRABAR REGISTROS///
  bool ArchivoGestionInterna::grabarRegistros(float b){
    FILE *aGestion;

   aGestion=fopen("gestioninterna.dat", "ab");
    if(aGestion==NULL)return false;
    int escribir=fwrite(&b,sizeof(GestionInterna),1,aGestion);
    fclose(aGestion);
    return escribir;
    }
    /// //// /// /// /// ////

    /// LEER REGISTROS ///
    bool ArchivoGestionInterna::leerRegistros(GestionInterna &b){
    FILE *aGestion;
    aGestion=fopen("gestioninterna.dat","rb");
    if (aGestion==NULL){
         cout<< ""<<endl;
    return false;

    }
    int leer=fread(&b,sizeof(GestionInterna),1,aGestion);
    fclose(aGestion);
    return leer;
    }
    /// /// /// /// /// ///

    /// LISTAR ///
    bool ArchivoGestionInterna::listarRegistros(){
    GestionInterna reg;
    FILE *aGestion;
    aGestion=fopen("gestioninterna.dat","rb");
    if (aGestion==NULL)return false;
    while(fread(&reg,sizeof(GestionInterna),1,aGestion)==1){
        //reg.mostrarDatos();
    }
    system("pause");
    fclose(aGestion);
    return true;

    }
        /// ACTUALIZAR///
    bool ArchivoGestionInterna::actualizarRegistro(float n, float &b) {
    FILE *aGestion=fopen("gestioninterna.dat", "rb+");
    if (aGestion==NULL) return false;

    fseek(aGestion,n*sizeof(GestionInterna),SEEK_SET);
    int escribir=fwrite(&b,sizeof(GestionInterna),1,aGestion);
    fclose(aGestion);

    return escribir==1;
}
/// EJEMPLO: BUSCAR LEGAJO -> EN ESTE CASO SERÍA EL ID ///
    bool ArchivoGestionInterna::buscarLuz(float luz){
    GestionInterna b;
     FILE *aGestion;
    int pos=0;
    aGestion=fopen("gestioninterna.dat","rb");
    if (aGestion==NULL)return -2;
     while(fread(&b,sizeof(GestionInterna),1,aGestion)==1){
        if (b.getCostoLuz()==luz){
            fclose(aGestion);

            return pos;
    }
    pos++;
     }

    fclose(aGestion);
    return -1;
    }

    /// EJEMPLO: BUSCAR REGISTRO EN ESA POSICION DONDE SE ENCONTRÓ EL LEGAJO, EN ESTE CASO ID ///
    GestionInterna ArchivoGestionInterna::buscarRegistroLuz(float n){
    GestionInterna reg;
    reg.setCostoLuz(-14);
     FILE *aGestion;
    int pos=0;
    aGestion=fopen("gestioninterna.dat","rb");
    if (aGestion==NULL)return reg;
     fseek(aGestion,n*sizeof(GestionInterna),0);
    fread(&reg,sizeof(GestionInterna),1,aGestion);
    fclose(aGestion);
    return reg;
    }
