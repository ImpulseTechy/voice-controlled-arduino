#define LED1_PIN 2
#define LED2_PIN 3
#define LED3_PIN 4
#define LED4_PIN 5

void setup() {
  // Initialize the serial communication
  Serial.begin(9600);

  // Initialize the LED pins as output
  pinMode(LED1_PIN, OUTPUT);
  pinMode(LED2_PIN, OUTPUT);
  pinMode(LED3_PIN, OUTPUT);
  pinMode(LED4_PIN, OUTPUT);
}

void loop() {
  // Check if data is available to read from the serial port
  if (Serial.available() > 0) {
    // Read the incoming data as a String
    String command = Serial.readStringUntil('\n');

    // Check the command and act accordingly
    if (command == "on1") {
      digitalWrite(LED1_PIN, HIGH);
    } else if (command == "off1") {
      digitalWrite(LED1_PIN, LOW);
    }

    if (command == "on2") {
      digitalWrite(LED2_PIN, HIGH);
    } else if (command == "off2") {
      digitalWrite(LED2_PIN, LOW);
    }

    if (command == "on3") {
      digitalWrite(LED3_PIN, HIGH);
    } else if (command == "off3") {
      digitalWrite(LED3_PIN, LOW);
    }

    if (command == "on4") {
      digitalWrite(LED4_PIN, HIGH);
    } else if (command == "off4") {
      digitalWrite(LED4_PIN, LOW);
    }
  }
}
