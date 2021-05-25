/*
*
* Proyecto Escuela clase Empresa
* Jordana Betancourt Menchaca
* A01707434
* 25/05/2021
*
* Esta clase define objeto de tipo Escuela que contiene todas las operaciones
* para hacer altas de "Personas" en la escuela, como buscador y agregación de
* calificaciones a alumnos, esta clase es utilizada por la función principal del programa
* y es parte del proyecto Escuela.
*/

#ifndef ESCUELA_H_
#define ESCUELA_H_

#include <string>
#include <iostream>
#include <sstream>
#include "Persona.h" //biblioteca con mis objetos a usar

using namespace std;

const int MAX = 1000; //constante de tamaño de arreglos

class Escuela {


    //Declaro las variables privadas de instancia
    private:

        Persona *personas[MAX];  //se define como apuntador para usar polimorfismo
        int numeroPersonas;
        
        
    //Declaro constructor por default y metodos públicos.
    public:

        Escuela();  //constructor por defualt
        ~Escuela(); //Destructor

        void creaEjemplos();
        void muestraPersonal(); //Sobrecarga
        void muestraPersonal(string tipoC); //Sobrecarga
        void muestraRecompensas();
        void agregaEstudiante(string nombreC, string apellidoPaternoC,string apellidoMaternoC, int edadC, 
        string generoC, float alturaC,string tipoC,int matriculaC,int cantidadMateriasC, float promedioC);
        void agregaMaestro(string nombreC, string apellidoPaternoC,string apellidoMaternoC, int edadC,
        string generoC, float alturaC,string tipoC,int nominaC, string areaClasesC, int horasAsignadasC,
        float pagoHoraC, int alumnosC,float calfMaestroC);
        void buscaPorNombre(string nombreC);
        void buscaPorGenero(string generoC);
        void recompensaPersonas(string nombreC);
        void calificaPersonas(string nombreC,string tipoC);
 
};
/*
		* Constructor por default
		*
		* @param
		* return Objeto Escuela
*/
Escuela:: Escuela() { //Constructor Vacío (Default)
       numeroPersonas = 0;
}

/*
		* Destructor
		*
        * Recorre todo el arreglo destruyendo los objetos Persona que se encuentren en él
		* @param
		* return 
*/
Escuela :: ~Escuela(){ //Destructor
    for(int i = 0; i < numeroPersonas;i++)
        delete personas[i];
}

//Funciones

/*
 * creaEjemplos()
 *
 * Utliza el arreglo de tipo Escuela
 * Llena al arreglo con 4 ejemplos. 
 *
 * @param
 * @return
*/
void Escuela :: creaEjemplos(){
    personas[numeroPersonas] = new Estudiante("Alicia","Villanueva","Leal",23,"Femenino",1.65,"Estudiante",12345,3,97);
    numeroPersonas++;
    personas[numeroPersonas] = new Maestro("Alejandro","Martínez","Senega",32,"Masculino",1.80,"Maestro",13644,"Español",
    5,123.4,20,91.3);
    numeroPersonas++;
    personas[numeroPersonas] = new Estudiante("Alberto","Torres","Fernández",19,"Masculino",1.86,"Estudiante",32622,6,92);
    numeroPersonas++;
    personas[numeroPersonas] = new Maestro("Ana","Juárez","Perez",45,"Femenino",1.83,"Maestro",19644,"Ciencias Sociales",
    5,123.4,20,95.3);
    numeroPersonas++;
}

/*
 * muestraPersonal
 *
 * utiliza el arreglo personas[] y recorre todo el arreglo
 * imprimiendo cada uno de los objetos con su método imprimirDatos().
 *
 * @param
 * @return
 */
void Escuela::muestraPersonal(){

  //Ciclo que recorre el arreglo e imprime cada objeto.
	for(int i=0; i<numeroPersonas ;i++)
    personas[i]->imprimirDatos();
}

/*
 * muestraPersonal
 *
 * utiliza el arreglo personas[] y el tipo para recorrer todo el arreglo
 * imprimiendo cada uno de los objetos con su método imprimirDatos().
 *
 * @param string tipoC
 * @return
 */
void Escuela::muestraPersonal(string tipoC) {

  //Ciclo que recorre el arreglo e imprime cada objeto.
  for (int i = 0; i < numeroPersonas; i++) {
    if (personas[i] -> get_tipo() == tipoC)
    personas[i] -> imprimirDatos();
  }
}

/*
 * muestraRecompensas
 *
 * utiliza el arreglo personas[] y recorre todo el arreglo
 * imprimiendo cada uno de los objetos con su método imprimirDatos().
 *
 * @param 
 * @return
 */
