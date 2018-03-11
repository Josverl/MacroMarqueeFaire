#include "driver.h"
#include "text.h"
#include "countdown.h"
#include "starfield.h"
#include "daleks.h"

void setup()
{    
  ledsetup();
  clear();
}



void scrollWelcome()
{
  const char* welcome = "The Betty Brinn Children's Museum and Milwaukee Makerspace Welcome You To Maker Faire Milwaukee";
  scrollText(welcome);
}


void showAbout()
{
  const char* text = "This NeoPixel sign was designed and built by Marcin Polewski from Milwaukee Makerspace with an Arduino Uno connected to 2,492 LEDs using the bit banging technique. See the Milwaukee Makerspace booth in the light room for more info.";
  scrollText(text, true);
}

void scrollDarkness()
{
  const char* darkness =  "ENTER THE DARKNESS: The Knight vs. Tesla * Music * Digital Technology * Games * High Voltage Devices * Lasers and Optics * Black Light Exhibits";
  scrollText(darkness, true);
}

void loop()
{
  const char* txtAbout = "In Together Forever zien wij hoe een onschuldig idee uitgroeide tot media imperium met alle gevolgen van dien ... ";
  const char* text1 =  " Together Forever";
  const char* text2 =  " 123456789012345678901234567890";
  showStaticText(text1, 5*1000);
  showStaticText(text2, 10*1000);
  clear();
  scrollText(txtAbout, true);

  //scrollWelcome();
/*  
  showStarField();
  showSponsors();

  showDarkness();

  showCountDown();
  showAltText(" BUILD - LEARN - CRAFT - MEET - MAKE !!");

  showAbout();
*/  
}

