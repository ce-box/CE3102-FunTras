# CE3102-FunTras
Biblioteca estática en C++ que permite aproximar el valor numérico de un conjunto de funciones trascendentes de variable real utilizando únicamente las operaciones básicas.

## ¿Cómo utilizar la librería?

Primero debes copiar el archivo `funtras.hpp` al directorio del sistema `/usr/include`. Puedes hacerlo con el comando:

```shell
 $sudo cp src/funtras.hpp /usr/include
```

Para incluir la biblioteca en tu código solamente debes realizar el include, y recomendamos que utilices el namespace **funtras**.

```c++
#include <funtras.hpp>

using namespace funtras;

int main(int argc, char const *argv[])
{
    double y,x;
    x = 2.71;
    y = root_t(sin_t(x)+ ln_t(x), 3) * div_t(sinh_t(sqrt_t(2)))
     + div_t(tan_t(div_t(exp_t(1))));
    return 0;
}
```

## Compilación

```shell
 $g++ your_file.cpp -L/path/to/lib -lfuntras -o a.out
```
