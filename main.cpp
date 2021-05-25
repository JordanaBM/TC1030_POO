/*
* Proyecto Escuela 
* Jordana Betancourt Menchaca
* A01707434
* 18/05/2021
* Main que sirve como menú, permite ver todos los datos del personal escolar
*/


#include "Persona.h"
#include "Escuela.h"
#include <iostream>
#include <string>

using namespace std;

int main(){

    // int opcion,opcion2,edadC,matriculaC,cantidadMateriasC,nominaC,horasAsignadasC,alumnosC;
    // string nombreC,apellidoPaternoC,apellidoMaternoC,generoC,tipoC,areaClasesC;
    // float alturaC,promedioC,pagoHoraC,calfMaestroC;


     //Creo objeto escuela
     Escuela MiEscuela;
     //Creo ejemplos de clase persona
     MiEscuela.creaEjemplos();
     MiEscuela.muestraPersonal(); //Polimorfismo
     MiEscuela.agregaEstudiante("Jordana","Betancourt","Menchaca",19,"Femenino",1.60,"Estudiante",17074,8,98);
     MiEscuela.muestraPersonal("Estudiante");

	
          
    return 0;
}
