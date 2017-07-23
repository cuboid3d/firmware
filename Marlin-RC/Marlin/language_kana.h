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
 * Japanese (Kana)
 *
 * LCD Menu Messages
 * See also https://github.com/MarlinFirmware/Marlin/wiki/LCD-Language
 *
 */

#ifndef LANGUAGE_KANA_H
#define LANGUAGE_KANA_H

// Define SIMULATE_ROMFONT to see what is seen on the character based display defined in Configuration.h
#define SIMULATE_ROMFONT
#define DISPLAY_CHARSET_ISO10646_KANA

// 鐗囦划鍚嶈〃绀哄畾缇�
#define WELCOME_MSG                         MACHINE_NAME " ready."
#define MSG_SD_INSERTED                     "\xb6\xb0\xc4\xde\xb6\xde\xbf\xb3\xc6\xad\xb3\xbb\xda\xcf\xbc\xc0" // "锝讹桨锞勶緸锝讹緸锝匡匠锞嗭江锝筹交锞氾緩锝硷線" ("Card inserted")
#define MSG_SD_REMOVED                      "\xb6\xb0\xc4\xde\xb6\xde\xb1\xd8\xcf\xbe\xdd"                     // "锝讹桨锞勶緸锝讹緸锝憋緲锞忥骄锞�" ("Card removed")
#define MSG_LCD_ENDSTOPS                    "Endstops"                                                         // Max length 8 characters
#define MSG_MAIN                            "\xd2\xb2\xdd"                                                     // "锞掞讲锞�" ("Main")
#define MSG_AUTOSTART                       "\xbc\xde\xc4\xde\xb3\xb6\xb2\xbc"                                 // "锝硷緸锞勶緸锝筹蕉锝诧郊" ("Autostart")
#define MSG_DISABLE_STEPPERS                "\xd3\xb0\xc0\xb0\xc3\xde\xdd\xb9\xde\xdd\x20\xb5\xcc"             // "锞擄桨锞�锝帮緝锞烇緷锝癸緸锞� 锝碉緦" ("Disable steppers")
#define MSG_AUTO_HOME                       "\xb9\xde\xdd\xc3\xdd\xcc\xaf\xb7"                                 // "锝癸緸锞濓緝锞濓緦锝椒" ("Auto home")
#define MSG_AUTO_HOME_X                     "X\xbc\xde\xb8\x20\xb9\xde\xdd\xc3\xdd\xcc\xaf\xb7"                // "X锝硷緸锝� 锝癸緸锞濓緝锞濓緦锝椒" ("Home X")
#define MSG_AUTO_HOME_Y                     "Y\xbc\xde\xb8\x20\xb9\xde\xdd\xc3\xdd\xcc\xaf\xb7"                // "Y锝硷緸锝� 锝癸緸锞濓緝锞濓緦锝椒" ("Home Y")
#define MSG_AUTO_HOME_Z                     "Z\xbc\xde\xb8\x20\xb9\xde\xdd\xc3\xdd\xcc\xaf\xb7"                // "Z锝硷緸锝� 锝癸緸锞濓緝锞濓緦锝椒" ("Home Z")
#define MSG_LEVEL_BED_HOMING                "\xb9\xde\xdd\xc3\xdd\xcc\xaf\xb7\xc1\xad\xb3"                     // "锝癸緸锞濓緝锞濓緦锝椒锞侊江锝�" ("Homing XYZ")
#define MSG_LEVEL_BED_WAITING               "\xda\xcd\xde\xd8\xdd\xb8\xde\xb6\xb2\xbc"                         // "锞氾緧锞烇緲锞濓礁锞烇蕉锝诧郊" ("Click to Begin")
#define MSG_LEVEL_BED_NEXT_POINT            "\xc2\xb7\xde\xc9\xbf\xb8\xc3\xb2\xc3\xdd\xcd"                     // "锞傦椒锞烇緣锝匡礁锞冿讲锞冿緷锞�" ("Next Point")
#define MSG_LEVEL_BED_DONE                  "\xda\xcd\xde\xd8\xdd\xb8\xde\xb6\xdd\xd8\xae\xb3"                 // "锞氾緧锞烇緲锞濓礁锞烇蕉锞濓緲锝匠" ("Leveling Done!")
#define MSG_LEVEL_BED_CANCEL                "\xc4\xd8\xd4\xd2"                                                 // "锞勶緲锞旓緬" ("Cancel")
#define MSG_SET_HOME_OFFSETS                "\xb7\xbc\xde\xad\xdd\xb5\xcc\xbe\xaf\xc4\xbe\xaf\xc3\xb2"         // "锝凤郊锞烇江锞濓降锞岋骄锝緞锝撅蒋锞冿讲" ("Set home offsets")
#define MSG_HOME_OFFSETS_APPLIED            "\xb5\xcc\xbe\xaf\xc4\xb6\xde\xc3\xb7\xd6\xb3\xbb\xda\xcf\xbc\xc0" // "锝碉緦锝撅蒋锞勶蕉锞烇緝锝凤緰锝筹交锞氾緩锝硷線" ("Offsets applied")
#define MSG_SET_ORIGIN                      "\xb7\xbc\xde\xad\xdd\xbe\xaf\xc4"                                 // "锝凤郊锞烇江锞濓骄锝緞" ("Set origin")
#define MSG_PREHEAT_1                       "PLA \xd6\xc8\xc2"                                                 // "PLA 锞栵緢锞�" ("Preheat PLA")
#define MSG_PREHEAT_1_N                     MSG_PREHEAT_1 " "
#define MSG_PREHEAT_1_ALL                   "PLA \xbd\xcd\xde\xc3\xd6\xc8\xc2"                                 // "PLA 锝斤緧锞烇緝锞栵緢锞�" (" All")
#define MSG_PREHEAT_1_BEDONLY               "PLA \xcd\xde\xaf\xc4\xde\xd6\xc8\xc2"                             // "PLA 锞嶏緸锝緞锞烇緰锞堬緜" (" Bed")
#define MSG_PREHEAT_1_SETTINGS              MSG_PREHEAT_1 "\xbe\xaf\xc3\xb2"                                   // "锝撅蒋锞冿讲" (" conf")
#define MSG_PREHEAT_2                       "ABS \xd6\xc8\xc2"                                                 // "ABS 锞栵緢锞�" ("Preheat ABS")
#define MSG_PREHEAT_2_N                     MSG_PREHEAT_2 " "
#define MSG_PREHEAT_2_ALL                   "ABS \xbd\xcd\xde\xc3\xd6\xc8\xc2"                                 // "ABS 锝斤緧锞烇緝锞栵緢锞�" (" All")
#define MSG_PREHEAT_2_BEDONLY               "ABS \xcd\xde\xaf\xc4\xde\xd6\xc8\xc2"                             // "ABS 锞嶏緸锝緞锞烇緰锞堬緜" (" Bed")
#define MSG_PREHEAT_2_SETTINGS              MSG_PREHEAT_2 "\xbe\xaf\xc3\xb2"                                   // "锝撅蒋锞冿讲" (" conf")
#define MSG_COOLDOWN                        "\xb6\xc8\xc2\xc3\xb2\xbc"                                         // "锝讹緢锞傦緝锝诧郊" ("Cooldown")
#define MSG_SWITCH_PS_ON                    "\xc3\xde\xdd\xb9\xde\xdd\x20\xb5\xdd"                             // "锞冿緸锞濓焦锞烇緷 锝碉緷" ("Switch power on")
#define MSG_SWITCH_PS_OFF                   "\xc3\xde\xdd\xb9\xde\xdd\x20\xb5\xcc"                             // "锞冿緸锞濓焦锞烇緷 锝碉緦" ("Switch power off")
#define MSG_EXTRUDE                         "\xb5\xbc\xc0\xde\xbc"                                             // "锝碉郊锞�锞烇郊" ("Extrude")
#define MSG_RETRACT                         "\xcb\xb7\xba\xd0\xbe\xaf\xc3\xb2"                                 // "锞嬶椒锝猴緪锝撅蒋锞冿讲" ("Retract")
#define MSG_MOVE_AXIS                       "\xbc\xde\xb8\xb2\xc4\xde\xb3"                                     // "锝硷緸锝革讲锞勶緸锝�" ("Move axis")
#define MSG_LEVEL_BED                       "\xcd\xde\xaf\xc4\xde\xda\xcd\xde\xd8\xdd\xb8\xde"                 // "锞嶏緸锝緞锞烇練锞嶏緸锞橈緷锝革緸" ("Level bed")
#define MSG_MOVE_X                          "X\xbc\xde\xb8\x20\xb2\xc4\xde\xb3"                                // "X锝硷緸锝� 锝诧緞锞烇匠" ("Move X")
#define MSG_MOVE_Y                          "Y\xbc\xde\xb8\x20\xb2\xc4\xde\xb3"                                // "Y锝硷緸锝� 锝诧緞锞烇匠" ("Move Y")
#define MSG_MOVE_Z                          "Z\xbc\xde\xb8\x20\xb2\xc4\xde\xb3"                                // "Z锝硷緸锝� 锝诧緞锞烇匠" ("Move Z")
#define MSG_MOVE_E                          "\xb4\xb8\xbd\xc4\xd9\xb0\xc0\xde\xb0"                             // "锝达礁锝斤緞锞欙桨锞�锞烇桨" ("Extruder")
#define MSG_MOVE_01MM                       "0.1mm \xb2\xc4\xde\xb3"                                           // "0.1mm 锝诧緞锞烇匠" ("Move 0.1mm")
#define MSG_MOVE_1MM                        "  1mm \xb2\xc4\xde\xb3"                                           // "  1mm 锝诧緞锞烇匠" ("Move 1mm")
#define MSG_MOVE_10MM                       " 10mm \xb2\xc4\xde\xb3"                                           // " 10mm 锝诧緞锞烇匠" ("Move 10mm")
#define MSG_SPEED                           "\xbf\xb8\xc4\xde"                                                 // "锝匡礁锞勶緸" ("Speed")
#define MSG_BED_Z                           "Z\xb5\xcc\xbe\xaf\xc4"                                            // "Z锝碉緦锝撅蒋锞�" ("Bed Z")
#define MSG_NOZZLE                          "\xc9\xbd\xde\xd9"                                                 // "锞夛浇锞烇緳" ("Nozzle")
#define MSG_BED                             "\xcd\xde\xaf\xc4\xde"                                             // "锞嶏緸锝緞锞�" ("Bed")
#define MSG_FAN_SPEED                       "\xcc\xa7\xdd\xbf\xb8\xc4\xde"                                     // "锞岋涧锞濓娇锝革緞锞�" ("Fan speed")
#define MSG_FLOW                            "\xc4\xbc\xad\xc2\xd8\xae\xb3"                                     // "锞勶郊锝緜锞橈疆锝�" ("Flow")
#define MSG_CONTROL                         "\xbe\xb2\xb7\xde\xae"                                             // "锝撅讲锝凤緸锝�" ("Control")
#define MSG_MIN                             LCD_STR_THERMOMETER " \xbb\xb2\xc3\xb2"                            // " 锝伙讲锞冿讲" (" Min")
#define MSG_MAX                             LCD_STR_THERMOMETER " \xbb\xb2\xba\xb3"                            // " 锝伙讲锝猴匠" (" Max")
#define MSG_FACTOR                          LCD_STR_THERMOMETER " \xcc\xa7\xb8\xc0\xb0"                        // " 锞岋涧锝革線锝�" (" Fact")
#if LCD_WIDTH >= 20
  #define MSG_AUTOTEMP                      "\xbc\xde\xc4\xde\xb3\xb5\xdd\xc4\xde\xbe\xb2\xb7\xde\xae"         // "锝硷緸锞勶緸锝筹降锞濓緞锞烇骄锝诧椒锞烇疆" ("Autotemp")
