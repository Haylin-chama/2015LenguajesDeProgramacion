#include <iostream>
#include "Polinomio2.h"


using namespace std;

typedef float POLINOMIO2[10][10];


void menu()
{

}

int CrearPolinomio()
{
    if (g>0)
    {
        cin>>c;
        cin>>m;
        cin>>n;
        //Y se guarda la wea de C en la posición (m,n)
        // :(
        //Me siento confundida

    }
    else
    {

    }


}

/* CrearPolinomio
nombreFuncion()
{
    cout << "Ingresar polinomio";
    c*x^m*y^n
    m : filas
    n : columnas
    c : coeficiente por situar en (m,n)
    9*x^5*y^5 +
}*/

int main()
{
    int g;
    cout << "Hello world!" << endl;
    CrearPolinomio();
}
#include <iostream>
#include "Polinomio2.h"

using namespace std;

typedef float POLINOMIO2[10][10];



/*MultiplicarPolinomios(poli, nomio)
{
    Se rellana nomio;
    Lo mismo que suma pero se multiplica :|
}

*/

/*SumarPolinomios
nombreFuncion(poli, nomio)
{
    Primero rellenamos POLINOMIO2 nomio.
    Luego sumamos donde no encontremos '\0'
    if (i!='\0') --> se suma
    else --> se pasa a la siguiente posicion
    Igual pajita. Es una matriz.
    Nos demoraremos g^2 veces
    ...debe poder achicarse
}
*/

/* CrearPolinomio
nombreFuncion()
{
    cout << "Ingresar polinomio";
    c*x^m*y^n
    m : filas
    n : columnas
    c : coeficiente por situar en (m,n)
    9*x^5*y^5 + ...
}*/
int DefinirVariablesImportantes()
{
    cout << "Potencia máxima en x: "; cin>>int m;
    cout << "Potencia máxima en y: "; cin>>int n;
    int g=m+n;
}
//Esto pasado a clase?
Polinomio2::Polinomio2()
{
    cout << "Potencia máxima en x: "; cin>>int m;
    cout << "Potencia máxima en y: "; cin>>int n;
    int g=m+n;
    //Y de aquí llenamos por posicion en un for
    cout << "Ingrese el coeficiente de "
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout <<"x^"<<i<<"*y^"<<j; cin>>c;
            //Y c lo posicionamos en (i,j)
            poli[i][j]=c;
        }
    }
/*Y esto también podría ser recursivo,
pero con otra función externa
y no sé si eso se pueda en esta situación */
}

/*Pero la matriz ya esta llenado de '\0',
para que llenarlo de 0s? :/*/

void menu()
{
    cout << "1. Crear Polinomio";
}

int main()
{
    menu();
}
