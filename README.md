# Actividad-4-Manipulacion-de-Cadenas-y-Punteros
## Proyecto Integrador Anual - LPR 2026

* **Institución:** E.E.S.T. N.º 1 "Eduardo Ader" - Vicente López
* **Curso:** 5° Año 3° (A-B)
* **Materia:** Laboratorio de Programación (LPR)
* **Profesor:** Prof. York
* **Actividad:** Actividad 4: Manipulación de Cadenas y Punteros en C/C++ (Gestión de RAM)

---

## 📝 Descripción del Proyecto
Este software desarrolla un módulo de control de acceso por edad en lenguaje C++ que opera mediante la manipulación directa de la memoria RAM de bajo nivel. El programa evita el uso de copias de variables en la pila de ejecución, utilizando en su lugar **punteros avanzados** y operadores de desreferenciación para leer y modificar los valores directamente dentro de las direcciones físicas expresadas en formato hexadecimal.

## 👥 Integrantes (Grupo N.º 3)
* **Zacarias, Gabriel** - `[Rol: Desarrollo de mapeo hexadecimal y desreferenciación en la RAM]`
* **Mojica, Sofia** - `[Rol: Implementación de la lógica del control de acceso por edad y punteros]`
* **De Armas, Leonel** - `[Rol: Análisis técnico de memoria, esquema de la RAM e Informe APA v7]`
* **Roberts, Mateo** - `[Rol: Arquitectura del repositorio, configuración de Git y pruebas de consola]`

---

## 🛠️ Requisitos e Instalación
1. Compilador de bajo nivel **MinGW (g++)** instalado y debidamente configurado en la variable del sistema **PATH**.

### ⬇️ Clonar el repositorio del grupo:
```bash
git clone https://github.com/Ailuna77/Actividad-4-Manipulacion-de-cadenas-y-punteros.git
```

### 📂 Situarse en el directorio raíz correspondiente a la actividad:
```bash
cd cadenaspunteros
```

---

## 🏃 Ejecución
Abra una terminal interna en VS Code y ejecute secuencialmente los comandos de compilación y enlace:

### 1. Compilación del Código de Bajo Nivel
```powershell
g++ src/main.cpp -o src/cadenaspunteros.exe
```

### 2. Lanzamiento del Sistema
```powershell
.\src\cadenaspunteros.exe
```

---

## 🗂️ Estructura Obligatoria del Repositorio

```text
cadenaspunteros/
├── .gitignore                      <-- Bloqueo de archivos binarios (.exe) y directorios locales
├── LICENSE                         <-- Licencia MIT de uso académico
├── README.md                       <-- Portada técnica de la actividad de gestión de memoria
├── docs/                           <-- Carpeta exclusiva para documentación
│   └── InformeProyectoCADENASPUNTEROS.pdf <-- ENTREGABLE (Informe final con normas APA v7)
├── src/                            <-- Carpeta para los códigos fuente del proyecto
│   └── main.cpp                    <-- Código fuente con punteros y desreferenciación en C++
└── capturas/                       <-- Evidencias técnicas de validación del sistema
    ├── ejecucion_punteros.png      <-- Captura de la terminal con las direcciones hexadecimales (0x)
    └── esquema_ram.png             <-- Diagrama de mapeo físico de memoria hecho a mano o digital
```