#else
  #define MSG_AUTOTEMP                      "\xbc\xde\xc4\xde\xb3\xb5\xdd\xc4\xde"                             // "锝硷緸锞勶緸锝筹降锞濓緞锞�" ("Autotemp")
#endif
#define MSG_ON                              "\xb5\xdd "                                                        // "锝碉緷 " ("On ")
#define MSG_OFF                             "\xb5\xcc "                                                        // "锝碉緦 " ("Off")
#define MSG_PID_P                           "PID-P"
#define MSG_PID_I                           "PID-I"
#define MSG_PID_D                           "PID-D"
#define MSG_PID_C                           "PID-C"
#define MSG_SELECT                          "\xbe\xdd\xc0\xb8"                                                 // "锝撅緷锞�锝�" ("Select")
#if LCD_WIDTH >= 20
  #define MSG_ACC                           "\xb6\xbf\xb8\xc4\xde mm/s2"                                       // "锝讹娇锝革緞锞� mm/s2" ("Accel")
  #define MSG_VX_JERK                       "X\xbc\xde\xb8\x20\xd4\xb8\xc4\xde mm/s"                           // "X锝硷緸锝� 锞旓礁锞勶緸 mm/s" ("Vx-jerk")
  #define MSG_VY_JERK                       "Y\xbc\xde\xb8\x20\xd4\xb8\xc4\xde mm/s"                           // "Y锝硷緸锝� 锞旓礁锞勶緸 mm/s" ("Vy-jerk")
  #define MSG_VZ_JERK                       "Z\xbc\xde\xb8\x20\xd4\xb8\xc4\xde mm/s"                           // "Z锝硷緸锝� 锞旓礁锞勶緸 mm/s" ("Vz-jerk")
  #define MSG_VE_JERK                       "\xb4\xb8\xbd\xc4\xd9\xb0\xc0\xde\xb0\x20\xd4\xb8\xc4\xde"         // "锝达礁锝斤緞锞欙桨锞�锞烇桨 锞旓礁锞勶緸" ("Ve-jerk")
  #define MSG_VMAX                          "\xbb\xb2\xc0\xde\xb2\xb5\xb8\xd8\xbf\xb8\xc4\xde "                // "锝伙讲锞�锞烇讲锝碉礁锞橈娇锝革緞锞� " ("Vmax ")
  #define MSG_VMIN                          "\xbb\xb2\xbc\xae\xb3\xb5\xb8\xd8\xbf\xb8\xc4\xde"                 // "锝伙讲锝硷疆锝筹降锝革緲锝匡礁锞勶緸" ("Vmin")
  #define MSG_VTRAV_MIN                     "\xbb\xb2\xbc\xae\xb3\xb2\xc4\xde\xb3\xbf\xb8\xc4\xde"             // "锝伙讲锝硷疆锝筹讲锞勶緸锝筹娇锝革緞锞�" ("VTrav min")
  #define MSG_AMAX                          "\xbb\xb2\xc0\xde\xb2\xb6\xbf\xb8\xc4\xde "                        // "锝伙讲锞�锞烇讲锝讹娇锝革緞锞� " ("Amax ")
