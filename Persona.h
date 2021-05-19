/*
* Proyecto Escuela clase Persona
* Jordana Betancourt Menchaca
* A01707434
* 18/05/2021
* Esta clase define objetos de tipo Persona y es abstracta (ya que no se crean directamente)
*/

#ifndef PERSONA_H_INCLUDED
#define PERSONA_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;

//Declaracion de clase Persona que es abstracta
class Persona{ 

  protected: // Los atributos de la clase padre deben ser protected para poder ser heradados

    // Atributos (abstracción)
    string nombre;
    string apellidoPaterno;
    string apellidoMaterno;
    int edad;
    string genero; // Masculino || Femenino
    float altura; // En metros
    string recompensa;
    

  public: // Modificardores de acceso "público"

  // Método (función) constructor
		Persona(); //constructor por Defualt
    Persona(string nombreC, string apellidoPaternoC,string apellidoMaternoC, int edadC, string generoC, 
    float alturaC); //constructor Normal (sobrecarga)
    
    //Setters (Modificación/asignación de atributos)
        void set_nombre(string);
        void set_apellidoPaterno(string);
        void set_apellidoMaterno(string);
        void set_edad(int);
        void set_genero(string);
        void set_altura(float);
        
    // Getters (Obtención/retorno de atributos)
        string get_nombre();
        string get_apellidoPaterno();
        string get_apellidoMaterno();
        int get_edad();
        string get_genero();
        float get_altura();
        string get_recompensa();	

    //Funciones
      virtual void imprimirDatos() = 0; //Método abstracto que será sobreescrito
      // virtual void agregarRecompensa() = 0;
    
};

/*
		* Constructor por default
		*
		* @param
		* return Objeto Persona
*/
Persona:: Persona() { //Constructor Vacío (Default)
      nombre = "N/A";
      apellidoMaterno = "N/A";
      apellidoPaterno = "N/A";
      edad = 0;
      genero = 'X';
      altura = 1.60;
      recompensa = "Ninguna";
      
    }
/*
		* Constructor 
		*
		* @param string nombreC: nombre, string apellidoPaternoC: apellidoPaterno, 
        * string apellidoMaternoC: apellidoMaterno, ind edadC : edad, string
        * generoC : genero (femenino/masculino), float alturaC : altura (en metros)
		*
		* @return Objeto Persona
		*/
Persona:: Persona(string nombreC, string apellidoPaternoC,string apellidoMaternoC, int edadC, string generoC, float alturaC) { //Constructor Normal
      nombre = nombreC;
      apellidoPaterno = apellidoPaternoC;
      apellidoMaterno = apellidoMaternoC;
      edad = edadC;
      genero = generoC;
      altura = alturaC;
      recompensa = "Ninguna"; //Todos inician sin recompensa
    }

//Setters

/*
 * setter nombre
 *
 * @param string: nombre
 * @return 
*/
void Persona::set_nombre(string nombreC){
	nombre = nombreC;
}

/*
 * setter apellidoPaterno
 *
 * @param string: apellidoPaterno
 * @return 
*/
void Persona::set_apellidoPaterno(string apellidoPaternoC){
	apellidoPaterno = apellidoPaternoC;
}


/*
 * setter apellidoMaterno
 *
 * @param string: apellidoMaterno
 * @return 
*/
void Persona::set_apellidoMaterno(string apellidoMaternoC){
	apellidoMaterno = apellidoMaternoC;
}

/*
 * setter edad
 *
 * @param int: edad
 * @return 
*/
void Persona::set_edad(int edadC){
	edad = edadC;
}


/*
 * setter genero
 *
 * @param string: genero
 * @return 
*/
void Persona::set_genero(string generoC){
	genero = generoC;
}

/*
 * setter altura
 *
 * @param float: altura
 * @return 
*/
void Persona::set_altura(float alturaC){
	altura = alturaC;
}



// Getters

/*
 * getter nombre
 *
 * @param
 * @return string: nombre
*/
string Persona::get_nombre(){
	return nombre;
}


/*
 * getter apellidoPaterno
 *
 * @param
 * @return string: apellidoPaterno
*/
string Persona::get_apellidoPaterno(){
	return apellidoPaterno;
}


/*
 * getter apellidoMaterno
 *
 * @param
 * @return string: apellidoMaterno
*/
string Persona::get_apellidoMaterno(){
	return apellidoMaterno;
}


/*
 * getter edad
 *
 * @param
 * @return int: edad
*/
int Persona::get_edad(){
	return edad;
}


/*
 * getter genero
 *
 * @param
 * @return string: genero
*/
string Persona::get_genero(){
	return genero;
}


/*
 * getter altura
 *
 * @param
 * @return float: altura
*/
float Persona::get_altura(){
	return altura;
}

