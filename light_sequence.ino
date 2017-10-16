#define GREEN 12
#define YELLOW 11
#define RED 10
#define BLUE 9
#define BUTTON 7
#define DELAY_MS 100
#define MAX 128
#define MIN 0
#define CLICKED 1


byte button_state = 0;
byte dim = 130;
byte fade = 255;
byte decrement = 5;
void setup() {
  pinMode(BUTTON, INPUT);
}

void loop() {
  while(button_state != CLICKED) {
    analogWrite(GREEN, MAX);
    delay(DELAY_MS);
    analogWrite(GREEN, MIN);
    button_state = digitalRead(BUTTON);
    analogWrite(YELLOW, MAX);
    delay(DELAY_MS);
    analogWrite(YELLOW, MIN);
    button_state = digitalRead(BUTTON);
    analogWrite(RED, MAX);
    delay(DELAY_MS);
    analogWrite(RED, MIN);
    button_state = digitalRead(BUTTON);
    analogWrite(BLUE, MAX);
    delay(DELAY_MS);
    analogWrite(BLUE, MIN);
    button_state = digitalRead(BUTTON);
  }
  button_state = 0;
  while(button_state != CLICKED) {
    analogWrite(BLUE, MAX);
    delay(DELAY_MS);
    analogWrite(BLUE, MIN);
    button_state = digitalRead(BUTTON);
    analogWrite(RED, MAX);
    delay(DELAY_MS);
    analogWrite(RED, MIN);
    button_state = digitalRead(BUTTON);
    analogWrite(YELLOW, MAX);
    delay(DELAY_MS);
    analogWrite(YELLOW, MIN);
    button_state = digitalRead(BUTTON);;
    analogWrite(GREEN, MAX);
    delay(DELAY_MS);
    analogWrite(GREEN, MIN);
    button_state = digitalRead(BUTTON);
  }
  button_state = 0;
  while(button_state != CLICKED) {
    analogWrite(GREEN, MAX);
    delay(DELAY_MS);
    analogWrite(GREEN, MIN);
    button_state = digitalRead(BUTTON);
    analogWrite(RED, MAX);
    delay(DELAY_MS);
    analogWrite(RED, MIN);
    button_state = digitalRead(BUTTON);
    analogWrite(YELLOW, MAX);
    delay(DELAY_MS);
    analogWrite(YELLOW, MIN);
    button_state = digitalRead(BUTTON);
    analogWrite(BLUE, MAX);
    delay(DELAY_MS);
    analogWrite(BLUE, MIN);
    button_state = digitalRead(BUTTON);
  }
  button_state = 0;
}