#else
  #define MSG_ACC                           "\xb6\xbf\xb8\xc4\xde"                                             // "锝讹娇锝革緞锞�" ("Accel")
  #define MSG_VX_JERK                       "X\xbc\xde\xb8\x20\xd4\xb8\xc4\xde"                                // "XY锝硷緸锝� 锞旓礁锞勶緸" ("Vx-jerk")
  #define MSG_VY_JERK                       "Y\xbc\xde\xb8\x20\xd4\xb8\xc4\xde"                                // "XY锝硷緸锝� 锞旓礁锞勶緸" ("Vy-jerk")
  #define MSG_VZ_JERK                       "Z\xbc\xde\xb8\x20\xd4\xb8\xc4\xde"                                // "Z锝硷緸锝� 锞旓礁锞勶緸" ("Vz-jerk")
  #define MSG_VE_JERK                       "E\x20\xd4\xb8\xc4\xde"                                            // "E 锞旓礁锞勶緸" ("Ve-jerk")
  #define MSG_VMAX                          "max\xb5\xb8\xd8\xbf\xb8\xc4\xde "                                 // "max锝碉礁锞橈娇锝革緞锞�" ("Vmax ")
  #define MSG_VMIN                          "min\xb5\xb8\xd8\xbf\xb8\xc4\xde"                                  // "min锝碉礁锞橈娇锝革緞锞�" ("Vmin")
  #define MSG_VTRAV_MIN                     "min\xb2\xc4\xde\xb3\xbf\xb8\xc4\xde"                              // "min锝诧緞锞烇匠锝匡礁锞勶緸" ("VTrav min")
  #define MSG_AMAX                          "max\xb6\xbf\xb8 "                                                 // "max锝讹娇锝� " ("Amax ")
#endif
#define MSG_A_RETRACT                       "\xcb\xb7\xba\xd0\xb6\xbf\xb8\xc4\xde"                             // "锞嬶椒锝猴緪锝讹娇锝革緞锞�" ("A-retract")
#define MSG_A_TRAVEL                        "\xb2\xc4\xde\xb3\xb6\xbf\xb8\xc4\xde"                             // "锝诧緞锞烇匠锝讹娇锝革緞锞�" ("A-travel")
#if LCD_WIDTH >= 20
  #define MSG_XSTEPS                          "Xsteps/mm"
  #define MSG_YSTEPS                          "Ysteps/mm"
  #define MSG_ZSTEPS                          "Zsteps/mm"
  #define MSG_ESTEPS                          "Esteps/mm"
#else
  #define MSG_XSTEPS                          "Xsteps"
  #define MSG_YSTEPS                          "Ysteps"
  #define MSG_ZSTEPS                          "Zsteps"
  #define MSG_ESTEPS                          "Esteps"
#endif
#define MSG_TEMPERATURE                     "\xb5\xdd\xc4\xde"                                                 // "锝碉緷锞勶緸" ("Temperature")
#define MSG_MOTION                          "\xb3\xba\xde\xb7\xbe\xaf\xc3\xb2"                                 // "锝筹胶锞烇椒锝撅蒋锞冿讲" ("Motion")
#define MSG_VOLUMETRIC                      "\xcc\xa8\xd7\xd2\xdd\xc4"                                         // "锞岋建锞楋緬锞濓緞" ("Filament")
#define MSG_VOLUMETRIC_ENABLED              "E in mm3"
#if LCD_WIDTH >= 20
  #define MSG_FILAMENT_DIAM                 "\xcc\xa8\xd7\xd2\xdd\xc4\xc1\xae\xaf\xb9\xb2"                     // "锞岋建锞楋緬锞濓緞锞侊疆锝焦锝�" ("Fil. Dia.")
#else
  #define MSG_FILAMENT_DIAM                 "\xcc\xa8\xd7\xd2\xdd\xc4\xb9\xb2"                                 // "锞岋建锞楋緬锞濓緞锝癸讲" ("Fil. Dia.")
