const int sensor1 = 2;   // Digital output from flame sensor
const int buzzerPin = 3;        // Buzzer pin

void setup() {
  pinMode(sensor1, INPUT);
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);
  Serial.println("Flame sensor system initialized...");
}
s
void loop() {

  int flameState = digitalRead(sensor1);
Serial.println(flameState);
  if (flameState == LOW) {
    // Flame detected
    Serial.println("Flame Detected!");
    digitalWrite(buzzerPin, HIGH);  // Turn on buzzer
  } else {
    // No flame
    Serial.println("No Flame!");
    digitalWrite(buzzerPin, LOW);   // Turn off buzzer
  }

  delay(500); // Delay for stability
}