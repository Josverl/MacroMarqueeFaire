#include "togetherforever.h"
#include "driver.h"
#include "text.h"
#include "countdown.h"
//#include "daleks.h"
#include "starfield.h"


void setup()
{    
  ledsetup();
  clear();
}


void loop()
{
  showStarField();

  dryrun();    
    
  //scrollWelcome();
/*  
  showSponsors();

  showDarkness();

  showCountDown();
  showAltText(" BUILD - LEARN - CRAFT - MEET - MAKE !!");

  showAbout();
*/  
}