#endif
#define MSG_CONTRAST                        "LCD\xba\xdd\xc4\xd7\xbd\xc4"                                      // "LCD锝猴緷锞勶緱锝斤緞" ("LCD contrast")
#define MSG_STORE_EPROM                     "\xd2\xd3\xd8\xcd\xb6\xb8\xc9\xb3"                                 // "锞掞緭锞橈緧锝讹礁锞夛匠" ("Store memory")
#define MSG_LOAD_EPROM                      "\xd2\xd3\xd8\xb6\xd7\xd6\xd0\xba\xd0"                             // "锞掞緭锞橈蕉锞楋緰锞愶胶锞�" ("Load memory")
#define MSG_RESTORE_FAILSAFE                "\xbe\xaf\xc3\xb2\xd8\xbe\xaf\xc4"                                 // "锝撅蒋锞冿讲锞橈骄锝緞" ("Restore failsafe")
#define MSG_REFRESH                         "\xd8\xcc\xda\xaf\xbc\xad"                                         // "锞橈緦锞氾蒋锝硷江" ("Refresh")
#define MSG_WATCH                           "\xbc\xde\xae\xb3\xce\xb3\xb6\xde\xd2\xdd"                         // "锝硷緸锝匠锞庯匠锝讹緸锞掞緷" ("Info screen")
#define MSG_PREPARE                         "\xbc\xde\xad\xdd\xcb\xde\xbe\xaf\xc3\xb2"                         // "锝硷緸锝緷锞嬶緸锝撅蒋锞冿讲" ("Prepare")
#define MSG_TUNE                            "\xc1\xae\xb3\xbe\xb2"                                             // "锞侊疆锝筹骄锝�" ("Tune")
#define MSG_PAUSE_PRINT                     "\xb2\xc1\xbc\xde\xc3\xb2\xbc"                                     // "锝诧緛锝硷緸锞冿讲锝�" ("Pause print")
#define MSG_RESUME_PRINT                    "\xcc\xdf\xd8\xdd\xc4\xbb\xb2\xb6\xb2"                             // "锞岋緹锞橈緷锞勶交锝诧蕉锝�" ("Resume print")
#define MSG_STOP_PRINT                      "\xcc\xdf\xd8\xdd\xc4\xc3\xb2\xbc"                                 // "锞岋緹锞橈緷锞勶緝锝诧郊" ("Stop print")
#define MSG_CARD_MENU                       "SD\xb6\xb0\xc4\xde\xb6\xd7\xcc\xdf\xd8\xdd\xc4"                   // "SD锝讹桨锞勶緸锝讹緱锞岋緹锞橈緷锞�" ("Print from SD")
#define MSG_NO_CARD                         "SD\xb6\xb0\xc4\xde\xb6\xde\xb1\xd8\xcf\xbe\xdd"                   // "SD锝讹桨锞勶緸锝讹緸锝憋緲锞忥骄锞�" ("No SD card")
#define MSG_DWELL                           "\xb7\xad\xb3\xbc"                                                 // "锝凤江锝筹郊" ("Sleep...")
#define MSG_USERWAIT                        "\xbc\xca\xde\xd7\xb8\xb5\xcf\xc1\xb8\xc0\xde\xbb\xb2"             // "锝硷緤锞烇緱锝革降锞忥緛锝革線锞烇交锝�" ("Wait for user...")
#define MSG_RESUMING                        "\xcc\xdf\xd8\xdd\xc4\xbb\xb2\xb6\xb2"                             // "锞岋緹锞橈緷锞勶交锝诧蕉锝�" ("Resuming print")
#define MSG_PRINT_ABORTED                   "\xcc\xdf\xd8\xdd\xc4\xb6\xde\xc1\xad\xb3\xbc\xbb\xda\xcf\xbc\xc0" // "锞岋緹锞橈緷锞勶蕉锞烇緛锝匠锝硷交锞氾緩锝硷線" ("Print aborted")
#define MSG_NO_MOVE                         "\xb3\xba\xde\xb7\xcf\xbe\xdd"                                     // "锝筹胶锞烇椒锞忥骄锞�" ("No move.")
#define MSG_KILLED                          "\xcb\xbc\xde\xae\xb3\xc3\xb2\xbc"                                 // "锞嬶郊锞烇疆锝筹緝锝诧郊" ("KILLED. ")
#define MSG_STOPPED                         "\xc3\xb2\xbc\xbc\xcf\xbc\xc0"                                     // "锞冿讲锝硷郊锞忥郊锞�" ("STOPPED. ")
#if LCD_WIDTH >= 20
  #define MSG_CONTROL_RETRACT               "\xcb\xb7\xba\xd0\xd8\xae\xb3 mm"                                  // "锞嬶椒锝猴緪锞橈疆锝� mm" ("Retract mm")
  #define MSG_CONTROL_RETRACT_SWAP          "\xcb\xb7\xba\xd0\xd8\xae\xb3S mm"                                 // "锞嬶椒锝猴緪锞橈疆锝砈 mm" ("Swap Re.mm")
  #define MSG_CONTROL_RETRACTF              "\xcb\xb7\xba\xd0\xbf\xb8\xc4\xde mm/s"                            // "锞嬶椒锝猴緪锝匡礁锞勶緸 mm/s" ("Retract  V")
  #define MSG_CONTROL_RETRACT_ZLIFT         "\xc9\xbd\xde\xd9\xc0\xb2\xcb mm"                                  // "锞夛浇锞烇緳锞�锝诧緥 mm" ("Hop mm")
  #define MSG_CONTROL_RETRACT_RECOVER       "\xce\xbc\xae\xb3\xd8\xae\xb3 mm"                                  // "锞庯郊锝匠锞橈疆锝� mm" ("UnRet +mm")
  #define MSG_CONTROL_RETRACT_RECOVER_SWAP  "\xce\xbc\xae\xb3\xd8\xae\xb3S mm"                                 // "锞庯郊锝匠锞橈疆锝砈 mm" ("S UnRet+mm")
  #define MSG_CONTROL_RETRACT_RECOVERF      "\xce\xbc\xae\xb3\xbf\xb8\xc4\xde mm/s"                            // "锞庯郊锝匠锝匡礁锞勶緸 mm/s" ("UnRet  V")
#else
  #define MSG_CONTROL_RETRACT               "\xcb\xb7\xba\xd0\xd8\xae\xb3"                                     // "锞嬶椒锝猴緪锞橈疆锝�" ("Retract mm")
  #define MSG_CONTROL_RETRACT_SWAP          "\xcb\xb7\xba\xd0\xd8\xae\xb3S"                                    // "锞嬶椒锝猴緪锞橈疆锝砈" ("Swap Re.mm")
  #define MSG_CONTROL_RETRACTF              "\xcb\xb7\xba\xd0\xbf\xb8\xc4\xde"                                 // "锞嬶椒锝猴緪锝匡礁锞勶緸" ("Retract  V")
  #define MSG_CONTROL_RETRACT_ZLIFT         "\xc9\xbd\xde\xd9\xc0\xb2\xcb"                                     // "锞夛浇锞烇緳锞�锝诧緥" ("Hop mm")
  #define MSG_CONTROL_RETRACT_RECOVER       "\xce\xbc\xae\xb3\xd8\xae\xb3"                                     // "锞庯郊锝匠锞橈疆锝�" ("UnRet +mm")
  #define MSG_CONTROL_RETRACT_RECOVER_SWAP  "\xce\xbc\xae\xb3\xd8\xae\xb3S"                                    // "锞庯郊锝匠锞橈疆锝砈" ("S UnRet+mm")
  #define MSG_CONTROL_RETRACT_RECOVERF      "\xce\xbc\xae\xb3\xbf\xb8\xc4\xde"                                 // "锞庯郊锝匠锝匡礁锞勶緸" ("UnRet  V")
