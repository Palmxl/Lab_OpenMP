# Taller OpenMP - Sistemas Operativos 🧵⚙️

Este proyecto corresponde a un taller práctico para la materia de **Sistemas Operativos** de la Pontificia Universidad Javeriana. El objetivo es demostrar el uso básico de **OpenMP** para paralelizar un bucle `for` utilizando múltiples hilos, con una estructura modular en C.

---

## 🧠 Objetivo

Demostrar cómo se puede paralelizar un bucle usando OpenMP y cómo estructurar un programa C de forma modular para mejorar la claridad, reutilización y mantenimiento del código.

---

## 📁 Estructura del proyecto

```plaintext
📦 TallerOMP
 ┣ 📄 main_OMP_Sanchez.c   ← Función principal que lee el argumento y llama la lógica
 ┣ 📄 operaciones.c        ← Contiene la lógica paralela usando OpenMP
 ┣ 📄 operaciones.h        ← Encabezado de la función declarada
 ┗ 📄 Makefile             ← Script para compilar todo automáticamente
 
```

---

## ⚙️ Compilación

Este proyecto incluye un `Makefile`. Para compilar el programa, ejecuta en la terminal:

```bash
make
```

Esto generará el ejecutable llamado `ejecutable`.

---

## ▶️ Ejecución

El programa recibe como argumento el número de hilos a utilizar. Por ejemplo:

```bash
./ejecutable 4
```

Esto ejecuta el programa utilizando 4 hilos para procesar el ciclo.

---

## 🛠️ Limpieza

Para eliminar el ejecutable generado:

```bash
make clean
```

---

## 📌 Notas

- Este código es una primera aproximación al uso de OpenMP.
- El código fue estructurado de forma modular para mejorar la claridad del taller.
- Se imprime la diferencia entre el número de hilos **disponibles por defecto** y los **solicitados por el usuario**.

---

## ✍️ Autor

- **Juan Martín Sánchez Burbano**
- Curso: Sistemas Operativos
- Universidad: Pontificia Universidad Javeriana
- Fecha: 22 de mayo de 2025
