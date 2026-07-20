# Proyecto 1: Estación Meteorológica Básica

## 🎯 Objetivo
Crear una estación meteorológica que mide temperatura y distancia, mostrando los datos en el monitor serial y activando una alerta visual (LED rojo) cuando la temperatura supera los 30°C.

## 🧰 Componentes
- 1 Arduino Uno
- 1 Sensor de temperatura TMP36
- 1 Sensor ultrasónico HC-SR04
- 1 LED rojo
- 1 Resistencia de 220Ω

## ⚙️ Conexiones
| Componente | Pin Arduino |
|------------|-------------|
| LED (ánodo) | 2 |
| TMP36 (VOUT) | A0 |
| HC-SR04 (TRIG) | 4 |
| HC-SR04 (ECHO) | 3 |

## 📝 Explicación del código
- El TMP36 lee la temperatura y la convierte a grados Celsius.
- Si la temperatura supera los 30°C, se enciende el LED rojo.
- El HC-SR04 mide la distancia solo si la temperatura es menor a 40°C (para evitar lecturas erróneas).

