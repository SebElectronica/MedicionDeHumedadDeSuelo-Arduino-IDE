int FC28;   //Lectura del sensor

void setup() {
  Serial.begin(9600);   //Activa Monitor Serial
  pinMode(FC28, INPUT);
}

void loop() {
  int valorHumedad = map(analogRead(FC28), 0, 1023, 100, 0);  //map() para ajustar los valores leidos a porcentajes

  //Imprimimos en el Monitor Serial
  Serial.print("Humedad: ");
  Serial.print(valorHumedad);  //Humedad del suelo
  Serial.println("%");

  delay(1000);
  
}