void Escuela::muestraRecompensas(){
    string nombre, recomp;

  //Ciclo que recorre el arreglo e imprime cada objeto.
	for(int i=0; i<numeroPersonas ;i++){
    nombre = personas[i]->get_nombre();
    recomp = personas[i]->get_recompensa();
    cout<<nombre<<" tiene la recompensa de: "<<recomp<<endl;
    }
}

/*
	*agregaEstudiante
    * 
	* @param string nombreC, string apellidoPaternoC, string apellidoMaternoC, int edadC, string
    * generoC (femenino/masculino), float alturaC (en metros), string tipoC, int matriculaC,
    * int cantidadMateriasC, float promedioC
    * 
	* @return
*/
void Escuela::agregaEstudiante(string nombreC, string apellidoPaternoC,string apellidoMaternoC, int edadC, 
        string generoC, float alturaC,string tipoC,int matriculaC,int cantidadMateriasC, float promedioC) {

  //new crea el objeto en tiempo de ejecución para usar polimorfismo
  personas[numeroPersonas] = new Estudiante(nombreC,apellidoPaternoC,apellidoMaternoC,edadC,generoC, alturaC,
  tipoC,matriculaC,cantidadMateriasC,promedioC);
  numeroPersonas++;
}

/*
	*agregaMaestro
    * 
	* @param string nombreC, string apellidoPaternoC, string apellidoMaternoC, int edadC, string
    * generoC (femenino/masculino), float alturaC (en metros), string tipoC, int nominaC,
    * string areaClasesC, int horasAsignadasC, float pagoHoraC, int alumnosC, float calfMaestro
    * 
	* @return
*/
void Escuela::agregaMaestro(string nombreC, string apellidoPaternoC,string apellidoMaternoC, int edadC, 
string generoC, float alturaC,string tipoC,int nominaC, string areaClasesC, int horasAsignadasC,float pagoHoraC,
 int alumnosC,float calfMaestroC) {

  //new crea el objeto en tiempo de ejecución para usar polimorfismo
  personas[numeroPersonas] = new Maestro(nombreC,apellidoPaternoC,apellidoMaternoC,edadC,generoC, alturaC,
  tipoC,nominaC,areaClasesC,horasAsignadasC,pagoHoraC,alumnosC,calfMaestroC);
  numeroPersonas++;
}


/*
 * buscaPorNombre
 *
 * utiliza el arreglo personas[] y para recorre todo el arreglo
 * imprime la personas si coincide con el nombre buscado
 *
 * @param string nombreC
 * @return
 */
void Escuela::buscaPorNombre(string nombreC) {

  cout<<"Buscando nombre "<<nombreC<<" ..."<<endl;
  for (int i = 0; i < numeroPersonas; i++) {
    if (personas[i] -> get_nombre() == nombreC)
    personas[i] -> imprimirDatos();
    else
    cout<<"No se ha encontrado ese nombre en registro "<<i<<endl;
  }
}

/*
 * buscaPorGenero
 *
 * utiliza el arreglo personas[] y para recorre todo el arreglo
 * imprime la personas si coincide con el genero buscado
 *
 * @param string nombreC
 * @return
 */
void Escuela::buscaPorGenero(string generoC) {

  cout<<"Buscando por género "<<generoC<<" ..."<<endl;
  for (int i = 0; i < numeroPersonas; i++) {
    if (personas[i] -> get_genero() == generoC)
    personas[i] -> imprimirDatos();
    else
    cout<<"No se ha encontrado ese genero en registro "<<i<<endl;
  }
}

/*
 * recompensaPersonas
 *
 * utiliza el arreglo personas[] y recorre todo el arreglo
 * y de acuerdo al nombre que se busca llama a la función virtual
 * agregarRecompensa
 *
 * @param string nombreC
 * @return
 */
void Escuela :: recompensaPersonas(string nombreC){
  for (int i = 0; i < numeroPersonas; i++) {
    if (personas[i] -> get_nombre() == nombreC)
    personas[i] -> agregarRecompensa();
    else
    cout<<"\nNo se ha encontrado ese nombre en registro "<<i<<endl;
  }
}

void Escuela :: calificaPersonas(string nombreC, string tipoC){
    float calificacionC;
  for (int i = 0; i < numeroPersonas; i++) {
    if (personas[i] -> get_nombre() == nombreC && personas[i] -> get_tipo() == tipoC){
        cout<<"Ingrese la nueva calificación del "<<personas[i] -> get_tipo()<<" "<<nombreC<<endl;
        cin>>calificacionC;
        personas[i] -> agregarCalificacion(calificacionC);
    }
    else
    cout<<"\nNo se ha encontrado ese nombre en registro "<<i<<endl;
  }
}
#endif