#endif
#define MSG_AUTORETRACT                     "\xbc\xde\xc4\xde\xb3\xcb\xb7\xba\xd0"                             // "锝硷緸锞勶緸锝筹緥锝凤胶锞�" ("AutoRetr.")
#define MSG_FILAMENTCHANGE                  "\xcc\xa8\xd7\xd2\xdd\xc4\xba\xb3\xb6\xdd"                         // "锞岋建锞楋緬锞濓緞锝猴匠锝讹緷" ("Change filament")
#define MSG_INIT_SDCARD                     "SD\xb6\xb0\xc4\xde\xbb\xb2\xd6\xd0\xba\xd0"                       // "SD锝讹桨锞勶緸锝伙讲锞栵緪锝猴緪" ("Init. SD card")
#define MSG_CNG_SDCARD                      "SD\xb6\xb0\xc4\xde\xba\xb3\xb6\xdd"                               // "SD锝讹桨锞勶緸锝猴匠锝讹緷" ("Change SD card")
#define MSG_ZPROBE_OUT                      "Z\xcc\xdf\xdb\xb0\xcc\xde\x20\xcd\xde\xaf\xc4\xde\xb6\xde\xb2"    // "Z锞岋緹锞涳桨锞岋緸 锞嶏緸锝緞锞烇蕉锞烇讲" ("Z probe out. bed")
#if LCD_WIDTH >= 20
  #define MSG_BLTOUCH_SELFTEST              "BLTouch \xbc\xde\xba\xbc\xdd\xc0\xde\xdd"                         // "BLTouch 锝硷緸锝猴郊锞濓線锞烇緷" ("BLTouch Self-Test")
#else
  #define MSG_BLTOUCH_SELFTEST              "BLTouch \xbe\xd9\xcc\xc3\xbd\xc4"                                 // "BLTouch 锝撅緳锞岋緝锝斤緞" ("BLTouch Self-Test")
#endif
#define MSG_BLTOUCH_RESET                   "BLTouch \xd8\xbe\xaf\xc4"                                         // "BLTouch 锞橈骄锝緞" ("Reset BLTouch")
#define MSG_HOME                            "\xbb\xb7\xc6"                                                     // "锝伙椒锞�" ("Home") // Used as MSG_HOME " " MSG_X MSG_Y MSG_Z " " MSG_FIRST
#if LCD_WIDTH >= 20
  #define MSG_FIRST                         "\xa6\xcc\xaf\xb7\xbb\xbe\xc3\xb8\xc0\xde\xbb\xb2"                 // "锝︼緦锝椒锝伙骄锞冿礁锞�锞烇交锝�" ("first")
#else
  #define MSG_FIRST                         "\xa6\xcc\xaf\xb7\xbb\xbe\xd6"                                     // "锝︼緦锝椒锝伙骄锞�" ("first")
#endif
#define MSG_ZPROBE_ZOFFSET                  "Z\xb5\xcc\xbe\xaf\xc4"                                            // "Z锝碉緦锝撅蒋锞�" ("Z Offset")
#define MSG_BABYSTEP_X                      "X\xbc\xde\xb8\x20\xcb\xde\xc4\xde\xb3"                            // "X锝硷緸锝� 锞嬶緸锞勶緸锝�" ("Babystep X")
#define MSG_BABYSTEP_Y                      "Y\xbc\xde\xb8\x20\xcb\xde\xc4\xde\xb3"                            // "Y锝硷緸锝� 锞嬶緸锞勶緸锝�" ("Babystep Y")
#define MSG_BABYSTEP_Z                      "Z\xbc\xde\xb8\x20\xcb\xde\xc4\xde\xb3"                            // "Z锝硷緸锝� 锞嬶緸锞勶緸锝�" ("Babystep Z")
#if LCD_WIDTH >= 20
  #define MSG_ENDSTOP_ABORT                 "\xb2\xc4\xde\xb3\xb9\xde\xdd\xb6\xb2\xb9\xdd\xc1\xb7\xc9\xb3"     // "锝诧緞锞烇匠锝癸緸锞濓蕉锝诧焦锞濓緛锝凤緣锝�" ("Endstop abort")
#else
  #define MSG_ENDSTOP_ABORT                 "\xb2\xc4\xde\xb3\xb9\xde\xdd\xb6\xb2\xb9\xdd\xc1"                 // "锝诧緞锞烇匠锝癸緸锞濓蕉锝诧焦锞濓緛" ("Endstop abort")
#endif
#define MSG_HEATING_FAILED_LCD              "\xb6\xc8\xc2\xbc\xaf\xca\xdf\xb2"                                 // "锝讹緢锞傦郊锝緤锞燂讲" ("Heating failed")
#if LCD_WIDTH >= 20
  #define MSG_ERR_REDUNDANT_TEMP            "\xb4\xd7\xb0:\xbc\xde\xae\xb3\xc1\xae\xb3\xbb\xb0\xd0\xbd\xc0\xb0\xb7\xc9\xb3" // "锝达緱锝�:锝硷緸锝匠锞侊疆锝筹交锝帮緪锝斤線锝帮椒锞夛匠" ("Err: REDUNDANT TEMP")
#else
  #define MSG_ERR_REDUNDANT_TEMP            "\xb4\xd7\xb0:\xbc\xde\xae\xb3\xc1\xae\xb3\xbb\xb0\xd0\xbd\xc0"                 // "锝达緱锝�:锝硷緸锝匠锞侊疆锝筹交锝帮緪锝斤線" ("Err: REDUNDANT TEMP")
