#if defined(__AVR_ATmega1280__) || defined(__AVR_ATmega2560__)
#define ARDUINO_MEGA
#elif defined(__AVR_AT90USB646__)
#define TEENSY_PLUS_PLUS
#elif defined(__AVR_ATmega32U4__)
#define TEENSY_2
#elif defined(__AVR_AT90USB1286__)
#define TEENSY_PLUS_PLUS_2
#else
#define ARDUINO
#endif


//#define DEBUG

#define MIDI_FIGHTER

//#define FASTADC
// defines for setting and clearing register bits
#ifndef cbi
#define cbi(sfr, bit) (_SFR_BYTE(sfr) &= ~_BV(bit))
#endif
#ifndef sbi
#define sbi(sfr, bit) (_SFR_BYTE(sfr) |= _BV(bit))
#endif

// MIDI mapping - http://www.nortonmusic.com/midi_cc.html
#define MIDI_CC_MODULATION 0x01
#define MIDI_CC_BREATH 0x02
#define MIDI_CC_VOLUME 0x07
#define MIDI_CC_BALANCE 0x08
#define MIDI_CC_PAN 0x0A
#define MIDI_CC_EXPRESSION 0x0B
#define MIDI_CC_EFFECT1 0x0C
#define MIDI_CC_EFFECT2 0x0D

#define MIDI_CC_GENERAL1 0x0E
#define MIDI_CC_GENERAL2 0x0F
#define MIDI_CC_GENERAL3 0x10
#define MIDI_CC_GENERAL4 0x11
#define MIDI_CC_GENERAL5 0x12
#define MIDI_CC_GENERAL6 0x13
#define MIDI_CC_GENERAL7 0x14
#define MIDI_CC_GENERAL8 0x15
#define MIDI_CC_GENERAL9 0x16
#define MIDI_CC_GENERAL10 0x17
#define MIDI_CC_GENERAL11 0x18
#define MIDI_CC_GENERAL12 0x19
#define MIDI_CC_GENERAL13 0x1A
#define MIDI_CC_GENERAL14 0x1B
#define MIDI_CC_GENERAL15 0x1C
#define MIDI_CC_GENERAL16 0x1D
#define MIDI_CC_GENERAL17 0x1E
#define MIDI_CC_GENERAL18 0x1F

#define MIDI_CC_GENERAL1_FINE 0x2E
#define MIDI_CC_GENERAL2_FINE 0x2F
#define MIDI_CC_GENERAL3_FINE 0x30
#define MIDI_CC_GENERAL4_FINE 0x31
#define MIDI_CC_GENERAL5_FINE 0x32
#define MIDI_CC_GENERAL6_FINE 0x33
#define MIDI_CC_GENERAL7_FINE 0x34
#define MIDI_CC_GENERAL8_FINE 0x35
#define MIDI_CC_GENERAL9_FINE 0x36
#define MIDI_CC_GENERAL10_FINE 0x37
#define MIDI_CC_GENERAL11_FINE 0x38
#define MIDI_CC_GENERAL12_FINE 0x39
#define MIDI_CC_GENERAL13_FINE 0x3A
#define MIDI_CC_GENERAL14_FINE 0x3B
#define MIDI_CC_GENERAL15_FINE 0x3C
#define MIDI_CC_GENERAL16_FINE 0x3D
#define MIDI_CC_GENERAL17_FINE 0x3E
#define MIDI_CC_GENERAL18_FINE 0x3F

#define MIDI_CC_SUSTAIN 0x40
#define MIDI_CC_REVERB 0x5B
#define MIDI_CC_CHORUS 0x5D
#define MIDI_CC_CONTROL_OFF 0x79
#define MIDI_CC_NOTES_OFF 0x78

#define NOTE_C0 0x00 // 0
#define NOTE_C1 0x12 // 18
#define NOTE_C2 0x24 // 36

#if defined(ARDUINO_MEGA)
  // broj digitalnih inputa. Moze biti izmedu 0 do 68.
  #define NUM_DI 52
  // broj analognih inputa. Moze biti izmedu 0 do 16.
  #define NUM_AI 16
#elif defined(TEENSY_PLUS_PLUS)
  // broj digitalnih inputa. Moze biti izmedu 0 do 46.
  #define NUM_DI 38
  // broj analognih inputa. Moze biti izmedu 0 do 8.
  #define NUM_AI 8
#elif defined(TEENSY_2)
  // broj digitalnih inputa. Moze biti izmedu 0 do 25.
  #define NUM_DI 13
  // broj analognih inputa. Moze biti izmedu 0 do 12.
  #define NUM_AI 12
