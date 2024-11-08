#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cstdio>
#include <ctime>

#include "vendedor.h"
#include "personas.h"
#include "gestioninterna.h"
#include "producto.h"
#include "archivoVendedor.h"
#include "archivoGestionInterna.h"
#include "gestioninterna.h"

using namespace std;
/// AGREGAR NUEVOS PRODUCTOS ///

void Gestion::mproductos()
{



}
/// /// /// /// /// /// ///

///FUNCION MODIFICAR PRECIOS///
void Gestion::mprecios()
{
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
    int opc=0;
    float luz=0, agua=0, mantenimiento=0;
    GestionInterna c;
    //GestionInterna o;
    ArchivoGestionInterna f;

    do
    {   cout<< "ELIGA QUE VALOR DESEA MODIFICAR"<<endl;
        cout<< "1) LUZ"<<endl;
        cout<< "2) AGUA"<<endl;
        cout<< "3) MANTENIMIENTO DEL LOCAL"<<endl;
        cin>>opc;

        switch(opc)
        {
        case 1:
            system("cls");
            cout<< "Ingrese nuevo valor del costo LUZ"<<endl;
            cout<< "VALOR DE LUZ ACTUAL ES DE: $"<<c.getCostoLuz()<<endl;
            cin>>luz;
            int n=f.buscarLuz(luz);
             if(n==-1)
            {
               GestionInterna  o= f.buscarRegistroLuz(n);
                c.setCostoLuz(luz);
                f.actualizarRegistro(n,luz);
            }
            if (c.getCostoLuz()!=luz){
                cout<< "CAMBIOS GUARDADOS CORRECTAMENTE"<<endl;
                cout<< "EL VALOR DE LSO COSTOS DE LUZ AHORA ES DE: $"<<c.getCostoLuz()<<endl;
            }
            break;
        /*case 2:
            cout<< "Ingrese nuevo valor del costo AGUA"<<endl;
            cin>>agua;
            c.setCostoAgua(agua);
            break;
        case 3:
            cout<< "Ingrese nuevo valor del costo MANTENIMIENTO"<<endl;
            cin>>mantenimiento;
            c.setCostoMantenimiento(mantenimiento);
            break;*/
        }

    }while(opc!=0);

}
/// /// /// /// /// ///
///FUNCION AGREGAR/ELIMINAR VENDEDORES///
void Gestion::mvendedores()
{

    int opc=0, id=0, n=0;
    Vendedor b;
    ArchivoVendedor f;
    do
    {
        cin>>opc;

        switch(opc)
        {
        case 1:
            system("cls");
            cout<< "Ingrese nuevo id de vendedor"<<endl;
            cin>>id;
            n=f.buscarID(id);
            if(n>-1)
            {
                Vendedor o= f.buscarRegistro(n);
                if(b.getEstado()==true)
                {
                    cout<< "EL ID DEL VENDEDOR YA EXISTE"<<endl;
                }
            }
            else
            {
                b.setVendedor(id);
                b.setEstado(true);
                n=f.grabarRegistros(b);
                cout<<id;
                cout<<endl;
                cout<<"EL NUEVO VENDEDOR SE HA AGREGADO CORRECTAMENTE"<<endl;
                system("pause");

            }
            break;
        case 2:
            system("cls");
            cout<< "ingrese el id de vendedor que desea eliminar"<<endl;
            cin>>id;
            n=f.buscarID(id);
            if(n==-1)
            {
                cout<< "EL ID DEL VENDEDOR NO EXISTE"<<endl;
            }
            else
            {
                Vendedor o=f.buscarRegistro(n);
                if (b.getEstado()==true)
                {
                    b.setEstado(false);
                    bool exito=f.actualizarRegistro(n,b);
                    cout<< "EL VENDEDOR SE A ELIMINADO"<<endl;
                }

            }


            break;


        }

    }
    while(opc!=0);
}