#endif
#define MSG_THERMAL_RUNAWAY                 "\xc8\xc2\xce\xde\xb3\xbf\xb3"                                                  // "锞堬緜锞庯緸锝筹娇锝�" ("THERMAL RUNAWAY")
#define MSG_ERR_MAXTEMP                     "\xb4\xd7\xb0:\xbb\xb2\xba\xb3\xb5\xdd\xc1\xae\xb3\xb6"                         // "锝达緱锝�:锝伙讲锝猴匠锝碉緷锞侊疆锝筹蕉" ("Err: MAXTEMP")
#define MSG_ERR_MINTEMP                     "\xb4\xd7\xb0:\xbb\xb2\xc3\xb2\xb5\xdd\xd0\xcf\xdd"                             // "锝达緱锝�:锝伙讲锞冿讲锝碉緷锞愶緩锞�" ("Err: MINTEMP")
#if LCD_WIDTH >= 20
  #define MSG_ERR_MAXTEMP_BED               "\xb4\xd7\xb0:\xcd\xde\xaf\xc4\xde\x20\xbb\xb2\xba\xb3\xb5\xdd\xc1\xae\xb3\xb6" // "锝达緱锝�:锞嶏緸锝緞锞� 锝伙讲锝猴匠锝碉緷锞侊疆锝筹蕉" ("Err: MAXTEMP BED")
  #define MSG_ERR_MINTEMP_BED               "\xb4\xd7\xb0:\xcd\xde\xaf\xc4\xde\x20\xbb\xb2\xc3\xb2\xb5\xdd\xd0\xcf\xdd"     // "锝达緱锝�:锞嶏緸锝緞锞� 锝伙讲锞冿讲锝碉緷锞愶緩锞�" ("Err: MINTEMP BED")
#else
  #define MSG_ERR_MAXTEMP_BED               "\xb4\xd7\xb0:\xcd\xde\xaf\xc4\xde\x20\xbb\xb2\xba\xb3\xb5\xdd"                 // "锝达緱锝�:锞嶏緸锝緞锞� 锝伙讲锝猴匠锝碉緷" ("Err: MAXTEMP BED")
  #define MSG_ERR_MINTEMP_BED               "\xb4\xd7\xb0:\xcd\xde\xaf\xc4\xde\x20\xbb\xb2\xc3\xb2\xb5\xdd"                 // "锝达緱锝�:锞嶏緸锝緞锞� 锝伙讲锞冿讲锝碉緷" ("Err: MINTEMP BED")
#endif
#define MSG_ERR_Z_HOMING                    MSG_HOME " " MSG_X MSG_Y " " MSG_FIRST                             // "锝伙椒锞� XY 锝︼緦锝椒锝伙骄锞冿礁锞�锞烇交锝�" or "锝伙椒锞� XY 锝︼緦锝椒锝伙骄锞�" ("G28 Z Forbidden")
#define MSG_HALTED                          "\xcc\xdf\xd8\xdd\xc0\xb0\xca\xc3\xb2\xbc\xbc\xcf\xbc\xc0"         // "锞岋緹锞橈緷锞�锝帮緤锞冿讲锝硷郊锞忥郊锞�" ("PRINTER HALTED")
#define MSG_PLEASE_RESET                    "\xd8\xbe\xaf\xc4\xbc\xc3\xb8\xc0\xde\xbb\xb2"                     // "锞橈骄锝緞锝硷緝锝革線锞烇交锝�" ("Please reset")
#define MSG_SHORT_DAY                       "d"                                                                // One character only
#define MSG_SHORT_HOUR                      "h"                                                                // One character only
#define MSG_SHORT_MINUTE                    "m"                                                                // One character only
#define MSG_HEATING                         "\xb6\xc8\xc2\xc1\xad\xb3"                                         // "锝讹緢锞傦緛锝匠" ("Heating...")
#define MSG_HEATING_COMPLETE                "\xb6\xc8\xc2\xb6\xdd\xd8\xae\xb3"                                 // "锝讹緢锞傦蕉锞濓緲锝匠" ("Heating done.")
#define MSG_BED_HEATING                     "\xcd\xde\xaf\xc4\xde\x20\xb6\xc8\xc2\xc1\xad\xb3"                 // "锞嶏緸锝緞锞� 锝讹緢锞傦緛锝匠" ("Bed Heating.")
#define MSG_BED_DONE                        "\xcd\xde\xaf\xc4\xde\x20\xb6\xc8\xc2\xb6\xdd\xd8\xae\xb3"         // "锞嶏緸锝緞锞� 锝讹緢锞傦蕉锞濓緲锝匠" ("Bed done.")
#define MSG_DELTA_CALIBRATE                 "\xc3\xde\xd9\xc0\x20\xba\xb3\xbe\xb2"                             // "锞冿緸锞欙線 锝猴匠锝撅讲" ("Delta Calibration")
#define MSG_DELTA_CALIBRATE_X               "X\xbc\xde\xb8\x20\xba\xb3\xbe\xb2"                                // "X锝硷緸锝� 锝猴匠锝撅讲" ("Calibrate X")
#define MSG_DELTA_CALIBRATE_Y               "Y\xbc\xde\xb8\x20\xba\xb3\xbe\xb2"                                // "Y锝硷緸锝� 锝猴匠锝撅讲" ("Calibrate Y")
#define MSG_DELTA_CALIBRATE_Z               "Z\xbc\xde\xb8\x20\xba\xb3\xbe\xb2"                                // "Z锝硷緸锝� 锝猴匠锝撅讲" ("Calibrate Z")
#define MSG_DELTA_CALIBRATE_CENTER          "\xc1\xad\xb3\xbc\xdd\x20\xba\xb3\xbe\xb2"                         // "锞侊江锝筹郊锞� 锝猴匠锝撅讲" ("Calibrate Center")
#define MSG_INFO_MENU                       "\xba\xc9\xcc\xdf\xd8\xdd\xc0\xb0\xc6\xc2\xb2\xc3"                 // "锝猴緣锞岋緹锞橈緷锞�锝帮締锞傦讲锞�" ("About Printer")
#define MSG_INFO_PRINTER_MENU               "\xcc\xdf\xd8\xdd\xc0\xb0\xbc\xde\xae\xb3\xce\xb3"                 // "锞岋緹锞橈緷锞�锝帮郊锞烇疆锝筹編锝�" ("Printer Info")
#define MSG_INFO_STATS_MENU                 "\xcc\xdf\xd8\xdd\xc4\xbc\xde\xae\xb3\xb7\xae\xb3"                 // "锞岋緹锞橈緷锞勶郊锞烇疆锝筹椒锝匠" ("Printer Stats")
#define MSG_INFO_BOARD_MENU                 "\xbe\xb2\xb7\xde\xae\xb9\xb2\xbc\xde\xae\xb3\xce\xb3"             // "锝撅讲锝凤緸锝焦锝诧郊锞烇疆锝筹編锝�" ("Board Info")
#define MSG_INFO_THERMISTOR_MENU            "\xbb\xb0\xd0\xbd\xc0\xb0"                                         // "锝伙桨锞愶浇锞�锝�" ("Thermistors")
#define MSG_INFO_EXTRUDERS                  "\xb4\xb8\xbd\xc4\xd9\xb0\xc0\xde\xb0\xbd\xb3"                     // "锝达礁锝斤緞锞欙桨锞�锞烇桨锝斤匠" ("Extruders")
#define MSG_INFO_BAUDRATE                   "\xce\xde\xb0\xda\xb0\xc4"                                         // "锞庯緸锝帮練锝帮緞" ("Baud")
#define MSG_INFO_PROTOCOL                   "\xcc\xdf\xdb\xc4\xba\xd9"                                         // "锞岋緹锞涳緞锝猴緳" ("Protocol")
#define MSG_LIGHTS_ON                       "\xb7\xae\xb3\xc0\xb2\xc5\xb2\xbc\xae\xb3\xd2\xb2\x20\xb5\xdd"     // "锝凤疆锝筹線锝诧緟锝诧郊锝匠锞掞讲 锝碉緷" ("Case light on")
#define MSG_LIGHTS_OFF                      "\xb7\xae\xb3\xc0\xb2\xc5\xb2\xbc\xae\xb3\xd2\xb2\x20\xb5\xcc"     // "锝凤疆锝筹線锝诧緟锝诧郊锝匠锞掞讲 锝碉緦" ("Case light off")
#define MSG_INFO_PRINT_COUNT                "\xcc\xdf\xd8\xdd\xc4\xbd\xb3"                                     // "锞岋緹锞橈緷锞勶浇锝�" ("Print Count")
#define MSG_INFO_COMPLETED_PRINTS           "\xb6\xdd\xd8\xae\xb3\xbd\xb3"                                     // "锝讹緷锞橈疆锝筹浇锝�" ("Completed")
#define MSG_INFO_PRINT_TIME                 "\xcc\xdf\xd8\xdd\xc4\xbc\xde\xb6\xdd\xd9\xb2\xb9\xb2"             // "锞岋緹锞橈緷锞勶郊锞烇蕉锞濓緳锝诧焦锝�" ("Total print time")
#define MSG_INFO_PRINT_LONGEST              "\xbb\xb2\xc1\xae\xb3\xcc\xdf\xd8\xdd\xc4\xbc\xde\xb6\xdd"         // "锝伙讲锞侊疆锝筹緦锞燂緲锞濓緞锝硷緸锝讹緷" ("Longest job time")
#if LCD_WIDTH >= 20
  #define MSG_INFO_PRINT_FILAMENT           "\xcc\xa8\xd7\xd2\xdd\xc4\xbc\xd6\xb3\xd8\xae\xb3\xd9\xb2\xb9\xb2" // "锞岋建锞楋緬锞濓緞锝硷緰锝筹緲锝匠锞欙讲锝癸讲" ("Extruded total")
