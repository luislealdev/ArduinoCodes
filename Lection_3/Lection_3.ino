int ledPin = 5; // color rojo al pin 5 en el Arduino
int buttonApin = 9;// un botón al pin 9 en el Arduino
int buttonBpin = 8;// botón anther para el pin 8 en el Arduino 
byte leds = 0;
// La función 'setup' define el ledPin como una salida como normal, pero ahora tenemos las dos entradas a tratar. En este caso, se utiliza el conjunto de la pinMode para ser 'INPUT_PULLUP'
void setup () {
pinMode (ledPin, OUTPUT);
pinMode (buttonApin, INPUT_PULLUP); pinMode (buttonBpin, INPUT_PULLUP);
}
// El pinMode de INPUT_PULLUP significa que el pin se va a utilizar como entrada, pero que si nada más se conecta a la entrada, debe ser 'levantado' en ALTO. Es decir, el valor de la entrada por defecto es alto, a menos que se tire BAJA por la acción de pulsar el botón.
// Esta es la razón por los interruptores están conectados a GND. Cuando se presiona un interruptor, se conecta el pin de entrada a GND, por lo que ya no es ALTO. Dado que la entrada es normalmente ALTO y sólo pasa a BAJO cuando se pulsa el botón, la lógica es un poco inversa. Manejemos esto en la función de 'bucle'.
void loop () {
if (digitalRead (buttonApin) == LOW) {
digitalWrite (ledPin, HIGH); }

if (digitalRead (buttonBpin) == LOW) {
digitalWrite (ledPin, LOW); }
}
