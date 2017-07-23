/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * Turkish
 *
 * LCD Menu Messages
 * See also https://github.com/MarlinFirmware/Marlin/wiki/LCD-Language
 *
 */
#ifndef LANGUAGE_TR_H
#define LANGUAGE_TR_H

//#define SIMULATE_ROMFONT
#define DISPLAY_CHARSET_ISO10646_TR

#define WELCOME_MSG                         MACHINE_NAME " haz\xfdr."                                    //haz谋r.
#define MSG_SD_INSERTED                     "SD Yerle\xfeti."                                            //SD Yerle艧ti.
#define MSG_SD_REMOVED                      "SD \xc7\xfdkar\xfdld\xfd."                                  //SD 脟谋kar谋ld谋.
#define MSG_LCD_ENDSTOPS                    "Endstops" // Max length 8 characters                        //Endstops
#define MSG_MAIN                            "Ana"                                                        //Ana
#define MSG_AUTOSTART                       "Otoba\xfelat"                                               //Otoba艧lat
#define MSG_DISABLE_STEPPERS                "Motorlar\xfd Durdur"                                        //Motorlar谋 Durdur
#define MSG_AUTO_HOME                       "Eksenleri S\xfd\x66\xfdrla"                                 //Eksenleri S谋f谋rla
#define MSG_AUTO_HOME_X                     "X S\xfd\x66\xfdrla"                                         //X S谋f谋rla
#define MSG_AUTO_HOME_Y                     "Y S\xfd\x66\xfdrla"                                         //Y S谋f谋rla
#define MSG_AUTO_HOME_Z                     "Z S\xfd\x66\xfdrla"                                         //Z S谋f谋rla
#define MSG_LEVEL_BED_HOMING                "XYZ S\xfd\x66\xfdrlan\xfdyor"                               //XYZ S谋f谋rlan谋yor
#define MSG_LEVEL_BED_WAITING               "Ba\xfelatmak i\xe7in t\xfdkla"                              //Ba艧latmak i莽in t谋kla
#define MSG_LEVEL_BED_NEXT_POINT            "S\xfdradaki Nokta"                                          //S谋radaki Nokta
#define MSG_LEVEL_BED_DONE                  "Seviyeleme Tamam!"                                          //Seviyeleme Tamam!
#define MSG_LEVEL_BED_CANCEL                "\xddptal"                                                   //陌ptal
#define MSG_SET_HOME_OFFSETS                "Offset Ayarla"                                              //Offset Ayarla
#define MSG_HOME_OFFSETS_APPLIED            "Offset Tamam"                                               //Offset Tamam
#define MSG_SET_ORIGIN                      "S\xfd\x66\xfdr Belirle"                                     //S谋f谋r Belirle
#define MSG_PREHEAT_1                       "\xd6n Is\xfdnma PLA"                                        //脰n Is谋nma PLA
#define MSG_PREHEAT_1_N                     MSG_PREHEAT_1 " "                                            // 
#define MSG_PREHEAT_1_ALL                   MSG_PREHEAT_1 " T\xfcm"                                      // T眉m
#define MSG_PREHEAT_1_BEDONLY               MSG_PREHEAT_1 " Tabla"                                       // Tabla
#define MSG_PREHEAT_1_SETTINGS              MSG_PREHEAT_1 " Ayar"                                        // Ayar
#define MSG_PREHEAT_2                       "\xd6n Is\xfdnma ABS"                                        //脰n Is谋nma ABS
#define MSG_PREHEAT_2_N                     MSG_PREHEAT_2 " "                                            // 
#define MSG_PREHEAT_2_ALL                   MSG_PREHEAT_2 " T\xfcm"                                      // T眉m
#define MSG_PREHEAT_2_BEDONLY               MSG_PREHEAT_2 " Tabla"                                       // Tabla
#define MSG_PREHEAT_2_SETTINGS              MSG_PREHEAT_2 " Ayar"                                        // Ayar
#define MSG_COOLDOWN                        "So\xf0ut"                                                   //So臒ut
#define MSG_SWITCH_PS_ON                    "G\xfcc\xfc A\xe7"                                           //G眉c眉 A莽
#define MSG_SWITCH_PS_OFF                   "G\xfcc\xfc Kapat"                                           //G眉c眉 Kapat
#define MSG_EXTRUDE                         "Extrude"                                                    //Extrude
#define MSG_RETRACT                         "Geri \xc7ek"                                                //Geri 脟ek
#define MSG_MOVE_AXIS                       "Eksen Y\xf6net"                                             //Eksenleri Y枚net
#define MSG_LEVEL_BED                       "Tabla Seviyele"                                             //Tabla Seviyele
#define MSG_MOVE_X                          "X"                                                          //X
#define MSG_MOVE_Y                          "Y"                                                          //Y
#define MSG_MOVE_Z                          "Z"                                                          //Z
#define MSG_MOVE_E                          "Ekstruder"                                                  //Ekstruder
#define MSG_MOVE_01MM                       "0.1mm"                                                      //0.1mm
#define MSG_MOVE_1MM                        "1mm"                                                        //1mm
#define MSG_MOVE_10MM                       "10mm"                                                       //10mm
#define MSG_SPEED                           "H\xfdz"                                                     //H谋z
#define MSG_BED_Z                           "Tabla Z"                                                    //Tabla Z
#define MSG_NOZZLE                          "Noz\xfcl"                                                   //Noz眉l
#define MSG_BED                             "Tabla"                                                      //Tabla
#define MSG_FAN_SPEED                       "Fan H\xfdz\xfd"                                             //Fan H谋z谋
#define MSG_FLOW                            "Ak\xfd\xfe"                                                 //Ak谋艧
#define MSG_CONTROL                         "Kontrol"                                                    //Kontrol
#define MSG_MIN                             " " LCD_STR_THERMOMETER " Min"                               // Min
#define MSG_MAX                             " " LCD_STR_THERMOMETER " Max"                               // Max
#define MSG_FACTOR                          " " LCD_STR_THERMOMETER " \xc7\x61rpan"                      // 脟arpan
#define MSG_AUTOTEMP                        "Autotemp"                                                   // Autotemp
#define MSG_ON                              "On "                                                        //On 
#define MSG_OFF                             "Off"                                                        //Off
#define MSG_PID_P                           "PID-P"                                                      //PID-P
#define MSG_PID_I                           "PID-I"                                                      //PID-I
#define MSG_PID_D                           "PID-D"                                                      //PID-D
#define MSG_PID_C                           "PID-C"                                                      //PID-C
#define MSG_SELECT                          "Se\xe7"                                                     //Se莽
#define MSG_ACC                             "\xddvme"                                                    //陌vme
#define MSG_VX_JERK                         "Vx-Jerk"                                                    //Vx-Jerk
#define MSG_VY_JERK                         "Vy-Jerk"                                                    //Vy-Jerk
#define MSG_VZ_JERK                         "Vz-jerk"                                                    //Vz-Jerk
#define MSG_VE_JERK                         "Ve-jerk"                                                    //Ve-Jerk
#define MSG_VMAX                            "Vmax "                                                      //Vmax
#define MSG_VMIN                            "Vmin"                                                       //Vmin
#define MSG_VTRAV_MIN                       "VTrav min"                                                  //Vtrav min
#define MSG_AMAX                            "Amax "                                                      //Amax
#define MSG_A_RETRACT                       "A-retract"                                                  //A-retract
#define MSG_A_TRAVEL                        "A-travel"                                                   //A-travel
#define MSG_XSTEPS                          "Xsteps/mm"                                                  //Xsteps/mm
#define MSG_YSTEPS                          "Ysteps/mm"                                                  //Ysteps/mm
#define MSG_ZSTEPS                          "Zsteps/mm"                                                  //Zsteps/mm
#define MSG_ESTEPS                          "Esteps/mm"                                                  //Esteps/mm
#define MSG_TEMPERATURE                     "S\xfd\x63\x61kl\xfdk"                                       //S谋cakl谋k
#define MSG_MOTION                          "Hareket"                                                    //Hareket
#define MSG_VOLUMETRIC                      "Filaman"                                                    //Filaman
#define MSG_VOLUMETRIC_ENABLED              "E in mm3"                                                   //E in mm3
#define MSG_FILAMENT_DIAM                   "Fil. \xc7\x61p"                                             //Fil. 脟ap
#define MSG_CONTRAST                        "LCD Kontrast"                                               //LCD Kontrast
#define MSG_STORE_EPROM                     "Haf\xfdzaya Al"                                             //Haf谋zaya Al
#define MSG_LOAD_EPROM                      "Haf\xfdzadan Y\xfckle"                                      //Haf谋zadan Y眉kle
#define MSG_RESTORE_FAILSAFE                "Fabrika Ayarlar\xfd"                                        //Fabrika Ayarlar谋
#define MSG_REFRESH                         "Yenile"                                                     //Yenile
#define MSG_WATCH                           "Bilgi Ekran\xfd"                                            //Bilgi Ekran谋
#define MSG_PREPARE                         "Haz\xfdrl\xfdk"                                             //Haz谋rl谋k
#define MSG_TUNE                            "Ayar"                                                       //Ayar
#define MSG_PAUSE_PRINT                     "Duraklat"                                                   //Duraklat
#define MSG_RESUME_PRINT                    "S\xfcrd\xfcr"                                               //S眉rd眉r
#define MSG_STOP_PRINT                      "Durdur"                                                     //Durdur
#define MSG_CARD_MENU                       "SD den Yazd\xfdr"                                           //SD den Yazd谋r
#define MSG_NO_CARD                         "SD Kart Yok"                                                //SD Kart Yok
#define MSG_DWELL                           "Uyku..."                                                    //Uyku...
#define MSG_USERWAIT                        "Operat\xf6r bekleniyor..."                                  //Operat枚r bekleniyor...
#define MSG_RESUMING                        "Bask\xfd S\xfcrd\xfcr\xfcl\xfcyor"                          //Bask谋 S眉rd眉r眉l眉yor
#define MSG_PRINT_ABORTED                   "Bask\xfd Durduruldu"                                        //Bask谋 Durduruldu
#define MSG_NO_MOVE                         "\xdd\xfelem yok."                                           //陌艧lem yok.
#define MSG_KILLED                          "Kilitlendi. "                                               //Kilitlendi.
#define MSG_STOPPED                         "Durdu. "                                                    //Durdu.
#define MSG_CONTROL_RETRACT                 "Geri \xc7ek mm"                                             //Geri 脟ek mm
#define MSG_CONTROL_RETRACT_SWAP            "Swap Re.mm"                                                 //Swap Re.mm
#define MSG_CONTROL_RETRACTF                "Geri \xc7ekme  V"                                           //Geri 脟ekme V
#define MSG_CONTROL_RETRACT_ZLIFT           "Hop mm"                                                     //Hop mm
#define MSG_CONTROL_RETRACT_RECOVER         "UnRet +mm"                                                  //UnRet +mm
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    "S UnRet+mm"                                                 //S UnRet+mm
#define MSG_CONTROL_RETRACT_RECOVERF        "UnRet  V"                                                   //UnRet V
#define MSG_AUTORETRACT                     "AutoRetr."                                                  //AutoRetr.
#define MSG_FILAMENTCHANGE                  "Filaman De\xf0i\xfetir"                                     //Filaman De臒i艧tir
#define MSG_INIT_SDCARD                     "Init. SD"                                                   //Init. SD
#define MSG_CNG_SDCARD                      "SD De\xf0i\xfetir"                                          //SD De臒i艧tir
#define MSG_ZPROBE_OUT                      "Z Prob A\xe7\xfdk. Tabla"                                   //Z Prob A莽谋k. Tabla
#define MSG_BLTOUCH_SELFTEST                "BLTouch Self-Test"                                          //BLTouch Self-Test
#define MSG_BLTOUCH_RESET                   "S\xfd\x66\xfdrla BLTouch"                                   //S谋f谋rla BLTouch
#define MSG_HOME                            "S\xfd\x66\xfdrla"                                           //S谋f谋rla
#define MSG_FIRST                           "\xf6nce"                                                    //脰nce
#define MSG_ZPROBE_ZOFFSET                  "Z Offset"                                                   //Z Offset
#define MSG_BABYSTEP_X                      "Miniad\xfdm X"                                              //Miniad谋m X
#define MSG_BABYSTEP_Y                      "Miniad\xfdm Y"                                              //Miniad谋m Y
#define MSG_BABYSTEP_Z                      "Miniad\xfdm Z"                                              //Miniad谋m Z
#define MSG_ENDSTOP_ABORT                   "Endstop iptal"                                              //Endstop iptal
#define MSG_HEATING_FAILED_LCD              "Is\xfdnma ba\xfe\x61\x72\xfds\xfdz"                         //Is谋nma ba艧ar谋s谋z
#define MSG_ERR_REDUNDANT_TEMP              "Hata: Ge\xe7ersiz S\xfd\x63akl\xfdk"                        //Hata: Ge莽ersiz S谋cakl谋k
#define MSG_THERMAL_RUNAWAY                 "TERMAL PROBLEM"                                             //TERMAL PROBLEM
#define MSG_ERR_MAXTEMP                     "Hata: MAXSICAKLIK"                                          //Hata: MAXSICAKLIK
#define MSG_ERR_MINTEMP                     "Hata: MINSICAKLIK"                                          //Hata: MINSICAKLIK
#define MSG_ERR_MAXTEMP_BED                 "Hata: MAXSIC. TABLA"                                        //Hata: MAXSIC. TABLA
#define MSG_ERR_MINTEMP_BED                 "Hata: MINSIC. TABLA"                                        //Hata: MINSIC. TABLA
#define MSG_ERR_Z_HOMING                    "G28 Z Yap\xfdlamaz"                                         //G28 Z Yap谋lamaz
#define MSG_HALTED                          "YAZICI DURDURULDU"                                          //YAZICI DURDURULDU
#define MSG_PLEASE_RESET                    "L\xfctfen resetleyin"                                       //L眉tfen resetleyin
#define MSG_SHORT_DAY                       "G" // One character only                                    //G
#define MSG_SHORT_HOUR                      "S" // One character only                                    //S
#define MSG_SHORT_MINUTE                    "D" // One character only                                    //D
#define MSG_HEATING                         "Is\xfdn\xfdyor..."                                          //Is谋n谋yor...
#define MSG_HEATING_COMPLETE                "Is\xfdnma tamam."                                           //Is谋nma tamam.
#define MSG_BED_HEATING                     "Tabla Is\xfdn\xfdyor."                                      //Tabla Is谋n谋yor.
#define MSG_BED_DONE                        "Tabla haz\xfdr."                                            //Tabla haz谋r.
#define MSG_DELTA_CALIBRATE                 "Delta Kalibrasyonu"                                         //Delta Kalibrasyonu
#define MSG_DELTA_CALIBRATE_X               "Ayarla X"                                                   //Ayarla X
#define MSG_DELTA_CALIBRATE_Y               "Ayarla Y"                                                   //Ayarla Y
#define MSG_DELTA_CALIBRATE_Z               "Ayarla Z"                                                   //Ayarla Z
#define MSG_DELTA_CALIBRATE_CENTER          "Ayarla Merkez"                                              //Ayarla Merkez

