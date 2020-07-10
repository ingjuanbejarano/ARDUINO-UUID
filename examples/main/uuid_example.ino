#include "uuid.h"

uuid_t uu, uu2;
char uu_str[UUID_STR_LEN];

void setup()
{
    Serial.begin(115200); // for M5Stack must be this baud rate
}

void loop()
{
    // Generate the UUID buffer and unparse to a String
    uuid_generate(uu);
    uuid_unparse(uu, uu_str);
    // Print the string on serial monitor
    Serial.print("UUID: ");
    Serial.println(uu_str);
    delay(1000);
}
