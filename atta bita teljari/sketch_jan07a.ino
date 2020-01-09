
int teljari=0;
int d1=2;
int d2=3;
int d4=4;
int d8=5;
int d16=6;
int d32=7;
int d64=8;
int d128=9;

bool upp = true;

void setup() {
  for(int i = 2; i < 10; i++)
        pinMode(i, OUTPUT);

}

void loop() {
  digitalWrite(d1, teljari & 1);
  digitalWrite(d2, teljari & 2);
  digitalWrite(d4, teljari & 4);
  digitalWrite(d8, teljari & 8);
  digitalWrite(d16, teljari & 16);
  digitalWrite(d32, teljari & 32); 
  digitalWrite(d64, teljari & 64); 
  digitalWrite(d128, teljari & 128); 
  if (teljari == 255)
     upp = false;
  if (teljari == 0)
     upp = true;

     
  if (upp == true)
      teljari++;
  else
      teljari--;

 delay(100);
}