#elif defined(TEENSY_PLUS_PLUS_2)
  // broj digitalnih inputa. Moze biti izmedu 0 do 46.
  #define NUM_DI 38
  // broj analognih inputa. Moze biti izmedu 0 do 8.
  #define NUM_AI 8
#else
  // broj digitalnih inputa. Moze biti izmedu from 0 do 18.
  #define NUM_DI 12
  // broj analognih inputa. Moze biti izmedu 0 do 16.
  #define NUM_AI 6
#endif



#if defined(MIDI_FIGHTER) && defined(ARDUINO)
  #define MIDI_CHANNEL 3
  // Prva napomena, počevši od donjeg lijevog gumba
  #define NOTE NOTE_C2
  // Prilikom mapiranja na MIDI Fighter moramo preskočiti red gumba. Postavite ovo od 0-3 da definirate koji red ćete preskočiti.
  // Redovi su poredani odozdo prema gore (isto kao i raspored gumba MIDI Fightera).
  #define SKIP_ROW 2
  // Ovaj redoslijed pinova odgovara donjem lijevom gumbu koji je nula, povećava se za jedan dok se krećemo slijeva nadesno, odozdo prema vrhu
  // 8 9 10 11
  // 4 5 6 7
  // 0 1 2 3
  // Ova veličina polja mora odgovarati NUM_DI iznad.
  #define DIGITAL_PIN_ORDER 10, 11, 12, 13, 6, 7, 8, 9, 2, 3, 4, 5
#else
  #define MIDI_CHANNEL 1
  // Prva napomena, počevši od gornjeg lijevog gumba
  #define NOTE NOTE_C0
  // Ovaj redoslijed pinova odgovara gornjem lijevom gumbu koji je nula, povećava se za jedan dok se krećemo slijeva nadesno, odozgo prema dolje
  // 0 1 2 3
  // 4 5 6 7
  // 8 9 10 11
  // Ova veličina polja mora odgovarati NUM_DI iznad.
  #if defined(ARDUINO_MEGA)
    #define DIGITAL_PIN_ORDER 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53
  #elif defined(TEENSY_PLUS_PLUS)
    #define DIGITAL_PIN_ORDER 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37
  #elif defined(TEENSY_2)
    #define DIGITAL_PIN_ORDER 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12
  #elif defined(TEENSY_PLUS_PLUS_2)
    #define DIGITAL_PIN_ORDER 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37
  #else
    #define DIGITAL_PIN_ORDER 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13
  #endif
#endif

#if defined(ARDUINO_MEGA)
  #define ANALOGUE_PIN_ORDER A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15
#elif defined(TEENSY_PLUS_PLUS)
  #define ANALOGUE_PIN_ORDER 0, 1, 2, 3, 4, 5, 6, 7
#elif defined(TEENSY_2)
  #define ANALOGUE_PIN_ORDER 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11
#elif defined(TEENSY_PLUS_PLUS_2)
  #define ANALOGUE_PIN_ORDER 0, 1, 2, 3, 4, 5, 6, 7
#else
  #define ANALOGUE_PIN_ORDER A0, A1, A2, A3, A4, A5
#endif

#if defined(TEENSY_PLUS_PLUS) || defined(TEENSY_2) || defined(TEENSY_PLUS_PLUS_2)
  #define LED_PIN PIN_D6
#else
  #define LED_PIN 13
#endif

#define MIDI_CC MIDI_CC_GENERAL1

// Komentiraj ovu liniju koda za iskljuciti debounce logiku.
#define DEBOUNCE
// Dužina vremena debounca u milisekundama.
#define DEBOUNCE_LENGTH 2

// Komentiraj ovu liniju koda za iskljuciti analog filtering.
#define ANALOGUE_FILTER
// Pokret gumba ili klizača u početku mora premašiti ovu vrijednost da bi se prepoznao kao ulaz. Imajte na umu da jest
// za 7-bitnu (0-127) MIDI vrijednost.
#ifdef FASTADC
#define FILTER_AMOUNT 3
#else
#define FILTER_AMOUNT 2
#endif
// Timeout je u milisekundama.
#define ANALOGUE_INPUT_CHANGE_TIMEOUT 250000

// Niz koji sadrži mapiranje digitalnih pinova u indeks kanala.
byte digitalInputMapping[NUM_DI] = {DIGITAL_PIN_ORDER};

// Niz koji sadrži mapiranje analognih pinova u indeks kanala. Ova veličina polja mora odgovarati NUM_AI iznad.
byte analogueInputMapping[NUM_AI] = {ANALOGUE_PIN_ORDER};

