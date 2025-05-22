#define BUTTON_PIN 2
#define RELAY_PIN 3
#define LED_PIN 4

bool humidifierOn = false;
bool buttonPressed = false;

void setup() {
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  pinMode(RELAY_PIN, OUTPUT);
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600);
  Serial.println("Smart Humidifier Ready");
}

void loop() {
  // Read button
  if (digitalRead(BUTTON_PIN) == LOW) {
    if (!buttonPressed) {
      toggleHumidifier();
      buttonPressed = true;
      delay(300); // debounce delay
    }
  } else {
    buttonPressed = false;
  }

  // Check for serial input (simulate Bluetooth)
  if (Serial.available()) {
    char cmd = Serial.read();
    if (cmd == '1') {
      turnOnHumidifier();
    } else if (cmd == '0') {
      turnOffHumidifier();
    }
  }
}

void toggleHumidifier() {
  if (humidifierOn) {
    turnOffHumidifier();
  } else {
    turnOnHumidifier();
  }
}

void turnOnHumidifier() {
  digitalWrite(RELAY_PIN, HIGH); // Relay ON
  digitalWrite(LED_PIN, HIGH);   // LED ON
  humidifierOn = true;
  Serial.println("Humidifier ON");
}

void turnOffHumidifier() {
  digitalWrite(RELAY_PIN, LOW);  // Relay OFF
  digitalWrite(LED_PIN, LOW);    // LED OFF
  humidifierOn = false;
  Serial.println("Humidifier OFF");
}
