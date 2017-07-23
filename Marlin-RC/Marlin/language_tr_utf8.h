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
#ifndef LANGUAGE_TR_UTF_H
#define LANGUAGE_TR_UTF_H

//#define SIMULATE_ROMFONT
#define DISPLAY_CHARSET_ISO10646_TR

#define WELCOME_MSG                         MACHINE_NAME " haz谋r."                                       //haz谋r.
#define MSG_SD_INSERTED                     "SD Yerle艧ti."                                               //SD Yerle艧ti.
#define MSG_SD_REMOVED                      "SD 脟谋kar谋ld谋."                                              //SD 脟谋kar谋ld谋.
#define MSG_LCD_ENDSTOPS                    "Endstops" // Max length 8 characters                        //Endstops
#define MSG_MAIN                            "Ana"                                                        //Ana
#define MSG_AUTOSTART                       "Otoba艧lat"                                                  //Otoba艧lat
#define MSG_DISABLE_STEPPERS                "Motorlar谋 Durdur"                                           //Motorlar谋 Durdur
#define MSG_AUTO_HOME                       "Eksenleri S谋f谋rla"                                          //Eksenleri S谋f谋rla
#define MSG_AUTO_HOME_X                     "X S谋f谋rla"                                                  //X S谋f谋rla
#define MSG_AUTO_HOME_Y                     "Y S谋f谋rla"                                                  //Y S谋f谋rla
#define MSG_AUTO_HOME_Z                     "Z S谋f谋rla"                                                  //Z S谋f谋rla
#define MSG_LEVEL_BED_HOMING                "XYZ S谋f谋rlan谋yor"                                           //XYZ S谋f谋rlan谋yor
#define MSG_LEVEL_BED_WAITING               "Ba艧latmak i莽in t谋kla"                                       //Ba艧latmak i莽in t谋kla
#define MSG_LEVEL_BED_NEXT_POINT            "S谋radaki Nokta"                                             //S谋radaki Nokta
#define MSG_LEVEL_BED_DONE                  "Seviyeleme Tamam!"                                          //Seviyeleme Tamam!
#define MSG_LEVEL_BED_CANCEL                "陌ptal"                                                      //陌ptal
#define MSG_SET_HOME_OFFSETS                "Offset Ayarla"                                              //Offset Ayarla
#define MSG_HOME_OFFSETS_APPLIED            "Offset Tamam"                                               //Offset Tamam
#define MSG_SET_ORIGIN                      "S谋f谋r Belirle"                                              //S谋f谋r Belirle
#define MSG_PREHEAT_1                       "脰n Is谋nma PLA"                                              //脰n Is谋nma PLA
#define MSG_PREHEAT_1_N                     MSG_PREHEAT_1 " "                                            // 
#define MSG_PREHEAT_1_ALL                   MSG_PREHEAT_1 " T眉m"                                         // T眉m
#define MSG_PREHEAT_1_BEDONLY               MSG_PREHEAT_1 " Tabla"                                       // Tabla
#define MSG_PREHEAT_1_SETTINGS              MSG_PREHEAT_1 " Ayar"                                        // Ayar
#define MSG_PREHEAT_2                       "脰n Is谋nma ABS"                                              //脰n Is谋nma ABS
#define MSG_PREHEAT_2_N                     MSG_PREHEAT_2 " "                                            // 
#define MSG_PREHEAT_2_ALL                   MSG_PREHEAT_2 " T眉m"                                         // T眉m
#define MSG_PREHEAT_2_BEDONLY               MSG_PREHEAT_2 " Tabla"                                       // Tabla
#define MSG_PREHEAT_2_SETTINGS              MSG_PREHEAT_2 " Ayar"                                        // Ayar
#define MSG_COOLDOWN                        "So臒ut"                                                      //So臒ut
#define MSG_SWITCH_PS_ON                    "G眉c眉 A莽"                                                    //G眉c眉 A莽
#define MSG_SWITCH_PS_OFF                   "G眉c眉 Kapat"                                                 //G眉c眉 Kapat
#define MSG_EXTRUDE                         "Extrude"                                                    //Extrude
#define MSG_RETRACT                         "Geri 脟ek"                                                   //Geri 脟ek
#define MSG_MOVE_AXIS                       "Eksen Y枚net"                                                //Eksenleri Y枚net
#define MSG_LEVEL_BED                       "Tabla Seviyele"                                             //Tabla Seviyele
#define MSG_MOVE_X                          "X"                                                          //X
#define MSG_MOVE_Y                          "Y"                                                          //Y
#define MSG_MOVE_Z                          "Z"                                                          //Z
#define MSG_MOVE_E                          "Ekstruder"                                                  //Ekstruder
#define MSG_MOVE_01MM                       "0.1mm"                                                      //0.1mm
#define MSG_MOVE_1MM                        "1mm"                                                        //1mm
#define MSG_MOVE_10MM                       "10mm"                                                       //10mm
#define MSG_SPEED                           "H谋z"                                                        //H谋z
#define MSG_BED_Z                           "Tabla Z"                                                    //Tabla Z
#define MSG_NOZZLE                          "Noz眉l"                                                      //Noz眉l
#define MSG_BED                             "Tabla"                                                      //Tabla
#define MSG_FAN_SPEED                       "Fan H谋z谋"                                                   //Fan H谋z谋
#define MSG_FLOW                            "Ak谋艧"                                                       //Ak谋艧
#define MSG_CONTROL                         "Kontrol"                                                    //Kontrol
#define MSG_MIN                             " " LCD_STR_THERMOMETER " Min"                               // Min
#define MSG_MAX                             " " LCD_STR_THERMOMETER " Max"                               // Max
#define MSG_FACTOR                          " " LCD_STR_THERMOMETER " 脟arpan"                            // 脟arpan
#define MSG_AUTOTEMP                        "Autotemp"                                                   // Autotemp
#define MSG_ON                              "On "                                                        //On 
#define MSG_OFF                             "Off"                                                        //Off
#define MSG_PID_P                           "PID-P"                                                      //PID-P
#define MSG_PID_I                           "PID-I"                                                      //PID-I
#define MSG_PID_D                           "PID-D"                                                      //PID-D
#define MSG_PID_C                           "PID-C"                                                      //PID-C
#define MSG_SELECT                          "Se莽"                                                        //Se莽
#define MSG_ACC                             "陌vme"                                                       //陌vme
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
#define MSG_TEMPERATURE                     "S谋cakl谋k"                                                   //S谋cakl谋k
#define MSG_MOTION                          "Hareket"                                                    //Hareket
#define MSG_VOLUMETRIC                      "Filaman"                                                    //Filaman
#define MSG_VOLUMETRIC_ENABLED              "E in mm3"                                                   //E in mm3
#define MSG_FILAMENT_DIAM                   "Fil. 脟ap"                                                   //Fil. 脟ap
#define MSG_CONTRAST                        "LCD Kontrast"                                               //LCD Kontrast
#define MSG_STORE_EPROM                     "Haf谋zaya Al"                                                //Haf谋zaya Al
#define MSG_LOAD_EPROM                      "Haf谋zadan Y眉kle"                                            //Haf谋zadan Y眉kle
#define MSG_RESTORE_FAILSAFE                "Fabrika Ayarlar谋"                                           //Fabrika Ayarlar谋
#define MSG_REFRESH                         "Yenile"                                                     //Yenile
#define MSG_WATCH                           "Bilgi Ekran谋"                                               //Bilgi Ekran谋
#define MSG_PREPARE                         "Haz谋rl谋k"                                                   //Haz谋rl谋k
#define MSG_TUNE                            "Ayar"                                                       //Ayar
#define MSG_PAUSE_PRINT                     "Duraklat"                                                   //Duraklat
#define MSG_RESUME_PRINT                    "S眉rd眉r"                                                     //S眉rd眉r
#define MSG_STOP_PRINT                      "Durdur"                                                     //Durdur
#define MSG_CARD_MENU                       "SD den Yazd谋r"                                              //SD den Yazd谋r
#define MSG_NO_CARD                         "SD Kart Yok"                                                //SD Kart Yok
#define MSG_DWELL                           "Uyku..."                                                    //Uyku...
#define MSG_USERWAIT                        "Operat枚r bekleniyor..."                                     //Operat枚r bekleniyor...
#define MSG_RESUMING                        "Bask谋 S眉rd眉r眉l眉yor"                                         //Bask谋 S眉rd眉r眉l眉yor
#define MSG_PRINT_ABORTED                   "Bask谋 Durduruldu"                                           //Bask谋 Durduruldu
#define MSG_NO_MOVE                         "陌艧lem yok."                                                 //陌艧lem yok.
#define MSG_KILLED                          "Kilitlendi. "                                               //Kilitlendi.
#define MSG_STOPPED                         "Durdu. "                                                    //Durdu.
#define MSG_CONTROL_RETRACT                 "Geri 脟ek mm"                                                //Geri 脟ek mm
#define MSG_CONTROL_RETRACT_SWAP            "Swap Re.mm"                                                 //Swap Re.mm
#define MSG_CONTROL_RETRACTF                "Geri 脟ekme  V"                                              //Geri 脟ekme V
#define MSG_CONTROL_RETRACT_ZLIFT           "Hop mm"                                                     //Hop mm
#define MSG_CONTROL_RETRACT_RECOVER         "UnRet +mm"                                                  //UnRet +mm
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    "S UnRet+mm"                                                 //S UnRet+mm
#define MSG_CONTROL_RETRACT_RECOVERF        "UnRet  V"                                                   //UnRet V
#define MSG_AUTORETRACT                     "AutoRetr."                                                  //AutoRetr.
#define MSG_FILAMENTCHANGE                  "Filaman De臒i艧tir"                                           //Filaman De臒i艧tir
#define MSG_INIT_SDCARD                     "Init. SD"                                                   //Init. SD
#define MSG_CNG_SDCARD                      "SD De臒i艧tir"                                                //SD De臒i艧tir
#define MSG_ZPROBE_OUT                      "Z Prob A莽谋k. Tabla"                                         //Z Prob A莽谋k. Tabla
#define MSG_BLTOUCH_SELFTEST                "BLTouch Self-Test"                                          //BLTouch Self-Test
#define MSG_BLTOUCH_RESET                   "S谋f谋rla BLTouch"                                            //S谋f谋rla BLTouch
#define MSG_HOME                            "S谋f谋rla"                                                    //S谋f谋rla
#define MSG_FIRST                           "枚nce"                                                       //脰nce
#define MSG_ZPROBE_ZOFFSET                  "Z Offset"                                                   //Z Offset
#define MSG_BABYSTEP_X                      "Miniad谋m X"                                                 //Miniad谋m X
#define MSG_BABYSTEP_Y                      "Miniad谋m Y"                                                 //Miniad谋m Y
#define MSG_BABYSTEP_Z                      "Miniad谋m Z"                                                 //Miniad谋m Z
#define MSG_ENDSTOP_ABORT                   "Endstop iptal"                                              //Endstop iptal
#define MSG_HEATING_FAILED_LCD              "Is谋nma ba艧ar谋s谋z"                                           //Is谋nma ba艧ar谋s谋z
#define MSG_ERR_REDUNDANT_TEMP              "Hata: Ge莽ersiz S谋cakl谋k"                                    //Hata: Ge莽ersiz S谋cakl谋k
#define MSG_THERMAL_RUNAWAY                 "TERMAL PROBLEM"                                             //TERMAL PROBLEM
#define MSG_ERR_MAXTEMP                     "Hata: MAXSICAKLIK"                                          //Hata: MAXSICAKLIK
#define MSG_ERR_MINTEMP                     "Hata: MINSICAKLIK"                                          //Hata: MINSICAKLIK
#define MSG_ERR_MAXTEMP_BED                 "Hata: MAXSIC. TABLA"                                        //Hata: MAXSIC. TABLA
#define MSG_ERR_MINTEMP_BED                 "Hata: MINSIC. TABLA"                                        //Hata: MINSIC. TABLA
#define MSG_ERR_Z_HOMING                    "G28 Z Yap谋lamaz"                                            //G28 Z Yap谋lamaz
#define MSG_HALTED                          "YAZICI DURDURULDU"                                          //YAZICI DURDURULDU
#define MSG_PLEASE_RESET                    "L眉tfen resetleyin"                                          //L眉tfen resetleyin
#define MSG_SHORT_DAY                       "G" // One character only                                    //G
#define MSG_SHORT_HOUR                      "S" // One character only                                    //S
#define MSG_SHORT_MINUTE                    "D" // One character only                                    //D
#define MSG_HEATING                         "Is谋n谋yor..."                                                //Is谋n谋yor...
#define MSG_HEATING_COMPLETE                "Is谋nma tamam."                                              //Is谋nma tamam.
#define MSG_BED_HEATING                     "Tabla Is谋n谋yor."                                            //Tabla Is谋n谋yor.
#define MSG_BED_DONE                        "Tabla haz谋r."                                               //Tabla haz谋r.
#define MSG_DELTA_CALIBRATE                 "Delta Kalibrasyonu"                                         //Delta Kalibrasyonu
#define MSG_DELTA_CALIBRATE_X               "Ayarla X"                                                   //Ayarla X
#define MSG_DELTA_CALIBRATE_Y               "Ayarla Y"                                                   //Ayarla Y
#define MSG_DELTA_CALIBRATE_Z               "Ayarla Z"                                                   //Ayarla Z
#define MSG_DELTA_CALIBRATE_CENTER          "Ayarla Merkez"                                              //Ayarla Merkez

