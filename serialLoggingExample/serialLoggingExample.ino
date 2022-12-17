/* December 2022 (c) Johannes Ellemose
 * A simple example sketch to illustrate logging information 
 * to a connected pc using python. 
 */

const char startMarker = '<';
const char endMarker = '>';

void setup() {
  Serial.begin(9600);
  delay(200);
  // tell the PC we are ready
  Serial.println("<Arduino is ready>");
}

void loop() {
  Serial.print("This message is not logged!"); 
  
  Serial.print(startMarker); // or Serial.print("<")
  Serial.print("This will be logged!"); 
  Serial.print(","); // Commas to easily export log as CSV
  Serial.print(123); 
  Serial.println(endMarker); // or Serial.print(">");

  delay(1000); 
  Serial.print("<"); 
  Serial.print("This is also logged!>");

  delay(5000); 
}