#define MSG_INFO_MENU                       "Yaz\xfd\x63\xfd Hakk\xfdnda"                                //Yaz谋c谋 Hakk谋nda
#define MSG_INFO_PRINTER_MENU               "Yaz\xfd\x63\xfd Bilgisi"                                    //Yaz谋c谋 Bilgisi
#define MSG_INFO_STATS_MENU                 "\xddstatistikler"                                           //陌statistikler
#define MSG_INFO_BOARD_MENU                 "Kontrol\xf6r Bilgisi"                                       //Kontrol Bilgisi
#define MSG_INFO_THERMISTOR_MENU            "Termist\xf6rler"                                            //Termist枚rler
#define MSG_INFO_EXTRUDERS                  "Ekstruderler"                                               //Ekstruderler
#define MSG_INFO_BAUDRATE                   "\xddleti\xfeim H\xfdz\xfd"                                  //陌leti艧im H谋z谋
#define MSG_INFO_PROTOCOL                   "Protokol"                                                   //Protokol
#define MSG_LIGHTS_ON                       "Ayd\xfdnlatmay\xfd A\xe7"                                   //Ayd谋nlatmay谋 A莽
#define MSG_LIGHTS_OFF                      "Ayd\xfdnlatmay\xfd Kapa"                                    //Ayd谋nlaymay谋 Kapa

