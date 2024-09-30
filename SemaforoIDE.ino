#define LED2 2
#define LED4 4
#define LED5 5
const int buttonPin = 7;    
int lastButtonState;    // the previous state of button
int currentButtonState; // the current state of button

void setup() {
  Serial.begin(9600);   
  pinMode(LED2, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
  currentButtonState = digitalRead(buttonPin);
}

void loop() {

  digitalWrite(LED5, LOW);
  digitalWrite(LED4, LOW);
  digitalWrite(LED2, HIGH);

  lastButtonState    = currentButtonState;      // save the last state
  currentButtonState = digitalRead(buttonPin); // read new state
  if(lastButtonState == HIGH && currentButtonState == LOW) {

  digitalWrite(LED5, LOW);
  digitalWrite(LED4, HIGH);
  digitalWrite(LED2, LOW);
  delay(500);
  digitalWrite(LED5, HIGH);
  digitalWrite(LED4, LOW);
  digitalWrite(LED2, LOW);
  delay(2500);
  digitalWrite(LED5, LOW);
  digitalWrite(LED4, HIGH);
  digitalWrite(LED2, LOW);
  delay(500);

  }
}