/*
 * getter recompensa
 *
 * @param
 * @return string: recompensa
*/
string Persona::get_recompensa(){
	return recompensa;
}

/*
 * imprimirDatos
 *
 * @param 
 * @return 
*/
void Persona:: imprimirDatos(){
  cout<<"\nNombre Completo: "<<get_nombre()<<" "<<get_apellidoPaterno()<<" "<<get_apellidoMaterno()<<endl;
	cout<<"Edad: "<<get_edad()<<" años"<<endl;
  cout<<"Genero: "<<get_genero()<<endl;
}

/*
* Proyecto Escuela clase Estudiante
* Jordana Betancourt Menchaca
* A01707434
* 18/05/2021
* Esta clase define objetos de tipo Estudiante que hereda de la clase Persona
*/
class Estudiante: public Persona{ // Clase Estudiante que hereda de Persona
    private: //Atributos
        int matricula;
        int cantidadMaterias;
        float promedio;

    public: //Métodos
        Estudiante(); //constructor por Defualt
        Estudiante(string nombreC, string apellidoPaternoC,string apellidoMaternoC, int edadC, string generoC, 
        float alturaC,int matriculaC,int cantidadMateriasC, float promedioC); //constructor Normal (sobrecarga)

//Setters (Modificación/asignación de atributos)
        void set_promedio(float);
    //No es necesario modificar la matrícula

// Getters (Obtención/retorno de atributos)
        int get_matricula();
        int get_cantidadMaterias();
        float get_promedio();
// Funciones 
    void nuevaMateria(); // Es como setter de cantidadMaterias
    void imprimirDatos(); //Sobreescrita para Estudiante
    // void calificaMaestro(Maestro *m, float calificacion);
    

};

/*
	* Constructor por default
	*
	* @param
	* return Objeto Estudiante
    * Llama al constructor vacío de la clase padre (Persona)
*/
Estudiante::Estudiante() { 
    matricula = 0;
    cantidadMaterias = 0;
    promedio = 0;
}

/*
	* Constructor 
	*
    * De contructor Persona
	* @param string nombreC: nombre, string apellidoPaternoC: apellidoPaterno, 
    * string apellidoMaternoC: apellidoMaterno, ind edadC : edad, string
    * generoC : genero (femenino/masculino), float alturaC : altura (en metros)
    * 
    * De constructor Estudiante
	* @param int matriculaC: matricula, int cantidadMateriasC: cantidadMaterias, 
    * float promedioC: promedio
    *
	* @return Objeto Estudiante
*/
Estudiante::Estudiante (string nombreC, string apellidoPaternoC,string apellidoMaternoC, int edadC, string 
generoC, float alturaC,int matriculaC, int cantidadMateriasC, float promedioC) : Persona(nombreC,
 apellidoPaternoC,apellidoMaternoC, edadC, generoC, alturaC){
    matricula = matriculaC;
    cantidadMaterias = cantidadMateriasC;
    promedio = promedioC;
}

//Setters 

/*
 * setter promedio
 *
 * @param float: promedio
 * @return 
*/
void Estudiante::set_promedio(float promedioC){
	promedio = promedioC;
}

// Getters

/*
 * getter metricula
 *
 * @param
 * @return int: matricula
*/
int Estudiante::get_matricula(){
	return matricula;
}

/*
 * getter cantidadMaterias
 *
 * @param
 * @return int: cantidadMaterias
*/
int Estudiante::get_cantidadMaterias(){
	return cantidadMaterias;
}

/*
 * getter promedio
 *
 * @param
 * @return float: promedio
*/
float Estudiante::get_promedio(){
	return promedio;
}

// Funciones

/*
 * nuevaMateria
 *
 * @param 
 * @return 
 * 
 * Es empleada en la clase Maestro para aumentar las materias cursadas
*/
void Estudiante:: nuevaMateria(){
    cantidadMaterias++;
}

/*
 * calificaMaestrp
 *
 * @param Maestro *m, float calificación
 * @return 
 * 
 * Permite al alumno calificar a un maestro
*/
// void Estudiante:: calificaMaestro(Maestro *m,float calificacion){
//     float prom;
//     prom = m->get_calfMaestro();
//     if (prom == 0){
//         m->set_calfMaestro(calificacion);
//         cout <<"A " <<m->get_nombre() << " se le agregó una nueva calificación." << endl;
//         m->agregaAlumno();
//     }
//     else{
//         prom = ((prom * m->get_alumnos()) + calificacion) / (m->get_alumnos() + 1);
//         m->set_calfMaestro(prom);
//         cout <<"A " <<m->get_nombre() << " se le agregó una nueva calificación." << endl;
//         m->agregaAlumno();
//     }
// }

