/*
* Proyecto Escuela 
* Jordana Betancourt Menchaca
* A01707434
* 01/06/2021

* Main que sirve como menú, permite ver todos los datos del personal escolar, 
*ingresar nuevos datos, buscar datos, darle recompensa al personal o calificarlo
*/


#include "Persona.h"
#include "Escuela.h"
#include <iostream>
#include <string>

using namespace std;

int main(){

	//Declaro variables para ingresar datos
    int opcion,opcion2,edadC,matriculaC,cantidadMateriasC,nominaC,
	horasAsignadasC,alumnosC;
    string nombreC,apellidoPaternoC,apellidoMaternoC,generoC,tipoC,areaClasesC;
    float alturaC,promedioC,pagoHoraC,calfMaestroC;


     //Creo objeto escuela
     Escuela MiEscuela;
     //Creo ejemplos de Maestros y Estudiantes
     MiEscuela.creaEjemplos();
     do //Menú de opciones
	{
		cout<<"1. Ingresar nuevos datos\n";
		cout<<"2. Ver datos\n";
		cout<<"3. Encuentra personas\n";
		cout<<"4. Recompensas a los integrantes de la institución \n";
        	cout<<"5. Agrega calificaciones \n";
		cout<<"6. Salir\n";
		cout<<"\n Digite la opcion que desee: ";
		//Leer indice que selecciona la opción del menú
		cin>>opcion;

        //Switch donde dependiendo la elección efectua un diferente procedimiento
		switch (opcion)
		{
			//Caso 1: Para el registro de nuevos datos
			case 1: 
			cout<<"\nINGRESAR NUEVOS DATOS \n\n";
			cout<<"1. Nuevo registro de alumno\n";
			cout<<"2. Nuevo registro de profesor\n";
			cout<<"3. Salir al menu principal\n";
			cout<<"\n Digite la opcion que desee: ";
			cin>>opcion2;
            switch (opcion2)
			{
				//Caso 1.1 Permite el registro de un nuevo alumno
				case 1:
				cout<<"Nuevo registro de estudiante\n\n";
				cout<<"Escriba el nombre del alumno: ";
				cin>>nombreC;
				cout<<"Escriba el Apellido Paterno: ";
				cin>>apellidoPaternoC;
				cout<<"Escriba el apellido Materno: ";
				cin>>apellidoMaternoC;
				cout<<"Escriba la edad: ";
				cin>>edadC;
				cout<<"Escriba el género (Masculino/Femenino) ";
				cin>>generoC;
                cout<<"Escriba su altura (En metros) ";
				cin>>alturaC;
				tipoC = "Estudiante";
				cout<<"Escriba su matrícula (5 enteros): ";
				cin>>matriculaC;
				cout<<"Escriba la cantidad de materias que cursa: ";
				cin>>cantidadMateriasC;
				cout<<"Escriba su promedio (sobre 100): ";
				cin>>promedioC;
				MiEscuela.agregaEstudiante(nombreC,apellidoPaternoC,
				apellidoMaternoC, edadC, generoC,alturaC,tipoC,matriculaC,
				cantidadMateriasC,promedioC);
				break;

                //Caso 1.2 Permite el registro de un nuevo maestro
                case 2: 
                cout<<"Nuevo registro de maestro\n\n";
				cout<<"Escriba el nombre del maestro: ";
				cin>>nombreC;
				cout<<"Escriba el Apellido Paterno: ";
				cin>>apellidoPaternoC;
				cout<<"Escriba el apellido Materno: ";
				cin>>apellidoMaternoC;
				cout<<"Escriba la edad: ";
				cin>>edadC;
				cout<<"Escriba el género (Masculino/Femenino) ";
				cin>>generoC;
                cout<<"Escriba su altura (En metros) ";
				cin>>alturaC;
				tipoC = "Maestro";
				cout<<"Escriba su nómina (5 enteros): ";
				cin>>nominaC;
				cout<<"Escriba la principal área de clases que imparte"<<
				" (ej: Matemáticas,Español): ";
				cin>>areaClasesC;
				cout<<"Escriba las horas clase asignadas: ";
				cin>>horasAsignadasC;
                cout<<"Escriba su pago por hora (MX): ";
				cin>>pagoHoraC;
                cout<<"Escriba el número de alumnos que lo han calificado: ";
				cin>>alumnosC;
                cout<<"Escriba el promedio que tiene (sobre 100): ";
				cin>>calfMaestroC;

				MiEscuela.agregaMaestro(nombreC,apellidoPaternoC,apellidoMaternoC, 
				edadC, generoC,alturaC,tipoC,nominaC,areaClasesC,horasAsignadasC,
				pagoHoraC,alumnosC,calfMaestroC);

                //Caso 1.3 Vuelve al menú principal
                case 3:
				cout<<"Volviendo al menu principal\n";
				break;
            }
         
		break;
        //Caso 2: Para visualizar los datos	
			case 2: 
			cout<<"\nDATOS\n\n";
			cout<<"1. Ver todos los datos\n";
			cout<<"2. Ver los datos de todos los estudiantes\n";
            cout<<"3. Ver los datos de todos los maestros\n";
			cout<<"4. Salir al menu principal\n";
			cout<<"\n Digite la opcion que desee: ";
			cin>>opcion2;

            switch (opcion2)
			{
				//Caso 2.1 Permite ver el registro de todas las personas de la 
				//escuela
				case 1:
				cout<<"Personas registradas en la instutución\n"<<endl;
				MiEscuela.muestraPersonal();
				cout<<endl;
				break;
				
				//Caso 2.2 Permite ver el registro de personas tipo Estudiante
				// en la escuela
				case 2: 
                cout<<"Mostrando todos los estudiantes "<<endl;
				MiEscuela.muestraPersonal("Estudiante");
				cout<<endl;
				break;

                //Caso 2.3 Permite ver el registro de personas tipo Maestro en 
				//la escuela
				case 3: 
                cout<<"Mostrando todos los maestros"<<endl;
				MiEscuela.muestraPersonal("Maestro");
				cout<<endl;
				break;
				
				//Caso 2.4 Vuelve al menú principal
				case 4:
				cout<<"Volviendo al menu principal\n";
				break;
			}
			break;

        //Caso 3: Para realizar búsquedas con características particulares en
		// las personas de la escuela
			case 3: 
			cout<<"\nDATOS\n\n";
			cout<<"1. Buscar por nombre\n";
			cout<<"2. Buscar por género masculino \n";
            cout<<"3. Buscar por género masculino \n";
           	cout<<"4. Salir al menu principal\n";
			cout<<"\n Digite la opcion que desee: ";
			cin>>opcion2;
            switch (opcion2)
			{
				//Caso 3.1 Permite buscar por nombre
				case 1:
				cout<<"Digite el nombre que desea buscar\n"<<endl;
                cin>>nombreC;
				MiEscuela.buscaPorNombre(nombreC);
				cout<<endl;
				break;
				
				//Caso 3.2 Permite buscar por género masculino
				case 2: 
                cout<<"Mostrando personas con género masculino "<<endl;
             	MiEscuela.buscaPorGenero("Masculino");
				cout<<endl;
				break;

				//Caso 3.3 Permite buscar por género femenino
                case 3: 
                cout<<"Mostrando personas con género femenino "<<endl;
               	MiEscuela.buscaPorGenero("Femenino");
				cout<<endl;
				break;
		
				//Caso 3.4 Vuelve al menú principal
				case 4:
				cout<<"Volviendo al menu principal\n";
				break;
			}
			break;
            

        //Caso 4: Para recompensar a las personas
			case 4: 
			cout<<"\nRecompensas\n\n";
			cout<<"1. Muestra recompensas\n";
			cout<<"2. Agrega recompensas \n";
            cout<<"3. Salir al menú principal \n";
			cout<<"\n Digite la opcion que desee: ";
			cin>>opcion2;
            switch (opcion2)
			{
				//Caso 4.1 Permite ver las recompensas de las personas
				case 1:
				cout<<"Mostrando recompensas\n"<<endl;
				MiEscuela.muestraRecompensas();
				cout<<endl;
				break;
				
				//Caso 4.2 Permite agregar recompensas (en caso de ser válidas)
				case 2: 
                cout<<"Digite el nombre al que desea agregar una recompensa: "
				<<endl;
                cin>>nombreC;
				MiEscuela.recompensaPersonas(nombreC);
				cout<<endl;
				break;
		
				//Caso 4.3 Vuelve al menú principal
				case 3:
				cout<<"Volviendo al menu principal\n";
				break;
			}
			break;

            //Caso 5: Para agregar calificaciones a maestros o alumnos
			case 5: 
			cout<<"\nAgrega calificación\n\n";
			cout<<"1. Califica alumno\n";
			cout<<"2. Califica maestro \n";
            cout<<"3. Salir al menú principal \n";
			cout<<"\n Digite la opcion que desee: ";
			cin>>opcion2;
            switch (opcion2)
            {
                //Caso 5.1 Permite calificar a un alumno, agregando una materia más
				case 1:
				cout<<"Digite el nombre del alumno que desea calificar: "<<endl;
                cin>>nombreC;
				MiEscuela.calificaPersonas(nombreC,"Estudiante");
				cout<<endl;
				break;
				
				//Caso 5.2 Permite calificar a un maestro, agregando un alumno
				// que tuvo clases con ese maestro
				case 2: 
                cout<<"Digite el nombre del maestro que desea calificar: "<<endl;
                cin>>nombreC;
				MiEscuela.calificaPersonas(nombreC,"Maestro");
				cout<<endl;
				break;
		
				//Caso 5.3 Vuelve al menú principal
				case 3:
				cout<<"Volviendo al menu principal\n";
				break;
            }
            break;
        }


    }while (opcion != 6); //Se sigue repitiendo el menú hasta que la opción sea 
						 //6 (para salir del menú)

	
          
    return 0;
}