#define MSG_INFO_MENU                       "Yaz谋c谋 Hakk谋nda"                                            //Yaz谋c谋 Hakk谋nda
#define MSG_INFO_PRINTER_MENU               "Yaz谋c谋 Bilgisi"                                             //Yaz谋c谋 Bilgisi
#define MSG_INFO_STATS_MENU                 "陌statistikler"                                              //陌statistikler
#define MSG_INFO_BOARD_MENU                 "Kontrol枚r Bilgisi"                                          //Kontrol Bilgisi
#define MSG_INFO_THERMISTOR_MENU            "Termist枚rler"                                               //Termist枚rler
#define MSG_INFO_EXTRUDERS                  "Ekstruderler"                                               //Ekstruderler
#define MSG_INFO_BAUDRATE                   "陌leti艧im H谋z谋"                                              //陌leti艧im H谋z谋
#define MSG_INFO_PROTOCOL                   "Protokol"                                                   //Protokol
#define MSG_LIGHTS_ON                       "Ayd谋nlatmay谋 A莽"                                            //Ayd谋nlatmay谋 A莽
#define MSG_LIGHTS_OFF                      "Ayd谋nlatmay谋 Kapa"                                          //Ayd谋nlaymay谋 Kapa

#if LCD_WIDTH > 19
  #define MSG_INFO_PRINT_COUNT              "Bask谋 Say谋s谋"                                               //Bask谋 Say谋s谋
  #define MSG_INFO_COMPLETED_PRINTS         "Tamamlanan"                                                 //Tamamlanan
  #define MSG_INFO_PRINT_TIME               "Toplam Bask谋 S眉resi"                                        //Toplam Bask谋 S眉resi
  #define MSG_INFO_PRINT_LONGEST            "En Uzun Bask谋 S眉resi"                                       //En Uzun Bask谋 S眉resi
  #define MSG_INFO_PRINT_FILAMENT           "Toplam Filaman"                                             //Toplam Filaman