/*
 * imprimirDatos
 *
 * @param 
 * @return 
*/
void Estudiante :: imprimirDatos(){
	Persona :: imprimirDatos();
    cout<<"Matrícula: "<<get_matricula()<<endl;
    cout<<"Promedio: "<<get_promedio()<<endl;
    cout<<"Cantidad de Materias: "<<get_cantidadMaterias()<<endl;
}

/*
* Proyecto Escuela clase Maestro
* Jordana Betancourt Menchaca
* A01707434
* 18/05/2021
* Esta clase define objetos de tipo Maestro que hereda de la clase Persona
*/
class Maestro: public Persona{
    private: 
        int nomina;
        string areaClases;
        int horasAsignadas;
        float pagoHora;
        int alumnos;
        float calfMaestro; 

public:
Maestro();
Maestro(string nombreC, string apellidoPaternoC,string apellidoMaternoC, int edadC, string generoC, //constructor por Defualt
 float alturaC,int nominaC, string areaClasesC, int horasAsignadasC,float pagoHoraC,int alumnosC,float calfMaestroC);//constructor Normal (sobrecarga)

//Setters (Modificación/asignación de atributos)
        void set_areaClases(string);
        void set_pagoHora(float);
        void set_calfMaestro(float);

// Getters (Obtención/retorno de atributos)
        int get_nomina();
        string get_areaClases();
        int get_horasAsignadas();
        float get_pagoHora();
        int get_alumnos();
        float get_calfMaestro();
// Funciones 
        void agregaCalificacion(Estudiante *, float);
        void imprimirDatos(); 
        void agregaAlumno();
    

};

/*
	* Constructor por default
	*
	* @param
	* return Objeto Maestro
    * Llama al constructor vacío de la clase padre (Persona)
*/
Maestro:: Maestro() { 
    nomina = 0;
    areaClases = "No se ha impartido ninguna clase";
    horasAsignadas = 0;
    pagoHora  = 0;
    alumnos = 0;
    calfMaestro = 0;
}

/*
	* Constructor 
	*
    * De contructor Persona
	* @param string nombreC: nombre, string apellidoPaternoC: apellidoPaterno, 
    * string apellidoMaternoC: apellidoMaterno, ind edadC : edad, string
    * generoC : genero (femenino/masculino), float alturaC : altura (en metros)
    * 
    * De constructor Maestro
	* @param int nominaC: nomina, int areaClasesC: areaClases, 
    * float horasAsignadasC: horasAsigandas, float pagoHoraC: pagoHora
    *
	* @return Objeto Maestro
*/
Maestro::Maestro(string nombreC, string apellidoPaternoC,string apellidoMaternoC, int edadC, string 
generoC, float alturaC,int nominaC, string areaClasesC, int horasAsignadasC,float pagoHoraC,int alumnosC, float calfMaestroC) 
: Persona(nombreC, apellidoPaternoC,apellidoMaternoC, edadC, generoC, alturaC){
    nomina = nominaC;
    areaClases =  areaClasesC;
    horasAsignadas = horasAsignadasC;
    pagoHora = pagoHoraC;
    alumnos = alumnosC;
    calfMaestro = calfMaestroC;
}
//Setters

/*
 * setter areaClases
 *
 * @param string: areaClases
 * @return 
*/
void Maestro::set_areaClases(string areaClasesC){
	areaClases = areaClasesC;
}

/*
 * setter pagoHora
 *
 * @param float: pagoHora
 * @return 
*/
void Maestro::set_pagoHora(float pagoHoraC){
	pagoHora = pagoHoraC;
}

/*
 * setter calfMaestro
 *
 * @param float: calfMaestro
 * @return 
*/
void Maestro::set_calfMaestro(float calfMaestroC){
	calfMaestro = calfMaestroC;
}


// Getters

/*
 * getter nomina
 *
 * @param
 * @return int: nomina
*/
int Maestro::get_nomina(){
	return nomina;
}

/*
 * getter areaClases
 *
 * @param
 * @return string: areaClases
*/
string Maestro::get_areaClases(){
	return areaClases;
}

/*
 * getter horasAsignadas
 *
 * @param
 * @return int: horasAsignadas
*/
int Maestro::get_horasAsignadas(){
	return horasAsignadas;
}

/*
 * getter pagoHora
 *
 * @param
 * @return float: pagoHora
*/
float Maestro:: get_pagoHora(){
    return pagoHora;
}

/*
 * getter alumnos
 *
 * @param
 * @return int: alumnos
*/
int Maestro:: get_alumnos(){
    return alumnos;
}

/*
 * getter calfMaestro
 *
 * @param
 * @return float: calfMaestro
*/
float Maestro:: get_calfMaestro(){
    return calfMaestro;
}

// Funciones

