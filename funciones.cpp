//funciones o ejecuciones de los prototipos
int pacientes(paciente p){
printf("Bienvenido \n");
gets(nada);
printf("Ingrese nombre del paciente: \n");
gets(p.name); //lee la cadena de caracteres y las almacena en name
printf("Ingrese rut del paciente,edad y numero de cama: \n");
scanf("%s %d %d",p.rut,&p.edad,&p.cama);
printf("Ingrese peso del paciente en kilogramos: ");
scanf("%d",&p.peso);


}
