/* Welcome to DmxSimple. This library allows you to control DMX stage and
** architectural lighting and visual effects easily from Arduino. DmxSimple
** is compatible with the Tinker.it! DMX shield and all known DIY Arduino
** DMX control circuits.
**
** DmxSimple is available from: http://code.google.com/p/tinkerit/
** Help and support: http://groups.google.com/group/dmxsimple       */

/* To use DmxSimple, you will need the following line. Arduino will
** auto-insert it if you select Sketch > Import Library > DmxSimple. */

#include <DmxSimple.h>

int po1  = 0;
int po2  = 0;
int po3  = 0;
int po4  = 0;
int po5  = 0;
int po6  = 0;
int po7  = 0;
int po8  = 0;
int po9  = 0;
int po10  = 0;
int po11  = 0;
int po12  = 0;
int po13  = 0;
int po14  = 0;
int po15  = 0;
int po16  = 0;

int pro1 = LOW;
int pro2 = LOW;
int proled1 = 22;
int proled2 = 23;

void setup() {
  /* The most common pin for DMX output is pin 3, which DmxSimple
  ** uses by default. If you need to change that, do it here. */
  Serial.begin (9600); 
  DmxSimple.usePin(3);

  /* DMX devices typically need to receive a complete set of channels
  ** even if you only need to adjust the first channel. You can
  ** easily change the number of channels sent here. If you don't
  ** do this, DmxSimple will set the maximum channel number to the
  ** highest channel you DmxSimple.write() to. */
  DmxSimple.maxChannel(512);
}

void loop() {
    
    pro1 = digitalRead (2);
    pro2 = digitalRead (3);
    
    
    po1  = analogRead (0)/4;
    

    if (pro1 == HIGH){                           //projecteur 1
      DmxSimple.write(1, po1);
      DmxSimple.write(2, po2);
      DmxSimple.write(3, po3);
      DmxSimple.write(4, po4);
      DmxSimple.write(5, po5);
      DmxSimple.write(6, po6);
      DmxSimple.write(7, po7);
      DmxSimple.write(8, po8);
      DmxSimple.write(9, po9);
      DmxSimple.write(10, po10);
      DmxSimple.write(11, po11);
      DmxSimple.write(12, po12);
      DmxSimple.write(13, po13);
      DmxSimple.write(14, po14);
      DmxSimple.write(15, po15);
      DmxSimple.write(16, po16);
    }
    else{
      digitalWrite (proled1,LOW);
    }

    if (pro2 == HIGH){                          //projecteur 2
      DmxSimple.write(17, po1);
      DmxSimple.write(18, po2);
      DmxSimple.write(19, po3);
      DmxSimple.write(20, po4);
      DmxSimple.write(21, po5);
      DmxSimple.write(22, po6);
      DmxSimple.write(23, po7);
      DmxSimple.write(24, po8);
      DmxSimple.write(25, po9);
      DmxSimple.write(26, po10);
      DmxSimple.write(27, po11);
      DmxSimple.write(28, po12);
      DmxSimple.write(29, po13);
      DmxSimple.write(30, po14);
      DmxSimple.write(31, po15);
      DmxSimple.write(32, po16);
    }
    else{
      digitalWrite (proled2,LOW);
    }


    if (pro3 == HIGH){                          //projecteur 3
      DmxSimple.write(33, po1);
      DmxSimple.write(34, po2);
      DmxSimple.write(35, po3);
      DmxSimple.write(36, po4);
      DmxSimple.write(37, po5);
      DmxSimple.write(38, po6);
      DmxSimple.write(39, po7);
      DmxSimple.write(40, po8);
      DmxSimple.write(41, po9);
      DmxSimple.write(42, po10);
      DmxSimple.write(43, po11);
      DmxSimple.write(44, po12);
      DmxSimple.write(45, po13);
      DmxSimple.write(46, po14);
      DmxSimple.write(47, po15);
      DmxSimple.write(48, po16);
    }
    else{
      digitalWrite (proled3,LOW);
    }
    

   if (pro4 == HIGH){                          //projecteur 4
      DmxSimple.write(49, po1);
      DmxSimple.write(50, po2);
      DmxSimple.write(51, po3);
      DmxSimple.write(52, po4);
      DmxSimple.write(53, po5);
      DmxSimple.write(54, po6);
      DmxSimple.write(55, po7);
      DmxSimple.write(56, po8);
      DmxSimple.write(57, po9);
      DmxSimple.write(58, po10);
      DmxSimple.write(59, po11);
      DmxSimple.write(60, po12);
      DmxSimple.write(61, po13);
      DmxSimple.write(62, po14);
      DmxSimple.write(62, po15);
      DmxSimple.write(63, po16);
    }
    else{
      digitalWrite (proled4,LOW);
    }

    
    if (pro5 == HIGH){                          //projecteur 5
      DmxSimple.write(64, po1);
      DmxSimple.write(65, po2);
      DmxSimple.write(66, po3);
      DmxSimple.write(67, po4);
      DmxSimple.write(68, po5);
      DmxSimple.write(69, po6);
      DmxSimple.write(70, po7);
      DmxSimple.write(71, po8);
      DmxSimple.write(72, po9);
      DmxSimple.write(73, po10);
      DmxSimple.write(74, po11);
      DmxSimple.write(75, po12);
      DmxSimple.write(76, po13);
      DmxSimple.write(77, po14);
      DmxSimple.write(78, po15);
      DmxSimple.write(79, po16);
    }
    else{
      digitalWrite (proled2,LOW);
    }

  }