#else
  #define MSG_INFO_PRINT_FILAMENT           "\xcc\xa8\xd7\xd2\xdd\xc4\xbf\xb3\xbc\xd6\xb3\xd8\xae\xb3"         // "锞岋建锞楋緬锞濓緞锝匡匠锝硷緰锝筹緲锝匠" ("Extruded")
#endif
#define MSG_INFO_MIN_TEMP                   "\xbe\xaf\xc3\xb2\xbb\xb2\xc3\xb2\xb5\xdd"                         // "锝撅蒋锞冿讲锝伙讲锞冿讲锝碉緷" ("Min Temp")
#define MSG_INFO_MAX_TEMP                   "\xbe\xaf\xc3\xb2\xbb\xb2\xba\xb3\xb5\xdd"                         // "锝撅蒋锞冿讲锝伙讲锝猴匠锝碉緷" ("Max Temp")
#if LCD_WIDTH >= 20
  #define MSG_INFO_PSU                      "\xc3\xde\xdd\xb9\xde\xdd\xbc\xad\xcd\xde\xc2"                     // "锞冿緸锞濓焦锞烇緷锝硷江锞嶏緸锞�" ("Power Supply")
#else
  #define MSG_INFO_PSU                      "\xc3\xde\xdd\xb9\xde\xdd"                                         // "锞冿緸锞濓焦锞烇緷" ("Power Supply")
#endif
#define MSG_DRIVE_STRENGTH                  "\xd3\xb0\xc0\xb0\xb8\xc4\xde\xb3\xd8\xae\xb8"                     // "锞擄桨锞�锝帮礁锞勶緸锝筹緲锝礁" ("Drive Strength")
#if LCD_WIDTH >= 20
  #define MSG_DAC_PERCENT                   "DAC\xbc\xad\xc2\xd8\xae\xb8 %"                                    // "DAC锝硷江锞傦緲锝礁 %" ("Driver %")
#else
  #define MSG_DAC_PERCENT                   "DAC\xbc\xad\xc2\xd8\xae\xb8"                                      // "DAC锝硷江锞傦緲锝礁" ("Driver %")
#endif
#define MSG_DAC_EEPROM_WRITE                MSG_STORE_EPROM                                                    // "锞掞緭锞橈緧锝讹礁锞夛匠" ("DAC EEPROM Write")
#define MSG_FILAMENT_CHANGE_HEADER          "\xcc\xa8\xd7\xd2\xdd\xc4\xba\xb3\xb6\xdd"                         // "锞岋建锞楋緬锞濓緞锝猴匠锝讹緷" ("CHANGE FILAMENT")
#define MSG_FILAMENT_CHANGE_OPTION_HEADER   "\xc4\xde\xb3\xbb\xa6\xbe\xdd\xc0\xb8\xbc\xc3\xb8\xc0\xde\xbb\xb2" // "锞勶緸锝筹交锝︼骄锞濓線锝革郊锞冿礁锞�锞烇交锝�" ("CHANGE OPTIONS:")
#define MSG_FILAMENT_CHANGE_OPTION_EXTRUDE  "\xbb\xd7\xc6\xb5\xbc\xc0\xde\xbd"                                 // "锝伙緱锞嗭降锝硷線锞烇浇" ("Extrude more")
#define MSG_FILAMENT_CHANGE_OPTION_RESUME   "\xcc\xdf\xd8\xdd\xc4\xbb\xb2\xb6\xb2"                             // "锞岋緹锞橈緷锞勶交锝诧蕉锝�" ("Resume print")

