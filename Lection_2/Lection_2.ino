int red_pin = 3;
int green_pin = 5;
int blue_pin = 6;

void setup() {
  // put your setup code here, to run once:
pinMode (red_pin, OUTPUT);
 pinMode (green_pin, OUTPUT); 
 pinMode (blue_pin, OUTPUT);
}

void loop () {
setColor (255, 0, 0); // Color rojo 
delay(1000);
setColor (0, 255, 0); // Color verde 
delay(1000);
setColor (0, 0, 255); // Color azul 
delay(1000);
setColor (255, 255, 255); // Color blanco 
delay(1000);
setColor (180, 0, 255); // Color púrpura 
delay(1000);
}

void setColor (int redValue, int greenValue, int blueValue) { analogWrite (red_pin, redValue);
analogWrite (green_pin, greenValue);
 
 analogWrite (blue_pin, blueValue); }