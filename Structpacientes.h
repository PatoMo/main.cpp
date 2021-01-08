//Estructuras


    struct paciente{
    char name[60],rut[20];
    int edad,peso,cama;
    struct receta;
    };

    struct receta{
    float dosis,concentracion,horas;
    float cantidadmg,cantidadml;
    };
