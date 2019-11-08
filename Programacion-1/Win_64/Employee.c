#include "Employee.h"
#include <string.h>
#include <stdlib.h>
Employee* employee_newParametros(char* idStr,char* nombreStr,char* horasTrabajadasStr)
{
    Employee* empleado;
    empleado= malloc(sizeof(Employee));
    empleado->id= atoi(idStr);
    strcpy(empleado->nombre, nombreStr);
    strcpy(empleado->horasTrabajadas,horasTrabajadasStr);


}


