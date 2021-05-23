//Led por Bluetooth
int LED = 8;

int state = 0;

void setup() {
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
}

void loop() {
  if( Serial.available()>0)
  {
    state = Serial.read();
  }
  
  switch(state)
  {
    case 'N':
    digitalWrite(LED, HIGH);
    break;
    case 'F':
    digitalWrite(LED, LOW);
    break;
  }

}
