const int sensor1 = 2;   // Digital output from flame sensor
const int buzzerPin = 3;   
const int smokePin = 4;// Buzzer pin

void setup() {
  pinMode(sensor1, INPUT);
  pinMode(buzzerPin, OUTPUT);
  pinMode(smokePin, INPUT);
  Serial.begin(9600);
  Serial.println("Flame sensor system initialized...");
}
s
void loop() {

  int flameState = digitalRead(sensor1);
  int smokeState = digitalRead(smokePin);
Serial.println(flameState);
  if (flameState == HIGH || smokeState == 1 ) {
    // Flame detected
    Serial.println("Fire Detected!");
    digitalWrite(buzzerPin, HIGH);  // Turn on buzzer
  } else {
    // No flame
    Serial.println("No Fire!");
    digitalWrite(buzzerPin, LOW);   // Turn off buzzer
  }

  delay(500); // Delay for stability
}