#if LCD_WIDTH > 19
  #define MSG_INFO_PRINT_COUNT              "Bask\xfd Say\xfds\xfd"                                      //Bask谋 Say谋s谋
  #define MSG_INFO_COMPLETED_PRINTS         "Tamamlanan"                                                 //Tamamlanan
  #define MSG_INFO_PRINT_TIME               "Toplam Bask\xfd S\xfcresi"                                  //Toplam Bask谋 S眉resi
  #define MSG_INFO_PRINT_LONGEST            "En Uzun Bask\xfd S\xfcresi"                                 //En Uzun Bask谋 S眉resi
  #define MSG_INFO_PRINT_FILAMENT           "Toplam Filaman"                                             //Toplam Filaman
#else
  #define MSG_INFO_PRINT_COUNT              "Bask\xfd"                                                   //Bask谋
  #define MSG_INFO_COMPLETED_PRINTS         "Tamamlanan"                                                 //Tamamlanan
  #define MSG_INFO_PRINT_TIME               "S\xfcre"                                                    //S眉re
  #define MSG_INFO_PRINT_LONGEST            "En Uzun"                                                    //En Uzun
  #define MSG_INFO_PRINT_FILAMENT           "Filaman"                                                    //Filaman
#endif

#define MSG_INFO_MIN_TEMP                   "Min S\xfd\x63."                                             //Min S谋cak.
#define MSG_INFO_MAX_TEMP                   "Max S\xfd\x63."                                             //Max S谋cak.
#define MSG_INFO_PSU                        "G\xfc\xe7 Kayna\xf0\xfd"                                    //G眉莽 Kayna臒谋

