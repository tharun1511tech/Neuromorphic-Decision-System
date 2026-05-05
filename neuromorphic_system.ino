// -------- PINS --------
int IR = 6;
int TRANSISTOR = 10;

int LED1 = 2;
int LED2 = 4;

// -------- NEURON STATES --------
float N1 = 0;
float N2 = 0;

// -------- PARAMETERS --------
float decay = 0.7;
float threshold = 3.5;

void setup() {
  Serial.begin(115200);

  pinMode(IR, INPUT);
  pinMode(TRANSISTOR, INPUT);

  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);

  // seed randomness
  randomSeed(analogRead(1));
}

void loop() {

  // -------- DECAY (memory leak) --------
  N1 *= decay;
  N2 *= decay;

  // -------- INPUTS --------
  int ir_val = digitalRead(IR);
  int transistor_val = digitalRead(TRANSISTOR);

  // IR gives strong stimulus
  if (ir_val == HIGH) {
    N1 += 2;
    N2 += 2;
  }

  // transistor gives small influence
  if (transistor_val == HIGH) {
    N1 += 0.5;
  }

  // -------- RANDOM NOISE --------
  int noise = random(0, 100);

  if (noise > 95) {
    N1 += 1;
  }
  if (noise < 5) {
    N2 += 1;
  }

  // -------- COMPETITION (winner-take-all) --------
  if (N1 > N2) {
    N2 *= 0.3;   // suppress N2
  } else {
    N1 *= 0.3;   // suppress N1
  }

  // -------- OUTPUT --------
  if (N1 > threshold && N1 > N2) {
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, LOW);
  }
  else if (N2 > threshold && N2 > N1) {
    digitalWrite(LED2, HIGH);
    digitalWrite(LED1, LOW);
  }
  else {
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
  }

  // -------- SERIAL DEBUG --------
  Serial.print("N1: ");
  Serial.print(N1);

  Serial.print(" | N2: ");
  Serial.print(N2);

  Serial.print(" | IR: ");
  Serial.print(ir_val);

  Serial.print(" | Transistor: ");
  Serial.print(transistor_val);

  Serial.print(" | Noise: ");
  Serial.print(noise);

  Serial.println();

  delay(100);
}
