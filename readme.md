   # **PARCIAL I - INFORMÁTICA II**

##Punto 1

Para el desarrollo de las categorías, creo un arreglo con las categorías por defecto que tendrá el sistema, será  un arreglo tipo  *char* y bidimensional, de tal manera que cada arrelo dentro del arreglo sea una categoría, las categorías que estableceré por defecto son:

1. Alimentación
2. Vestuario
3. Vivienda
4. Salud
5. Entretenimiento

Realizado este arreglo crearé un puntero de punteros, que basicamente apunta a una matriz vacía, esto con el objetivo de que el usuario lo llene con sus categorías personalizadas. Definiré **variables globales** para las dimensiones, serán dos variables de tipo *int* una con nombre "adRows", la cual corresponde a la asignación de filas, y la otra adCols, para asignar las columnas.

Crearé 4 funciones que trabajarán en conjunto para cumplir el objetivo del punto, con una función se llenará el **arreglo** del **puntero de punteros**, con otra se mostrarán las categorías por defecto, otra función para la comparación de categorías, y por último una función que mostrará las categorías definitivas.


------------
##Punto 2

En la parte de usuarios realizaré un arreglo tipo *char* bidimensional que contiene arreglos con palabras tipo formulario por ejemplo: *nombre, documento, edad, profesión y nacionalidad*. Por cada uno de estos elementos crearé punteros de punteros para almacenar los datos y uno adicional que hará una copia exacta del **puntero de punteros** que apunta a la **matriz de documentos** y copiara la misma para hacer la comparación por documento si hay o no elementos repetidos en dicha matriz.

Crearé dos variables globales igual que en la parte de categorías para asignar filas y columnas en este caso usaré los nombres de variables tipo *int*
"uRows", "uCols", usando la letra "*u*" como referencia a la palabra *Usuario * o *User*.

### Función getUserData

Con esta función reservaré la memoria para los arreglos correspondientes a cada espacio *ptrNames, ptrDocs, ptrEdad, ptrProfession, ptrNationality.* 
Através de un ciclo ***for*** se llenaran los arreglos al solicitarle al usuario que digite dicha información.

###Función showUserData
Con esta función función se mostrarán los datos en pantalla de los usuarios con ciclo ***for***.

###función compareUserData

Esta será una función tipo ***Bool*** através de un ciclo ***for*** se comparará solo con los datos del ***ptrDocs*** si hay números de documentos iguales debe se debe reiniciar la función ***getUserData*** hasta que los datos no coincidan.



------------

##Punto 3

Para este punto empleo la librería ***[c-time](https://www.tutorialspoint.com/cplusplus/cpp_date_time.htm "c-time")***  así podremos tomar la hora exacta del sistema en el momento de una transacción. 

Crearé variables globales con el mismo fin de los puntos anteriores que es asignar número de filas y columnas, para este punto serán "***nRows***", "***nCols***", adicional usaré dos **punteros de punteros**, para almacenar las transacciones y la fecha y hora del sistema, los **punteros de punteros** serán ***ptrTransactions*** y ***ptrTimeDate***.

###Función getTimeNow

En esta función definiré una variable tipo ***time_t*** con el nombre "***timeNow***"para almacenar la fecha y la hora, a su vez definiré un puntero tipo ***char***, para convertir la fecha y la hora en un arreglo.

Con un ciclor ***for***, el sistema tomara los datos del usuario, por los montos que desean en las transacciones, al preguntar al usuario la cantidad de transacciones que desea realizar y almacenar dicha cantidad en la variable ***"nRows"*** se creará una matriz dinámica para que el usuario asigne el límite de las transacciones que desea realizar.

###Función showTransactions

Esta función mediante un ciclo ***For*** mostrará en consola la información obtenida de los usuarios y que tendremos almacenada en las matrices a las que apuntan los **punteros de punteros** ***ptrTransactions*** y ***ptrTimeDate***.


------------

##Punto 5

Este punto que consta en fusionar todo lo anterior y la busqueda dentro la aplicación se realizará creando el archivo ***main.cpp***, por cada punto anterior crearemos un ***namespace***, es decir de cada archivo de ***Categories.cpp, Users.cpp y Transactions.cpp*** creare un ***.h*** de cada uno y en el archivo ***main.cpp*** haré el uso de todos los espacios de nombres para así llamar a cada función necesaria en la aplicación.

Usaré un ***do, while*** junto con un ***switch*** para crear el menú de opciones, haré algunos ***switch*** anidados para crear submenus según cada función.
