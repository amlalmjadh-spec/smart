const int greenLed = 11;
const int yellowLed = 12;
const int redLed = 13;
const int buzzer = 8;

int numPeople = 0;

void setup() {
  pinMode(greenLed, OUTPUT);
  pinMode(yellowLed, OUTPUT);
  pinMode(redLed, OUTPUT);
  pinMode(buzzer, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  
  Serial.print("Number of people: ");
  Serial.println(numPeople);

  digitalWrite(greenLed, LOW);
  digitalWrite(yellowLed, LOW);
  digitalWrite(redLed, LOW);


  if (numPeople <= 30) {
    digitalWrite(greenLed, HIGH); 
  } 
  else if (numPeople >= 31 && numPeople <= 40) {
    digitalWrite(yellowLed, HIGH); 
  } 
  else if (numPeople >= 41 && numPeople <= 50) {
    digitalWrite(redLed, HIGH); 
  }

  if (numPeople >= 50) {
    digitalWrite(buzzer, HIGH);
  } else {
    digitalWrite(buzzer, LOW);
  }

  delay(300);

  numPeople++;
  if (numPeople > 60) {
    numPeople = 0;
  }
}