#else
  #define MSG_INFO_PRINT_COUNT              "Bask谋"                                                      //Bask谋
  #define MSG_INFO_COMPLETED_PRINTS         "Tamamlanan"                                                 //Tamamlanan
  #define MSG_INFO_PRINT_TIME               "S眉re"                                                       //S眉re
  #define MSG_INFO_PRINT_LONGEST            "En Uzun"                                                    //En Uzun
  #define MSG_INFO_PRINT_FILAMENT           "Filaman"                                                    //Filaman
#endif

#define MSG_INFO_MIN_TEMP                   "Min S谋c."                                                   //Min S谋cak.
#define MSG_INFO_MAX_TEMP                   "Max S谋c."                                                   //Max S谋cak.
#define MSG_INFO_PSU                        "G眉莽 Kayna臒谋"                                                //G眉莽 Kayna臒谋

#define MSG_DRIVE_STRENGTH                  "S眉r眉c眉 G眉c眉"                                                //S眉r眉c眉 G眉c眉
#define MSG_DAC_PERCENT                     "S眉r眉c眉 %"                                                   //S眉r眉c眉 %
#define MSG_DAC_EEPROM_WRITE                "DAC'谋 EEPROM'a Yaz"                                         //DAC'谋 EEPROM'a Yaz
#define MSG_FILAMENT_CHANGE_HEADER          "Filaman De臒i艧tir"                                           //Filaman De臒i艧tir
#define MSG_FILAMENT_CHANGE_OPTION_HEADER   "Se莽enekler:"                                                //Se莽enekler:
#define MSG_FILAMENT_CHANGE_OPTION_EXTRUDE  "Daha Ak谋t"                                                  //Daha Ak谋t
#define MSG_FILAMENT_CHANGE_OPTION_RESUME   "Bask谋y谋 s眉rd眉r"                                             //Bask谋y谋 s眉rd眉r