/*
 * nuevoAlumno
 *
 * @param 
 * @return 
 * 
 * Es empleada en la clase Estudiante para aumentar las estudiantes que calificaron al maestro
*/
void Maestro:: agregaAlumno(){
    alumnos++;
}

/*
 * agregaCalificacion
 *
 * @param Estudiante *est, float calificación
 * @return 
 * 
 * Permite al maestro calificar una materia a estudiantes
*/
void Maestro:: agregaCalificacion(Estudiante *est, float calificacion){
    float prom;
    prom = est->get_promedio();
    if (prom == 0){
        est->set_promedio(calificacion);
        cout <<"A " <<est->get_nombre() << " se le agregó una nueva calificación." << endl;
        est->nuevaMateria();
    }
    else{
        prom = ((prom * est->get_cantidadMaterias()) + calificacion) / (est->get_cantidadMaterias() + 1);
        est->set_promedio(prom);
        cout <<"A " <<est->get_nombre() << " se le agregó una nueva calificación." << endl;
        est->nuevaMateria();
    }

}

/*
 * imprimirDatos
 *
 * @param 
 * @return 
*/
void Maestro :: imprimirDatos(){
	Persona :: imprimirDatos();
    cout<<"Nómina: "<<get_nomina()<<endl;
    cout<<"Área clases: "<<get_areaClases()<<endl;
    cout<<"Horas asignadas: "<<get_horasAsignadas()<<endl;
    cout<<"Alumnos: "<<get_alumnos()<<endl;
    cout<<"Calificación maestro: "<<get_calfMaestro()<<endl;
}

/*
* Proyecto Escuela clase Directivo
* Jordana Betancourt Menchaca
* A01707434
* 18/05/2021
* Esta clase define objetos de tipo Directivo que hereda de la clase Persona
*/
class Directivo: public Persona{
    private: 
        int nomina;
        string puesto;
        int horasTrabajo;
        float pagoHora;

public:
Directivo();//constructor por Defualt
Directivo(string nombreC, string apellidoPaternoC,string apellidoMaternoC, int edadC, string generoC, 
 float alturaC,int nominaC, string puestoC, int horasTrabajoC, float pagoHoraC);//constructor Normal (sobrecarga)
    

//Setters (Modificación/asignación de atributos)
   

// Getters (Obtención/retorno de atributos)
        int get_nomina();
        string get_puesto();
        int get_horasTrabajo();
        float get_pagoHora();
// Funciones 
    void imprimirDatos(); 
    

};

/*
	* Constructor por default
	*
	* @param
	* return Objeto Directivo
    * Llama al constructor vacío de la clase padre (Persona)
*/
Directivo:: Directivo() { 
    nomina = 0;
    puesto = "Sin puesto";
    horasTrabajo = 0;
    pagoHora = 0;
}

/*
	* Constructor 
	*
    * De contructor Persona
	* @param string nombreC: nombre, string apellidoPaternoC: apellidoPaterno, 
    * string apellidoMaternoC: apellidoMaterno, ind edadC : edad, string
    * generoC : genero (femenino/masculino), float alturaC : altura (en metros)
    * 
    * De constructor Directivo
	* @param int nominaC: nomina, string puestoC: puesto, int horasTrabajoC: horasTrabajo, 
    * float pagoHoraC: pagoHora
    *
	* @return Objeto Estudiante
*/
Directivo::Directivo(string nombreC, string apellidoPaternoC,string apellidoMaternoC, int edadC, string 
generoC, float alturaC,int nominaC, string puestoC, int horasTrabajoC,float pagoHoraC) : Persona(nombreC,
 apellidoPaternoC,apellidoMaternoC, edadC, generoC, alturaC){
    nomina = nominaC;
    puesto = puestoC;
    horasTrabajo = horasTrabajoC;
    pagoHora = pagoHoraC;
}

// Getters

/*
 * getter nomina
 *
 * @param
 * @return int: nomina
*/
int Directivo::get_nomina(){
	return nomina;
}

/*
 * getter puesto
 *
 * @param
 * @return float: puesto
*/
string Directivo::get_puesto(){
	return puesto;
}

/*
 * getter horasTrabajo
 *
 * @param
 * @return float: horasTrabajo
*/
int Directivo::get_horasTrabajo(){
	return horasTrabajo;
}

/*
 * getter pagoHora
 *
 * @param
 * @return float: pagoHora
*/
float Directivo::get_pagoHora(){
	return pagoHora;
}

// Funciones

/*
 * imprimirDatos
 *
 * @param 
 * @return 
*/
void Directivo:: imprimirDatos(){
	Persona :: imprimirDatos();
    cout<<"Nómina: "<<get_nomina()<<endl;
    cout<<"Puesto: "<<get_puesto()<<endl;
    cout<<"Horas asignadas: "<<get_horasTrabajo()<<endl;
}
#endif
