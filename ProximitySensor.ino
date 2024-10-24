// Welcome to Aviyan's Thoughts

int ProximitySensor = D4; // Connect OUTPUT pin of IR sensor to NodeMCU GPIO-2
int Red_LED = D1; // Connect OUTPUT pin of IR sensor to NodeMCU GPIO-5

// the setup function runs once when you press reset or power the board
void setup() {
  pinMode (ProximitySensor, INPUT); // sensor pin as INPUT
  pinMode (Red_LED, OUTPUT); // Led pin as OUTPUT
}

// the loop function runs over and over again forever
void loop() {
  // reading sensor data
  int statusSensor = digitalRead (ProximitySensor);   
  
  if (statusSensor == 1){
    digitalWrite(Red_LED, LOW); // LED Off
  }
  else {
    digitalWrite(Red_LED, HIGH); // LED On
  }
}
