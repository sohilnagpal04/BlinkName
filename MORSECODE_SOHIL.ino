/*SIT210 EMBEDDED SYSTEMS DEVELOPMENT
 * NAME : SOHIL NAGPAL 
 * STUDENT ID : 2110994793
 * TASK : 2.1P
 */
 
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void dot_morsecode()
{
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);                       // wait for half second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(500);
}

void dash_morsecode()
{
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1500);                       // wait for one and a half seconds
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(500);
  
}

void S()
{
  dot_morsecode();
  dot_morsecode();
  dot_morsecode();
}

void O()
{
  dash_morsecode();
  dash_morsecode();
  dash_morsecode();
}

void H()
{
  dot_morsecode();
  dot_morsecode();
  dot_morsecode();
  dot_morsecode();
}

void I()
{
  dot_morsecode();
  dot_morsecode();
}

void L()
{
  dot_morsecode();
  dash_morsecode();
  dot_morsecode();
  dot_morsecode();
}

void loop() 
{
  //First Name : SOHIL
  
  S();
  O();
  H();
  I();
  L();
  
}