// Sadrži trenutno stanje digitalnih ulaza.
byte digitalInputs[NUM_DI];
// Sadrži trenutnu vrijednost analognih ulaza.
byte analogueInputs[NUM_AI];

// Varijabla za zadržavanje privremenih digitalnih čitanja, koja se koristi za debounce logiku.
byte tempDigitalInput;
// Varijabla za držanje privremenih analognih vrijednosti, koja se koristi za analog filtering logiku.
byte tempAnalogueInput;

// Unaprijed dodijelite indeks petlje for kako ga ne bismo stalno preusmjeravali za svaku iteraciju programa.
byte i = 0;
byte digitalOffset = 0;
// Varijabla za zadržavanje razlike između trenutnih i novih vrijednosti analognog ulaza.
byte analogueDiff = 0;
// Koristi se kao oznaka za označavanje da se analogni ulaz mijenja.
boolean analogueInputChanging[NUM_AI];
// Vrijeme zadnjeg premještanja analognog ulaza
unsigned long analogueInputTimer[NUM_AI];

#ifdef DEBUG
unsigned long loopTime = 0;
unsigned long serialSendTime = 0;
#endif

void setup()
{
  #ifdef FASTADC
    // postavi predskalu na 16
    sbi(ADCSRA,ADPS2) ;
    cbi(ADCSRA,ADPS1) ;
    cbi(ADCSRA,ADPS0) ;
  #endif
  
  // Only enable serial on the Arduino or when debugging. The Teensy board should be set as a usb-midi device so serial is not needed.
  #if defined(ARDUINO) || defined(ARDUINO_MEGA) || defined(DEBUG)
    // Enable serial I/O at 115200 kbps. This is faster than the standard MIDI rate of 31250 kbps.
    // The PC application which we connect to will automatically take the higher sample rate and send MIDI
    // messages out at the correct rate. We only send things faster in case there is any latency.
    Serial.begin(115200);
  #endif
  
  // Pokreni svaki digitalni ulazni kanal.
  for (i = 0; i < NUM_DI; i++)
  {
  // Postavite smjer pina na ulaz.
    pinMode(digitalInputMapping[i], INPUT);

    // Ne omogućavajte pullup otpornik na LED_PIN, jer će ga LED i otpornik uvijek povući nisko, što znači da ulaz neće raditi.
    // Umjesto toga, na LED_PIN-u mora se koristiti vanjski otpornik.
    // NAPOMENA: Ovo će uzrokovati invertiranje cijele logike visokog/niskog nivoa za LED_PIN.
    if (digitalInputMapping[i] != LED_PIN)
    {
      // Omogući pull-up otpornik. Ovaj poziv mora doći nakon gornjeg pinMode poziva.
      digitalWrite(digitalInputMapping[i], HIGH);
    }
    
    // Inicijalizirati digitalno stanje čitanjem na ulaznom pinu.
    digitalInputs[i] = digitalRead(digitalInputMapping[i]);
  }
  
  // Inicijalizirati svaki analogni ulazni kanal.
  for (i = 0; i < NUM_AI; i++)
  {
    // Postavite smjer pina na ulaz.
    pinMode(analogueInputMapping[i], INPUT);
    
    // Inicijalizirajte analognu vrijednost čitanjem na ulaznom pinu.
    analogueInputs[i] = analogRead(analogueInputMapping[i]);
    
    // Pretpostavimo da analogni ulazi nisu aktivni
    analogueInputChanging[i] = false;
    analogueInputTimer[i] = 0;
  }
  
  #ifdef DEBUG
    serialSendTime = millis();
  #endif
}


