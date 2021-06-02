# TC1030_POO

## "Datos de Personal Escolar"

**Contexto:** Una escuela nos solicita un programa para poder tener archivadas a todas las personas que conforman al plantel, para ello dividen a los miembros en estudiantes, maestros y directivos; solicitan un programa en el cual se pueda acceder a todas las personas registradas, que se puedan agregar extras y que marque si ya es momento de recompensar por su buen desempeño.

**Funcionalidad:** El programa permite el registro y actualización del personal del plantel. Permite encontrar a personas de acuerdo a su nombre, puesto, promedio y materias que imparte para seleccionar a los más adecuados en caso de necesitarlo. Consta de un menú con las opciones iniciales y corre sobre consola.

**Consideraciones:** El programa corre en consola y esta hecho con c++ standard *compilar con: "g++ Persona.h Escuela. h main.cpp " *correr en linux: "/a.out" *correr en windows: "a.exe".

- El programa está hecho para tener un máximo de 1000 personas registradas, de tener más no compilaría correctamente.
- No se debe colocar como matrícula un número inicial 0, ya que después arrojará números aleatorios.
- Al buscar una persona en específico siempre recorrerá todas las personas diciendo que en esa posición no se encuentra; hasta que se ecuentre, imprimirá los datos.
