
#define SCROLL_DELAY 30
#define SCROLL_MAX_BRIGHTNESS 0x88
#define SCROLL_MIN_BRIGHTNESS 0x20

#include "driver.h"
#include "text.h"


void dryrun()
{
  const char* Aanvang = "Welkom bij Together Forever, dat voor u gespeeld gaat worden door groep 1 van 't Speeltoneel. Wij verzoeken u, uw mobiele telefoon uit te schakelen en niet te fotograferen of te filmen. Wij wensen u een fijne voorstelling." ;
  const char* TweedeProloog = "Een garagebox ... Begin jaren '90 (vroeger dus) voordat alles wat hierop volgt plaatsvond.";
  const char* NaDeReclames = "In een talkshow studio ... 4 maanden geleden";
  const char* scene_2 = "Een woonkamer ... 31 dagen geleden";
  const char* scene_3 = "Een laboratorium ... 30 dagen geleden";
  const char* scene_4 = "In het park ... 30 dagen geleden";
  const char* scene_5 = "In de slaapkamer ... op dit moment";
  const char* scene_6 = "Op een kantoor ... een dag later";
  const char* Intermezzo = "     Intermezzo";
  const char* scene_7 = "In een verlaten donkere parkeergarage ... volgende week"; 
  //Intermezzo (2)
  const char* Pauze = "    -=- Pauze -=- "; 
  // Loop x 10 
  const char* scene_8 = "Op kantoor ... Over twee weken";
  const char* scene_9 = "Een woonkamer ... Een jaar later"; 
  const char* scene_10 = "In een talkshowstudio ... Dezelfde dag"; 
  const char* scene_11 = "In een cel ... Wat later"; 
  const char* scene_12 = "Een TV-opname ... 4 dagen later" ;
  const char* scene_13 = "Een afgelegen garagebox ... Een onheilspellend laat tijdstip.";
  const char* scene_14 =  "Werkkamer van Mark Suikerberg ... Een dag later"; 
  const char* scene_15 =  "Een verzorgingshuis ... Ver in de toekomst";
  const char* CAD = "   CONTROL-ALT-DELETE" ;

  scrollText(Aanvang, true);
  scrollText(TweedeProloog);
  scrollText(NaDeReclames, true);
  scrollText(scene_2, true);
  scrollText(scene_3, true);
  scrollText(scene_4, true);
  scrollText(scene_5, true);
  scrollText(scene_6, true);
  showStaticText(Intermezzo,  5*1000);
  scrollText(scene_7, true);

  showStaticText(Pauze, 5*1000); //5*60*1000);

  scrollText(scene_8, true);
  scrollText(scene_9, true);
  scrollText(scene_10, true);
  scrollText(scene_11, true);
  scrollText(scene_12, true);
  scrollText(scene_13, true);
  showStaticText(Intermezzo,  5*1000);    
  scrollText(scene_14, true);
  scrollText(scene_15, true);
  showStaticText(CAD,  5*1000);
  
}