void loop()
{
  #ifdef DEBUG
    loopTime = micros();
  #endif
  
  for (i = 0; i < NUM_DI; i++)
  {
    #ifdef MIDI_FIGHTER
      if (i >= SKIP_ROW * 4)
      {
        digitalOffset = i + 4;
      }
      else
      {
    #endif
 
    digitalOffset = i;
    
    #ifdef MIDI_FIGHTER
      }
    #endif
    
    // Pročitajte trenutno stanje digitalnog ulaza i privremeno ga pohranite.
    tempDigitalInput = digitalRead(digitalInputMapping[i]);
    
    // Provjerite je li posljednje stanje drugačije od trenutnog.
    if (digitalInputs[i] != tempDigitalInput)
    {
      #ifdef DEBOUNCE
      // Pričekajte kratko vrijeme, a zatim ponovno očitajte s ulaznog pina.
      delay(DEBOUNCE_LENGTH);
      // Ako je drugo čitanje isto kao početno, pretpostavimo da mora biti istinito.
      if (tempDigitalInput == digitalRead(digitalInputMapping[i]))
      {
      #endif
        // Snimite novo stanje digitalnog ulaza.
        digitalInputs[i] = tempDigitalInput;
        
        // Premješteno iz HIGH u LOW (tipka pritisnuta)
        if (digitalInputs[i] == 0)
        {
          // Svi digitalni ulazi koriste pullup otpornike, osim LED_PIN pa je logika invertirana
          if (digitalInputMapping[i] != LED_PIN)
          {
            noteOn(MIDI_CHANNEL, NOTE + digitalOffset, 0x7F); // Channel 1, middle C, maximum velocity
          }
          else
          {
            noteOff(MIDI_CHANNEL, NOTE + digitalOffset); // Channel 1, middle C
          }
        }
        // Pomaknuto iz LOW u HIGH (gumb otpušten)
        else
        {
          // Svi digitalni ulazi koriste pullup otpornike, osim LED_PIN pa je logika invertirana
          if (digitalInputMapping[i] != LED_PIN)
          {
            noteOff(MIDI_CHANNEL, NOTE + digitalOffset); // Channel 1, middle C
          }
          else
          {
            noteOn(MIDI_CHANNEL, NOTE + digitalOffset, 0x7F); // Channel 1, middle C, maximum velocity
          }
        }
      #ifdef DEBOUNCE
      }
      #endif
    }
  }
  
  /*
   * Logika analognog ulaza:
   * Arduino koristi 10-bitni (0-1023) analogno-digitalni pretvarač (ADC) na svakom od svojih analognih ulaza.
   * ADC nije vrlo visoke rezolucije, pa ako je lonac u položaju takvom da je izlazni napon 'između'
   * ono što može detektirati (recimo 2,505V ili oko 512,5 na skali od 0-1023) tada će očitana vrijednost stalno
   * fluktuirati između dva cijela broja (u ovom slučaju 512 i 513).
   *
   * Ako jednostavno tražimo promjenu u vrijednosti analognog ulaza kao u gore navedenom digitalnom slučaju, onda
   * bit će slučajeva u kojima se vrijednost uvijek mijenja, iako se fizički ulaz ne pomiče.
   * Ovo će zauzvrat poslati stalan tok MIDI poruka povezanom softveru što može biti problematično.
   *
   * Za borbu protiv toga, zahtijevamo da se vrijednost analognog ulaza mora promijeniti za određeni iznos praga prije
   * registriramo da se zapravo mijenja. Ovo je dobro za izbjegavanje konstantne fluktuirajuće vrijednosti, ali ima
   * negativan učinak smanjene ulazne rezolucije. Na primjer, ako je iznos praga bio 2 i mi smo se polako kretali
   * klizač kroz cijeli raspon, mi bismo detektirali samo svaku drugu vrijednost kao promjenu, zapravo smanjujući vrijednost
   * već mala 7-bitna MIDI vrijednost u 6-bitnu MIDI vrijednost.
   *
   * Da biste zaobišli ovaj problem, ali i dalje koristili logiku praga, koristi se mjerač vremena. U početku analogni ulaz
   * mora premašiti prag da bi se detektirao kao ulaz. Kada se to dogodi, čitamo svaku vrijednost koja dolazi iz
   * analogni ulaz (ne samo oni koji prelaze prag) koji nam daje punu 7-bitnu rezoluciju. U isto vrijeme
   * mjerač vremena je pokrenut. Ovaj mjerač vremena koristi se za praćenje je li neki ulaz pomaknut određeno vrijeme
   * točka. Ako je pomaknut, mjerač vremena se ponovno pokreće. Ako ne dođe do pomaka, timer je samo ostavljen da radi. Kada
   * timer istekne, pretpostavlja se da se analogni ulaz više ne pomiče. Naknadni pokreti moraju premašiti
   * iznos praga.
   */
  for (i = 0; i < NUM_AI; i++)
  {
    // Pročitajte pin analognog ulaza, dijeleći ga s 8 tako da se 10-bitna ADC vrijednost (0-1023) pretvara u 7-bitnu MIDI vrijednost (0-127).
    tempAnalogueInput = analogRead(analogueInputMapping[i]) / 8;
    
    #ifdef ANALOGUE_FILTER
    // Uzmi apsolutnu vrijednost razlike između trenutne i nove vrijednosti 
    analogueDiff = abs(tempAnalogueInput - analogueInputs[i]);
    // Nastavi samo ako je prag premašen ili se unos već mijenjao
    if ((analogueDiff > 0 && analogueInputChanging[i] == true) || analogueDiff >= FILTER_AMOUNT)
    {
      // Ponovno pokrenite mjerač vremena samo ako smo sigurni da unos nije 'između' vrijednosti
      // tj. Premješteno je više od FILTER_AMOUNT
      if (analogueInputChanging[i] == false || analogueDiff >= FILTER_AMOUNT)
      {
        // Resetirajte zadnji put kada je ulaz pomaknut
        analogueInputTimer[i] = micros();
        
        // Analogni ulaz se pomiče
        analogueInputChanging[i] = true;
      }
      else if (micros() - analogueInputTimer[i] > ANALOGUE_INPUT_CHANGE_TIMEOUT)
      {
        analogueInputChanging[i] = false;
      }
      
      // Šaljite podatke samo ako znamo da se analogni ulaz pomiče
      if (analogueInputChanging[i] == true)
      {
        // Zabilježite novu analognu vrijednost
        analogueInputs[i] = tempAnalogueInput;
      
        // Pošaljite analognu vrijednost na opći MIDI CC (pogledajte definicije na početku ove datoteke)
        controlChange(MIDI_CHANNEL, MIDI_CC + i, analogueInputs[i]);
      }
    }
    #else
    if (analogueInputs[i] != tempAnalogueInput)
    {
      // Zabilježite novu analognu vrijednost
      analogueInputs[i] = tempAnalogueInput;
      
      // Pošaljite analognu vrijednost na opći MIDI CC (pogledajte definicije na početku ove datoteke)
      controlChange(MIDI_CHANNEL, MIDI_CC + i, analogueInputs[i]);
    }
    #endif
  }
  
  #ifdef DEBUG
  loopTime = micros() - loopTime;
  
  // Ispis vremena izvršavanja petlje jednom u sekundi
  if (millis() - serialSendTime > 1000)
  {
    Serial.print("Loop execution time (us): ");
    Serial.println(loopTime);
    
    serialSendTime = millis();
  }
  #endif
}

