// C++ code
//

int vm = 8; // declarando variavel vm atribuindo o pino 8
int am = 9; // declarando variavel am atribuindo o pino 9
int vr = 10; // declarando variavel vr atribuindo o pino 10
int vm2 = 5;
int am2 = 6;
int vr2 = 7;


void setup()
{
  pinMode(vm, OUTPUT);//declarando vm saída
  pinMode(am, OUTPUT);//declarando am saída
  pinMode(vr, OUTPUT);//declarando vr saída
  pinMode(vm2, OUTPUT);
  pinMode(am2, OUTPUT);
  pinMode(vr2, OUTPUT);

}

void loop()
{
  digitalWrite(vm, HIGH);
  digitalWrite(am, LOW);
  digitalWrite(vr, LOW);
  digitalWrite(vm2, LOW);
  digitalWrite(am2, LOW);
  digitalWrite(vr2, HIGH);

  delay (5000);

  digitalWrite(am2, HIGH);
  digitalWrite(vr2, LOW);

  delay (2500);

  digitalWrite(vm, LOW);
  digitalWrite(am, LOW);
  digitalWrite(vr, HIGH);
  digitalWrite(vm2, HIGH);
  digitalWrite(am2, LOW);
  digitalWrite(vr2, LOW);

  delay (5000);

  digitalWrite(vm, LOW);
  digitalWrite(am, HIGH);
  digitalWrite(vr, LOW);
  digitalWrite(vm2, HIGH);
  digitalWrite(am2, LOW);
  digitalWrite(vr2, LOW);

  delay (2500);
}