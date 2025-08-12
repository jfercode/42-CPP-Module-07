# ♻️ CPP Module 07 – C++ Templates

> ✅ **Objetivo**: Dominar el uso de **templates** en C++ para funciones y clases, potenciando la reutilización y flexibilidad del código.
> ✅ **Nivel**: Avanzado
> ✅ **Temas clave**: Templates de funciones, templates de clases, manejo de arrays genéricos, excepciones estándar, operadores de comparación, buenas prácticas de diseño en C++98.

---

## 📚 Tabla de Contenidos

1. [Ejercicio 00 – Templates de Funciones Básicas](#ejercicio-00--templates-de-funciones-básicas)
2. [Ejercicio 01 – Iter](#ejercicio-01--iter)
3. [Ejercicio 02 – Array Template](#ejercicio-02--array-template)
4. [Tabla Resumen de Templates](#-tabla-resumen-de-templates)
5. [Errores Comunes](#-5-errores-comunes)
6. [Buenas Prácticas](#-6-buenas-prácticas)

---

## Ejercicio 00 – **Templates de Funciones Básicas**

**Templates usados:** `swap`, `min`, `max`

**Explicación:**
Se implementarán tres templates de función genéricos:
- `swap`: Intercambia los valores de dos variables del mismo tipo.
- `min`: Devuelve el menor de dos valores (si son iguales, retorna el segundo).
- `max`: Devuelve el mayor de dos valores (si son iguales, retorna el segundo).

Estos templates aceptan cualquier tipo que soporte operadores de comparación.

Ejemplo de uso:

```cpp
int a = 2;
int b = 3;
::swap(a, b); // a = 3, b = 2
std::cout << "min(a, b) = " << ::min(a, b) << std::endl; // 2
std::cout << "max(a, b) = " << ::max(a, b) << std::endl; // 3

std::string c = "chaine1";
std::string d = "chaine2";
::swap(c, d); // c = chaine2, d = chaine1
std::cout << "min(c, d) = " << ::min(c, d) << std::endl; // chaine1
std::cout << "max(c, d) = " << ::max(c, d) << std::endl; // chaine2
```

---

## Ejercicio 01 – **Iter**

**Template usado:** `iter`

**Explicación:**
Se implementa un template de función `iter` que:
- Recibe la dirección de un array, su longitud, y una función a aplicar sobre cada elemento.
- Funciona con arrays de cualquier tipo y la función puede ser también un template.

Ejemplo de uso:

```cpp
template <typename T>
void printElem(T const &elem) { std::cout << elem << std::endl; }

int arr[5] = {1, 2, 3, 4, 5};
iter(arr, 5, printElem<int>); // Imprime los elementos del array

std::string strArr[2] = {"hola", "mundo"};
iter(strArr, 2, printElem<std::string>); // Imprime los strings
```

---

## Ejercicio 02 – **Array Template**

**Template usado:** `Array<T>`

**Explicación:**
Se desarrolla una clase template `Array` que:
- Permite crear arrays de cualquier tipo y tamaño.
- Implementa:
  - Constructor por defecto (array vacío)
  - Constructor con tamaño (`unsigned int n`)
  - Constructor por copia y operador de asignación (copia profunda)
  - Acceso mediante operador `[]` (lanza `std::exception` si el índice está fuera de rango)
  - Método `size()` para obtener la cantidad de elementos

Ejemplo de uso:

```cpp
Array<int> arr(3);
arr[0] = 10; arr[1] = 20; arr[2] = 30;

Array<int> arrCopia = arr; // Copia profunda
arrCopia[1] = 99; // arr[1] sigue siendo 20

std::cout << arr.size() << std::endl; // 3

try {
    std::cout << arr[10] << std::endl; // Lanza excepción
} catch (std::exception &e) {
    std::cout << "Excepción: " << e.what() << std::endl;
}
```

---

## 📊 Tabla Resumen de Templates

| Ejercicio                    | Template usado            | Razón principal                       |
|------------------------------|--------------------------|---------------------------------------|
| 00 – Funciones Básicas       | `swap`, `min`, `max`     | Reutilización genérica de funciones   |
| 01 – Iter                    | `iter`                   | Aplicar funciones a arrays genéricos  |
| 02 – Array Template          | `Array<T>`               | Array genérico seguro y reutilizable  |

---

## 🔹 5. Errores Comunes

❌ Definir implementación de funciones NO template en headers  
❌ Acceder a memoria no asignada o provocar memory leaks  
❌ Usar containers o algoritmos STL antes de los módulos 08/09  
❌ No lanzar excepción en acceso fuera de rango en `Array<T>`  
❌ Olvidar include guards en archivos de cabecera  
❌ Violaciones de las reglas de nomenclatura y formato

---

## 🔹 6. Buenas Prácticas

✅ Usar `const &` en parámetros para evitar copias innecesarias  
✅ Documentar cada template explicando su uso y restricciones  
✅ Asegurar que `Array<T>` siga la Orthodox Canonical Form  
✅ Realizar pruebas exhaustivas en los `main.cpp` de cada ejercicio  
✅ Validar límites y manejar excepciones de forma clara  
✅ Escribir código limpio y fácilmente entendible por evaluadores

---

## Autor 🤝💡📬

<div align="center">
  <a href="https://github.com/jfercode">
    <img src="https://github.com/jfercode.png" width="100px" alt="Javier Fernández Correa" />
    <br />
    <sub><b>Javier Fernández Correa</b></sub>
  </a>
</div>

---

## Licencia 📜✅🗝️

Este proyecto está bajo la licencia MIT.