// Pošaljite MIDI bilješku u poruci
void noteOn(byte channel, byte pitch, byte velocity)
{
  // 0x90 je prva od 16 bilješki o kanalima. Oduzmite jedan da biste prešli s MIDI-jevih 1-16 kanala na 0-15
  channel += 0x90 - 1;
  
  // Osigurajte da smo između kanala 1 i 16 za bilješku o poruci
  if (channel >= 0x90 && channel <= 0x9F)
  {
    #ifdef DEBUG
      Serial.print("Button pressed: ");
      Serial.println(pitch);
    #elif defined(TEENSY_PLUS_PLUS) || defined(TEENSY_2) || defined(TEENSY_PLUS_PLUS_2)
      usbMIDI.sendNoteOn(pitch, velocity, channel);
    #else
      Serial.write(channel);
      Serial.write(pitch);
      Serial.write(velocity);
    #endif
  }
}
// Pošalji poruku o isključenju MIDI note
void noteOff(byte channel, byte pitch)
{
  // 0x80 je prvi od 16 note off kanala. Oduzmite jedan da biste prešli s MIDI-jevih 1-16 kanala na 0-15
  channel += 0x80 - 1;
  
  // Osigurajte da smo između kanala 1 i 16 za poruku o isključenju bilješke
  if (channel >= 0x80 && channel <= 0x8F)
  {
    #ifdef DEBUG
      Serial.print("Button released: ");
      Serial.println(pitch);
    #elif defined(TEENSY_PLUS_PLUS) || defined(TEENSY_2) || defined(TEENSY_PLUS_PLUS_2)
      usbMIDI.sendNoteOff(pitch, 0x00, channel);
    #else 
      Serial.write(channel);
      Serial.write(pitch);
      Serial.write((byte)0x00);
    #endif
  }
}

// Pošalji poruku o promjeni MIDI kontrole
void controlChange(byte channel, byte control, byte value)
{
  // 0xB0 je prvi od 16 kanala promjene kontrole. Oduzmite jedan da biste prešli s MIDI-jevih 1-16 kanala na 0-15
  channel += 0xB0 - 1;
  
  // Osigurajte da smo između kanala 1 i 16 za CC poruku
  if (channel >= 0xB0 && channel <= 0xBF)
  {
    #ifdef DEBUG
      Serial.print(control - MIDI_CC);
      Serial.print(": ");
      Serial.println(value);
    #elif defined(TEENSY_PLUS_PLUS) || defined(TEENSY_2) || defined(TEENSY_PLUS_PLUS_2)
      usbMIDI.sendControlChange(control, value, channel);
    #else
      Serial.write(channel);
      Serial.write(control);
      Serial.write(value);
    #endif
  }
}
