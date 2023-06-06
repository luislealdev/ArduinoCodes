int Do = 262, Re = 294, Mi = 330, Fa = 349, Sol = 392, La = 440, Si = 494, Do2 = 524;
int buzz = 12; //¡¡¡No es necesario un pin PWM, cualquier pin digital funcionará!!!

int wait = 0; void setup() {
pinMode(buzz, OUTPUT);//Inicializa el pin del zumbador como una salida
}

void loop() {
wait = 500;
tone(buzz, Do, wait); 
delay(1000);//espera 1s 
tone(buzz, Re, wait); 
delay(1000);//espera 1s 
tone(buzz, Mi, wait); 
delay(1000);//espera 1s 
tone(buzz, Fa, wait); 
delay(1000);//espera 1s

tone(buzz, Sol, wait); 
delay(1000);//espera 1s 
tone(buzz, La, wait); 
delay(1000);//espera 1s 
tone(buzz, Si, wait); 
delay(1000);//espera 1s
 tone(buzz, Do2, wait); 
 delay(1000);//espera 1s

  tone(buzz, Do2, wait); 
 delay(1000);//espera 1s
tone(buzz, Si, wait); 
delay(1000);//espera 1s
tone(buzz, La, wait); 
delay(1000);//espera 1s 
tone(buzz, Sol, wait); 
delay(1000);//espera 1s 
tone(buzz, Fa, wait); 
delay(1000);//espera 1s
tone(buzz, Mi, wait); 
delay(1000);//espera 1s 
tone(buzz, Re, wait); 
delay(1000);//espera 1s 
tone(buzz, Do, wait); 
delay(1000);//espera 1s 
noTone(buzz);



}