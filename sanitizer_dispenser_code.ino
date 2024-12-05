
// Automatic Sanitizer Dispenser Code
// Initial prototype using Arduino

#define TRIG_PIN 9  // Pin connected to Trig of HC-SR04
#define ECHO_PIN 10 // Pin connected to Echo of HC-SR04
#define RELAY_PIN 8 // Pin connected to the Relay module

long duration;
int distance;

void setup() {
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  pinMode(RELAY_PIN, OUTPUT);
  digitalWrite(RELAY_PIN, LOW); // Ensure the relay is off initially
  Serial.begin(9600);
}

void loop() {
  // Generate a 10us trigger pulse to start the ultrasonic sensor
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);
  
  // Measure the echo time
  duration = pulseIn(ECHO_PIN, HIGH);
  
  // Calculate distance (cm)
  distance = duration * 0.034 / 2;
  
  // Debugging: Print distance to Serial Monitor
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  // Check if distance is within range to activate the sanitizer
  if (distance > 0 && distance <= 10) { // Adjust threshold as needed
    digitalWrite(RELAY_PIN, HIGH); // Turn on relay (activates pump and solenoid)
    delay(5000); // Keep the relay on for 5 seconds
    digitalWrite(RELAY_PIN, LOW); // Turn off relay
    delay(1000); // Wait for 1 second before rechecking
  }
}