#if LCD_HEIGHT >= 4
  // Up to 3 lines allowed
  #define MSG_FILAMENT_CHANGE_INIT_1          "Ba艧lama bekleniyor"                                       //Ba艧lama bekleniyor
  #define MSG_FILAMENT_CHANGE_INIT_2          "filaman谋n"                                                //filaman谋n
  #define MSG_FILAMENT_CHANGE_INIT_3          "de臒i艧imi"                                                 //de臒i艧imi
  #define MSG_FILAMENT_CHANGE_UNLOAD_1        "Bekleniyor"                                               //Bekleniyor
  #define MSG_FILAMENT_CHANGE_UNLOAD_2        "filaman谋n 莽谋kmas谋"                                        //filaman谋n 莽谋kmas谋
  #define MSG_FILAMENT_CHANGE_INSERT_1        "Filaman谋 y眉kle"                                           //Filaman谋 y眉kle
  #define MSG_FILAMENT_CHANGE_INSERT_2        "ve devam i莽in"                                            //ve devam i莽in
  #define MSG_FILAMENT_CHANGE_INSERT_3        "tu艧a bas..."                                              //tu艧a bas...
  #define MSG_FILAMENT_CHANGE_LOAD_1          "Bekleniyor"                                               //Bekleniyor
  #define MSG_FILAMENT_CHANGE_LOAD_2          "filaman谋n y眉klenmesi"                                     //filaman谋n y眉klenmesi
  #define MSG_FILAMENT_CHANGE_EXTRUDE_1       "Bekleniyor"                                               //Bekleniyor
  #define MSG_FILAMENT_CHANGE_EXTRUDE_2       "filaman akmas谋"                                           //filaman akmas谋
  #define MSG_FILAMENT_CHANGE_RESUME_1        "Bask谋n谋n s眉rd眉r眉lmesini"                                  //Bask谋n谋n s眉rd眉r眉lmesini
  #define MSG_FILAMENT_CHANGE_RESUME_2        "bekle"                                                    //bekle
#else // LCD_HEIGHT < 4
  // Up to 2 lines allowed
  #define MSG_FILAMENT_CHANGE_INIT_1          "L眉tfen bekleyiniz..."                                     //L眉tfen bekleyiniz...
  #define MSG_FILAMENT_CHANGE_UNLOAD_1        "脟谋kart谋l谋yor..."                                          //脟谋kart谋l谋yor...
  #define MSG_FILAMENT_CHANGE_INSERT_1        "Y眉kle ve bas"                                             //Y眉kle ve bas
  #define MSG_FILAMENT_CHANGE_LOAD_1          "Y眉kl眉yor..."                                              //Y眉kl眉yor...
  #define MSG_FILAMENT_CHANGE_EXTRUDE_1       "Ak谋t谋l谋yor..."                                            //Ak谋t谋l谋yor...
  #define MSG_FILAMENT_CHANGE_RESUME_1        "S眉rd眉r眉l眉yor..."                                          //S眉rd眉r眉l眉yor...
#endif // LCD_HEIGHT < 4

#endif // LANGUAGE_TR_UTF_H

