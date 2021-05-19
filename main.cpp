/*
* Proyecto Escuela 
* Jordana Betancourt Menchaca
* A01707434
* 18/05/2021
* Main que sirve como menú (todavía no está implementado)
*/
#include "Persona.h"
// #include "Estudiante.h"
// #include "Maestro.h"
// #include "Directivo.h"
#include <iostream>
#include <string>

using namespace std;

int main(){

    //Creo objeto estudiante con constructor vacío
    Estudiante MiPersona;
    //Creo objeto estudiante con contructor normal
    Estudiante Persona2("Alicia","Villanueva","Leal",23,"Femenino",1.65,01234,3,97);

    //Creo objeto maestro con constructor vacío
    Maestro MiMaestro;
    //Creo objeto directivo con contructor vacío
    Directivo MiDirectivo;

    //Obtengo datos de los objetos a partir de getters
    cout<< MiPersona.get_nombre()<<endl;
    cout<< Persona2.get_nombre()<<endl;
    cout<< MiMaestro.get_areaClases()<<endl;
    cout<< MiDirectivo.get_pagoHora()<<endl;

    //Pruebo funciones
    Persona2.imprimirDatos();
    MiMaestro.agregaCalificacion(&Persona2,98.2); //Agrega una materia y recalcula el promedio
    Persona2.imprimirDatos();

    // cout<<MiMaestro.get_alumnos()<<endl;
    // Persona2.calificaMaestro(&MiMaestro,98.2);
     MiMaestro.imprimirDatos();



    return 0;
}