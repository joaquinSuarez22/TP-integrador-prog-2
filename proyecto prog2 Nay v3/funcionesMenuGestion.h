/*#ifndef funcionesMenuGestion_H

#define funcionesMenuGestion_H


# include <iostream>
# include <cstdlib>
# include <string>
# include <cstring>  // Necesario para strcpy

#include "vendedor.h"
#include "personas.h"
#include "gestioninterna.h"
#include "producto.h"
#include "archivo.h"



class Gestion
{

public:
    void mvendedores();
    void mcostos();
    void mprecios();
    void mproductos();

};
/// AGREGAR NUEVOS PRODUCTOS ///

void Gestion::mproductos()
{



}
/// /// /// /// /// /// ///

///FUNCION MODIFICAR PRECIOS///
void Gestion::mprecios(){
    int id, precio;
    Producto d;
    cout<< "Ingrese ID de producto"<<endl;
    cin>>id;
    d.setID(id);
    cout<< "Modifique valor"<<endl;
    cin>>precio;
    d.setPrecio(precio);
}

/// /// /// /// /// /// ///

///FUNCION MODIFICAR VALOR DE COSTOS///
void Gestion::mcostos()
{
    int opc=0, luz=0, agua, mantenimiento;
    GestionInterna c;

    do
    {
        cin>>opc;

        switch(opc)
        {
        case 1:
            cout<< "Ingrese nuevo valor del costo LUZ"<<endl;
            cin>>luz;
            c.setCostoLuz(luz);
            break;
        case 2:
            cout<< "Ingrese nuevo valor del costo AGUA"<<endl;
            cin>>agua;
            c.setCostoAgua(agua);
            break;
        case 3:
            cout<< "Ingrese nuevo valor del costo MANTENIMIENTO"<<endl;
            cin>>mantenimiento;
            c.setCostoMantenimiento(mantenimiento);
            break;
        }

    }
    while(opc!=0);
}
/// /// /// /// /// ///
///FUNCION AGREGAR/ELIMINAR VENDEDORES///
void Gestion::mvendedores()
{

    int opc=0, id=0, n=0;
    Vendedor b;
    Archivo f;
    do
    {
        //int opc=0, id=0;
        cin>>opc;

        switch(opc)
        {
        case 1:
            system("cls");
            cout<< "Ingrese nuevo id de vendedor"<<endl;
            cin>>id;
            // b.setVendedor(id);
            n=f.buscarID(id);
            if(n>-1)
            {
                cout<< "EL ID DEL VENDEDOR YA EXISTE"<<endl;
            }
            else
            {
                b.setVendedor(id);
                n=f.grabarRegistros(b);
                cout<<id;
                cout<<endl;
                cout<<"EL NUEVO VENDEDOR SE HA AGREGADO CORRECTAMENTE"<<endl;
                system("pause");

            }
            break;
        case 2:
            cout<< "ingrese el id de vendedor que desea eliminar"<<endl;
            cin>>id;
            n=f.buscarID(id);
            if(n>-1)
            {
             int idvendedor=b.getVendedor();
            }
            if (b.getEstado()==true)
            {
                b.setEstado(false);
                bool exito=f.grabarRegistros(b);
            }

            break;


}

}
while(opc!=0);
}
/// /// /// /// /// /// /// ///



#endif*/