#define MSG_DRIVE_STRENGTH                  "\x53\xfc\x72\xfc\x63\xfc \x47\xfc\x63\xfc"                  //S眉r眉c眉 G眉c眉
#define MSG_DAC_PERCENT                     "\x53\xfc\x72\xfc\x63\xfc %"                                 //S眉r眉c眉 %
#define MSG_DAC_EEPROM_WRITE                "DAC\x27\xfd EEPROM\x27\x61 Yaz"                             //DAC'谋 EEPROM'a Yaz
#define MSG_FILAMENT_CHANGE_HEADER          "Filaman De\xf0i\xfetir"                                     //Filaman De臒i艧tir
#define MSG_FILAMENT_CHANGE_OPTION_HEADER   "Se\xe7enekler:"                                             //Se莽enekler:
#define MSG_FILAMENT_CHANGE_OPTION_EXTRUDE  "Daha Ak\xfdt"                                               //Daha Ak谋t
#define MSG_FILAMENT_CHANGE_OPTION_RESUME   "Bask\xfdy\xfd s\xfcrd\xfcr"                                 //Bask谋y谋 s眉rd眉r

#if LCD_HEIGHT >= 4
  // Up to 3 lines allowed
  #define MSG_FILAMENT_CHANGE_INIT_1          "Ba\xfelama bekleniyor"                                    //Ba艧lama bekleniyor
  #define MSG_FILAMENT_CHANGE_INIT_2          "filaman\xfdn"                                             //filaman谋n
  #define MSG_FILAMENT_CHANGE_INIT_3          "de\xf0i\xfeimi"                                           //de臒i艧imi
  #define MSG_FILAMENT_CHANGE_UNLOAD_1        "Bekleniyor"                                               //Bekleniyor
  #define MSG_FILAMENT_CHANGE_UNLOAD_2        "filaman\xfdn \xe7\xfdkmas\xfd"                            //filaman谋n 莽谋kmas谋
  #define MSG_FILAMENT_CHANGE_INSERT_1        "Filaman\xfd y\xfckle"                                     //Filaman谋 y眉kle
  #define MSG_FILAMENT_CHANGE_INSERT_2        "ve devam i\xe7in"                                         //ve devam i莽in
  #define MSG_FILAMENT_CHANGE_INSERT_3        "tu\xfea bas..."                                           //tu艧a bas...
  #define MSG_FILAMENT_CHANGE_LOAD_1          "Bekleniyor"                                               //Bekleniyor
  #define MSG_FILAMENT_CHANGE_LOAD_2          "filaman\xfdn y\xfcklenmesi"                               //filaman谋n y眉klenmesi
  #define MSG_FILAMENT_CHANGE_EXTRUDE_1       "Bekleniyor"                                               //Bekleniyor
  #define MSG_FILAMENT_CHANGE_EXTRUDE_2       "filaman akmas\xfd"                                        //filaman akmas谋
  #define MSG_FILAMENT_CHANGE_RESUME_1        "Bask\xfdn\xfdn s\xfcrd\xfcr\xfclmesini"                   //Bask谋n谋n s眉rd眉r眉lmesini
  #define MSG_FILAMENT_CHANGE_RESUME_2        "bekle"                                                    //bekle
#else // LCD_HEIGHT < 4
  // Up to 2 lines allowed
  #define MSG_FILAMENT_CHANGE_INIT_1          "L\xfctfen bekleyiniz..."                                  //L眉tfen bekleyiniz...
  #define MSG_FILAMENT_CHANGE_UNLOAD_1        "\xc7\xfdkart\xfdl\xfdyor..."                              //脟谋kart谋l谋yor...
  #define MSG_FILAMENT_CHANGE_INSERT_1        "Y\xfckle ve bas"                                          //Y眉kle ve bas
  #define MSG_FILAMENT_CHANGE_LOAD_1          "Y\xfckl\xfcyor..."                                        //Y眉kl眉yor...
  #define MSG_FILAMENT_CHANGE_EXTRUDE_1       "Ak\xfdt\xfdl\xfdyor..."                                   //Ak谋t谋l谋yor...
  #define MSG_FILAMENT_CHANGE_RESUME_1        "S\xfcrd\xfcr\xfcl\xfcyor..."                              //S眉rd眉r眉l眉yor...
#endif // LCD_HEIGHT < 4

#endif // LANGUAGE_TR_H

