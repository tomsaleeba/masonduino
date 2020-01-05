int potPin = A2
int ledPin = LED_BUILTIN
int val = 0

void setup() {
  pinMode(LED_BUILTIN, OUTPUT)
  Serial.begin(9600)
}

void loop() {
  val = analogRead(potPin)
  digitalWrite(LED_BUILTIN, HIGH)
  delay(val)
  digitalWrite(LED_BUILTIN, LOW)
  delay(val)
  Serial.println(val)
}