#if LCD_HEIGHT >= 4
  // Up to 3 lines allowed
  #define MSG_FILAMENT_CHANGE_INIT_1        "\xba\xb3\xb6\xdd\xa6\xb6\xb2\xbc\xbc\xcf\xbd"                     // "锝猴匠锝讹緷锝︼蕉锝诧郊锝硷緩锝�" ("Wait for start")
  #define MSG_FILAMENT_CHANGE_INIT_2        "\xbc\xca\xde\xd7\xb8\xb5\xcf\xc1\xb8\xc0\xde\xbb\xb2"             // "锝硷緤锞烇緱锝革降锞忥緛锝革線锞烇交锝�" ("of the filament")
  #define MSG_FILAMENT_CHANGE_UNLOAD_1      "\xcc\xa8\xd7\xd2\xdd\xc4\xc7\xb7\xc0\xde\xbc\xc1\xad\xb3"         // "锞岋建锞楋緬锞濓緞锞囷椒锞�锞烇郊锞侊江锝�" ("Wait for")
  #define MSG_FILAMENT_CHANGE_UNLOAD_2      "\xbc\xca\xde\xd7\xb8\xb5\xcf\xc1\xb8\xc0\xde\xbb\xb2"             // "锝硷緤锞烇緱锝革降锞忥緛锝革線锞烇交锝�" ("filament unload")
  #define MSG_FILAMENT_CHANGE_INSERT_1      "\xcc\xa8\xd7\xd2\xdd\xc4\xa6\xbf\xb3\xc6\xad\xb3\xbc,"            // "锞岋建锞楋緬锞濓緞锝︼娇锝筹締锝匠锝�," ("Insert filament")
  #define MSG_FILAMENT_CHANGE_INSERT_2      "\xb8\xd8\xaf\xb8\xbd\xd9\xc4\xbf\xde\xaf\xba\xb3\xbc\xcf\xbd"     // "锝革緲锝礁锝斤緳锞勶娇锞烇蒋锝猴匠锝硷緩锝�" ("and press button")
  #define MSG_FILAMENT_CHANGE_LOAD_1        "\xcc\xa8\xd7\xd2\xdd\xc4\xbf\xb3\xc3\xdd\xc1\xad\xb3"             // "锞岋建锞楋緬锞濓緞锝匡匠锞冿緷锞侊江锝�" ("Wait for")
  #define MSG_FILAMENT_CHANGE_LOAD_2        "\xbc\xca\xde\xd7\xb8\xb5\xcf\xc1\xb8\xc0\xde\xbb\xb2"             // "锝硷緤锞烇緱锝革降锞忥緛锝革線锞烇交锝�" ("filament load")
  #define MSG_FILAMENT_CHANGE_EXTRUDE_1     "\xcc\xa8\xd7\xd2\xdd\xc4\xb5\xbc\xc0\xde\xbc\xc1\xad\xb3"         // "锞岋建锞楋緬锞濓緞锝碉郊锞�锞烇郊锞侊江锝�" ("Wait for")
  #define MSG_FILAMENT_CHANGE_EXTRUDE_2     "\xbc\xca\xde\xd7\xb8\xb5\xcf\xc1\xb8\xc0\xde\xbb\xb2"             // "锝硷緤锞烇緱锝革降锞忥緛锝革線锞烇交锝�" ("filament extrude")
  #define MSG_FILAMENT_CHANGE_RESUME_1      "\xcc\xdf\xd8\xdd\xc4\xa6\xbb\xb2\xb6\xb2\xbc\xcf\xbd"             // "锞岋緹锞橈緷锞勶溅锝伙讲锝讹讲锝硷緩锝�" ("Wait for print")
  #define MSG_FILAMENT_CHANGE_RESUME_2      "\xbc\xca\xde\xd7\xb8\xb5\xcf\xc1\xb8\xc0\xde\xbb\xb2"             // "锝硷緤锞烇緱锝革降锞忥緛锝革線锞烇交锝�" ("to resume")
#else // LCD_HEIGHT < 4
  // Up to 2 lines allowed
  #define MSG_FILAMENT_CHANGE_INIT_1        "\xba\xb3\xb6\xdd\xa6\xb6\xb2\xbc\xbc\xcf\xbd"                     // "锝猴匠锝讹緷锝︼蕉锝诧郊锝硷緩锝�" ("Please wait...")
  #define MSG_FILAMENT_CHANGE_UNLOAD_1      "\xcc\xa8\xd7\xd2\xdd\xc4\xc7\xb7\xc0\xde\xbc\xc1\xad\xb3"         // "锞岋建锞楋緬锞濓緞锞囷椒锞�锞烇郊锞侊江锝�" ("Ejecting...")
  #if LCD_WIDTH >= 20
    #define MSG_FILAMENT_CHANGE_INSERT_1    "\xbf\xb3\xc6\xad\xb3\xbc\x2c\xb8\xd8\xaf\xb8\xbc\xc3\xb8\xc0\xde\xbb\xb2" // "锝匡匠锞嗭江锝筹郊,锝革緲锝礁锝硷緝锝革線锞烇交锝�" ("Insert and Click")
  #else
    #define MSG_FILAMENT_CHANGE_INSERT_1    "\xbf\xb3\xc6\xad\xb3\xbc\x2c\xb8\xd8\xaf\xb8\xbe\xd6"                     // "锝匡匠锞嗭江锝筹郊,锝革緲锝礁锝撅緰" ("Insert and Click")
  #endif
  #define MSG_FILAMENT_CHANGE_LOAD_1        "\xcc\xa8\xd7\xd2\xdd\xc4\xbf\xb3\xc3\xdd\xc1\xad\xb3"             // "锞岋建锞楋緬锞濓緞锝匡匠锞冿緷锞侊江锝�" ("Loading...")
  #define MSG_FILAMENT_CHANGE_EXTRUDE_1     "\xcc\xa8\xd7\xd2\xdd\xc4\xb5\xbc\xc0\xde\xbc\xc1\xad\xb3"         // "锞岋建锞楋緬锞濓緞锝碉郊锞�锞烇郊锞侊江锝�" ("Extruding...")
  #define MSG_FILAMENT_CHANGE_RESUME_1      "\xcc\xdf\xd8\xdd\xc4\xa6\xbb\xb2\xb6\xb2\xbc\xcf\xbd"             // "锞岋緹锞橈緷锞勶溅锝伙讲锝讹讲锝硷緩锝�" ("Resuming...")
#endif // LCD_HEIGHT < 4

#endif // LANGUAGE_KANA_H

