# CE3102-FunTras

Biblioteca estática en C++ que permite aproximar el valor numérico de un conjunto de funciones trascendentes de variable real utilizando únicamente las operaciones básicas.

## Instalación

Puede descargar e instalar funTras usando el archivo de instalación para linux-64:

```shell
 $./install.sh
```

Si prefiere realizar la instalación manualmente, la biblioteca **funTras** requiere tener instalado en su sistema un compilador de C++ como ```g++/gcc``` y las bibliotecas `iostream` y `math.h` que vienen incluidas en la instalación del compilador.

```shell
 $sudo apt-get install g++
```

Luego debe copiar el archivo `funtras.hpp` al directorio del sistema `/usr/include` para que el `header` esté accesible desde el `PATH`. Puede hacerlo con el comando:

```shell
 $sudo cp src/funtras.hpp /usr/include
```

Debe crear los directorios `build` y `lib`:

```shell
 $mkdir build
 $mkdir lib
```

Finalmente debe compilar y crear la biblioteca:

```shell
 $g++ -c src/funtras.cpp -o build/funtras.o
 $ar cr lib/libfuntras.a build/funtras.o
```

## ¿Cómo utilizar la librería?

Para incluir la biblioteca en su código solamente deberá realizar el include, y recomendamos que utilice el namespace **funtras** para obtener un código más legible.

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

La biblioteca provee las siguientes funciones:

|  Función  | Comando C++ |  Función  |  Comando C++ |
|:---------:|:-----------:|:---------:|:------------:|
|    1/x    |   div_t(x)  |    e^x    |   exp_t(x)   |
|   sin(x)  |   sin_t(x)  |   cos(x)  |   cos_t(x)   |
|   tan(x)  |   tan_t(x)  |   ln(x)   |    ln_t(x)   |
|  log_a(x) |  log_t(x,a) |    a^x    | power_t(x,a) |
|  sinh(x)  |  sinh_t(x)  |  cosh(x)  |   cosh_t(x)  |
|  tanh(x)  |  tanh_t(x)  |    √(x)   |   sqrt_t(x)  |
|   ⁶√(x)   | root_t(x,a) | arcsen(x) |   asin_t(x)  |
| arctan(x) |  atan_t(x)  | arcos(x)  |   acos_t(x)  |

Podrá encontrar más información en la documentación que ofrecemos en el [manual de usuario](https://github.com/ce-box/CE3102-FunTras/blob/main/manual_funtras.pdf) de **funTras**.

---

## Compilación

Para compilar debe incluir la librería **funTras** como flags del compilador:

```shell
 $g++ your_file.cpp -std=c++11 -L/path/to/lib -lfuntras -o a.out
```
