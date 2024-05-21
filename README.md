<h1> Gobstones <img src="https://gobstones.github.io/gobstones-web/images/logo.png" width="30"/></h1>

Ejercicios de Gobstones para pensamiento computacional, sexto año del Colegio Nacional de Buenos Aires (CNBA). 

De aprendizaje encontré una documentación muy resumida de Gobstones (no oficial) que se encuentra publicada por [Facultad de Informática - Universidad Nacional de La Plata](https://sedici.unlp.edu.ar/bitstream/handle/10915/63353/Documento_completo.pdf-PDFA.pdf?sequence=1&isAllowed=y).

### **Links Oficiales**:
- [Página Oficial](https://gobstones.github.io/)
- [Gobstones Sr editor online](https://gobstones.github.io/gobstones-sr/)
- [Descargas](https://github.com/gobstones/gobstones-web-desktop/releases)

---

# Sintaxis básica

## Comentarios
Se aceptan las sintaxis de Python y C para realizar comentarios.

```
# Esto es un comentario
""" Esto es un comentario de múltiple línea """
// Esto es un comentario
/* Esto es un comentario de múltiple línea */ 
```


## Primitivas
- dirección: Norte, Sur, Este, Oeste
- color: Negro, Rojo, Azul, Verde
 
- Mover(dirección)
- puedeMover(dirección)
- IrAlBorde(dirección)
- VaciarTablero()
- hayBolitas(color)
- nroBolitas(color)
- Poner(color)
- Sacar(color)


## Variables
Estructuras de datos básicas del lenguaje se encuentran las variables y las listas
```
var1 := 3
var2 := 2
list := [1, 2]
```

### Listas
Algunas primitivas de listas son: head(), tail(), init(), last(), isEmpty(list)
```
program
{
 xs := [] # Lista vacía
 ys := [1] # Lista con un único elemento
 zs := ys ++ xs # Concatenación de dos listas
}
```
```
program
{
/* Secuencias explícitas no - numéricas */
    cs := [True, False]
    ds := [Norte, Sur, Este, Norte]

/* Secuencias explícitas numéricas */
    xs := [1 ,4 ,7 ,10 ,13 ,16]
/* Rangos */
    xsr := [1 ,4..16] # [1 ,4 ,7 ,10 ,13 ,16]
    ysr := [1..10] # [1 ,2 ,3 ,4 ,5 ,6 ,7 ,8 ,9 ,10]
    zsr := [14 ,12..2] # [14 ,12 ,10 ,8 ,6 ,4 ,2]

/* Repetición indexada usando expresiones de listas no constantes . */
    foreach c in cs
    { Poner ( c ) }
```


## Operaciones
```
+ - * div mod
```
```suma: var1 + var2``` ```resta: var1 - var2 ``` ```mult: var1*var2``` ```division: var1 div var2``` ```mod: var1 mod var2 (== 1)```


## Condicionales
En Gobstones hay dos tipos de condicionales: if-then-else, switch-case.

### If
```
/* El código 'then' es opcional en la sintaxis*/
if (condition) then {
    // code
} else {
    // code
}
```

### switch
```
procedure PonerNumero ( n )
{
   switch ( n ) to
   {
      1 -> { Poner ( Azul ) }
      2 -> { Poner ( Negro )}
      3 -> { Poner ( Rojo ) }
      _ -> { Poner ( Verde )}
   }
}
```


## Bucles
En Gobstones existen 3 tipos de bucles: repeat, while, foreach. Cada una de las tres tienen sus propias características.

### Repeat
El repeat es como el for loop que repite cierta cantidad de veces
```
repeat(cantidad){
 // code
}
```

### While
El while repite mientras cierta condición sea cierta
```
while (condition) {
 // do code
}
```

### Foreach
El bucle toma cada elemento de la lista dada y cambia de elemento por cada iteración.
```
/* Para cada elemento en la lista cs */
foreach element in cs{
 // do code
}

/* Para cada elemento en rango */
foreach element in [1..10]{
 // do code
}
```


## Funciones y Procesos
Las funciones devuelven valor mientras que los procesos solo realizan código (no devuelven valor).
```
funciton returnValue(n1, n2){
  n3 := n1 + n2
  return (n3)
}
```
```
procedure noReturnValue(n1, n2){
  Mover(n1 + n2)
}
```
