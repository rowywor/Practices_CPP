/*
rowywor
Calculo/Ponderacion de calificaciones de un alumno
*/

#include <iostream>
#include <math.h>

using namespace std;
int tarea1, tarea2, tarea3, tarea4, tarea5, tareas, practica1, practica2, practica3, practicas;
int examen1, examen2, examenes, proyecto;

main(){ 
	
	cout<< "El alumno/a acaba de terminar el semestre. " <<endl; 
	cout<< "Vamos a calcular la calificacion final..." <<endl;
	cout<< "El encuadre dictamina lo siguiente: \n " <<endl;
	cout<< "           Tareas (5 actividades) = 25%" <<endl;
	cout<< "           Practicas (3 actividades) = 35%" <<endl;
	cout<< "           Examenes (2 actividades) = 20%" <<endl;
	cout<< "           Proyecto (1 actividad) = 20%" <<endl;
	
	cout<< "\nEmpecemos. Cuanto vale la Tarea 1? (0-100): "; cin>> tarea1;
	cout<< "Cuanto vale la Tarea 2?: "; cin>> tarea2;
	cout<< "Cuanto vale la Tarea 3?: "; cin>> tarea3;
	cout<< "Cuanto vale la Tarea 4?: "; cin>> tarea4;
	cout<< "Cuanto vale la Tarea 5?: "; cin>> tarea5;
	tareas = tarea1 + tarea2 + tarea3 + tarea4 + tarea5;
	cout<< "Segun de 0-100, el alumno alcanzo: " <<tareas<<" puntos." <<endl;
	tareas = tareas * 25 / 500;
	cout<< "Segun la ponderacion de 25%, el alumno alcanzo: "<<tareas<<"%";
	
	cout<< "\n\nSeguimos con las practicas. Cuanto vale la Practica 1? (0-100): "; cin>> practica1;
	cout<< "Cuanto vale la Practica 2?: "; cin>> practica2;
	cout<< "Cuanto vale la Practica 3?: "; cin>> practica3;
	practicas = practica1 + practica2 + practica3;
	cout<< "Segun de 0-100, el alumno alcanzo: " <<practicas<<" puntos." <<endl;
	practicas = practicas * 35 / 300;
	cout<< "Segun la ponderacion de 35%, el alumno alcanzo: "<<practicas<<"%";
	
	cout<< "\n\nAhora los examenes. Cuanto vale el Examen 1? (0-100): "; cin>> examen1;
	cout<< "Cuanto vale el Examen 2?: "; cin>> examen2;
	examenes = examen1 + examen2;
	cout<< "Segun de 0-100, el alumno alcanzo: " <<examenes<<" puntos." <<endl;
	examenes = examenes * 20 / 200;
	cout<< "Segun la ponderacion de 20%, el alumno alcanzo: "<<examenes<<"%";
	
	cout<< "\n\nPor ultimo, el proyecto. Cuanto vale el Proyecto? (0-100): "; cin>> proyecto;
	cout<< "Segun de 0-100, el alumno alcanzo: " <<proyecto<<" puntos." <<endl;
	proyecto = proyecto * 20 / 100;
	cout<< "Segun la ponderacion de 20%, el alumno alcanzo: "<<proyecto<<"%";
	
	cout<< "\n\nLA CALIFICACION TOTAL DEL ALUMNO ES: "<<tareas+practicas+examenes+proyecto<<".";

}
