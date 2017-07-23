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
 * Japanese (Kana UTF8 version)
 *
 * LCD Menu Messages
 * See also https://github.com/MarlinFirmware/Marlin/wiki/LCD-Language
 *
 */

#ifndef LANGUAGE_KANA_UTF_H
#define LANGUAGE_KANA_UTF_H

#define MAPPER_E382E383
#define DISPLAY_CHARSET_ISO10646_KANA

// This just to show the potential benefit of unicode.
// This translation can be improved by using the full charset of unicode codeblock U+30A0 to U+30FF.

// 鐗囦划鍚嶈〃绀哄畾缇�
#define WELCOME_MSG                         MACHINE_NAME " ready."
#define MSG_SD_INSERTED                     "銈兗銉夈偓銈姐偊銉嬨儱銈︺偟銉優銈枫偪"        // "Card inserted"
#define MSG_SD_REMOVED                      "銈兗銉夈偓銈€儶銉炪偦銉�"               // "Card removed"
#define MSG_LCD_ENDSTOPS                    "銈ㄣ兂銉夈偣銉堛儍銉�"                  // "Endstops" // Max length 8 characters
#define MSG_MAIN                            "銉°偆銉�"                       // "Main"
#define MSG_AUTOSTART                       "銈搞儔銈︺偒銈ゃ偡"                   // "Autostart"
#define MSG_DISABLE_STEPPERS                "銉€兗銈裤兗銉囥兂銈层兂 銈儠"            // "Disable steppers"
#define MSG_AUTO_HOME                       "銈层兂銉嗐兂銉曘儍銈�"                  // "Auto home"
#define MSG_AUTO_HOME_X                     "X銈搞偗 銈层兂銉嗐兂銉曘儍銈�"             // "Home X"
#define MSG_AUTO_HOME_Y                     "Y銈搞偗 銈层兂銉嗐兂銉曘儍銈�"             // "Home Y"
#define MSG_AUTO_HOME_Z                     "Z銈搞偗 銈层兂銉嗐兂銉曘儍銈�"             // "Home Z"
#define MSG_LEVEL_BED_HOMING                "銈层兂銉嗐兂銉曘儍銈儊銉ャ偊"              // "Homing XYZ"
#define MSG_LEVEL_BED_WAITING               "銉儥銉兂銈般偒銈ゃ偡"                // "Click to Begin"
#define MSG_LEVEL_BED_NEXT_POINT            "銉勩偖銉庛偨銈儐銈ゃ儐銉炽儤"             // "Next Point"
#define MSG_LEVEL_BED_DONE                  "銉儥銉兂銈般偒銉炽儶銉с偊"              // "Leveling Done!"
#define MSG_LEVEL_BED_CANCEL                "銉堛儶銉ゃ儭"                      // "Cancel"
#define MSG_SET_HOME_OFFSETS                "銈偢銉ャ兂銈儠銈汇儍銉堛偦銉冦儐銈�"         // "Set home offsets"
#define MSG_HOME_OFFSETS_APPLIED            "銈儠銈汇儍銉堛偓銉嗐偔銉ㄣ偊銈点儸銉炪偡銈�"       // "Offsets applied"
#define MSG_SET_ORIGIN                      "銈偢銉ャ兂銈汇儍銉�"                 // "Set origin"
#define MSG_PREHEAT_1                       "PLA 銉ㄣ儘銉�"                   // "Preheat PLA"
#define MSG_PREHEAT_1_N                     MSG_PREHEAT_1 " "
#define MSG_PREHEAT_1_ALL                   "PLA 銈广儥銉嗐儴銉嶃儎"              // " All"
#define MSG_PREHEAT_1_BEDONLY               "PLA 銉欍儍銉夈儴銉嶃儎"              // " Bed"
#define MSG_PREHEAT_1_SETTINGS              MSG_PREHEAT_1 "銈汇儍銉嗐偆"       // " conf"
#define MSG_PREHEAT_2                       "ABS 銉ㄣ儘銉�"                  // "Preheat ABS"
#define MSG_PREHEAT_2_N                     MSG_PREHEAT_2 " "
#define MSG_PREHEAT_2_ALL                   "ABS 銈广儥銉嗐儴銉嶃儎"              // " All"
#define MSG_PREHEAT_2_BEDONLY               "ABS 銉欍儍銉夈儴銉嶃儎"              // " Bed"
#define MSG_PREHEAT_2_SETTINGS              MSG_PREHEAT_2 "銈汇儍銉嗐偆"       // " conf"
#define MSG_COOLDOWN                        "銈儘銉勩儐銈ゃ偡"                  // "Cooldown"
#define MSG_SWITCH_PS_ON                    "銉囥兂銈层兂 銈兂"                 // "Switch power on"
#define MSG_SWITCH_PS_OFF                   "銉囥兂銈层兂 銈儠"                 // "Switch power off"
#define MSG_EXTRUDE                         "銈偡銉�銈�"                     // "Extrude"
#define MSG_RETRACT                         "銉掋偔銈炽儫銈汇儍銉嗐偆"                // "Retract"
#define MSG_MOVE_AXIS                       "銈搞偗銈ゃ儔銈�"                    // "Move axis"
#define MSG_LEVEL_BED                       "銉欍儍銉夈儸銉欍儶銉炽偘"                // "Level bed"
#define MSG_MOVE_X                          "X銈搞偗 銈ゃ儔銈�"                  // "Move X"
#define MSG_MOVE_Y                          "Y銈搞偗 銈ゃ儔銈�"                  // "Move Y"
#define MSG_MOVE_Z                          "Z銈搞偗 銈ゃ儔銈�"                  // "Move Z"
#define MSG_MOVE_E                          "銈ㄣ偗銈广儓銉兗銉�銉�"                // "Extruder"
#define MSG_MOVE_01MM                       "0.1mm 銈ゃ儔銈�"                 // "Move 0.1mm"
#define MSG_MOVE_1MM                        "  1mm 銈ゃ儔銈�"                 // "Move 1mm"
#define MSG_MOVE_10MM                       " 10mm 銈ゃ儔銈�"                 // "Move 10mm"
#define MSG_SPEED                           "銈姐偗銉�"                       // "Speed"
#define MSG_BED_Z                           "Z銈儠銈汇儍銉�"                   // "Bed Z"
#define MSG_NOZZLE                          "銉庛偤銉�"                       // "Nozzle"
#define MSG_BED                             "銉欍儍銉�"                       // "Bed"
#define MSG_FAN_SPEED                       "銉曘偂銉炽偨銈儔"                    // "Fan speed"
#define MSG_FLOW                            "銉堛偡銉ャ儎銉儳銈�"                   // "Flow"
#define MSG_CONTROL                         "銈汇偆銈儳"                      // "Control"
#define MSG_MIN                             LCD_STR_THERMOMETER " 銈点偆銉嗐偆" // " Min"
#define MSG_MAX                             LCD_STR_THERMOMETER " 銈点偆銈炽偊" // " Max"
#define MSG_FACTOR                          LCD_STR_THERMOMETER " 銉曘偂銈偪銉�" // " Fact"
#define MSG_AUTOTEMP                        "銈搞儔銈︺偑銉炽儔銈汇偆銈儳"               // "Autotemp"
#define MSG_ON                              "銈兂 "                         // "On "
#define MSG_OFF                             "銈儠 "                         // "Off"
#define MSG_PID_P                           "PID-P"
#define MSG_PID_I                           "PID-I"
#define MSG_PID_D                           "PID-D"
#define MSG_PID_C                           "PID-C"
#define MSG_SELECT                          "銈汇兂銈裤偗"                     // "Select"
#define MSG_ACC                             "銈偨銈儔 mm/s2"               // "Accel"
#define MSG_VX_JERK                         "X銈搞偗 銉ゃ偗銉� mm/s"             // "Vx-jerk"
#define MSG_VY_JERK                         "Y銈搞偗 銉ゃ偗銉� mm/s"             // "Vy-jerk"
#define MSG_VZ_JERK                         "Z銈搞偗 銉ゃ偗銉� mm/s"             // "Vz-jerk"
#define MSG_VE_JERK                         "銈ㄣ偗銈广儓銉兗銉�銉� 銉ゃ偗銉�"          // "Ve-jerk"
#define MSG_VMAX                            "銈点偆銉�銈ゃ偑銈儶銈姐偗銉� "            // "Vmax "
#define MSG_VMIN                            "銈点偆銈枫儳銈︺偑銈儶銈姐偗銉�"           // "Vmin"
#define MSG_VTRAV_MIN                       "銈点偆銈枫儳銈︺偆銉夈偊銈姐偗銉�"           // "VTrav min"
#define MSG_AMAX                            "銈点偆銉�銈ゃ偒銈姐偗銉� "              // "Amax "
#define MSG_A_RETRACT                       "銉掋偔銈炽儫銈偨銈儔"               // "A-retract"
#define MSG_A_TRAVEL                        "銈ゃ儔銈︺偒銈姐偗銉�"                // "A-travel"
#define MSG_XSTEPS                          "Xsteps/mm"
#define MSG_YSTEPS                          "Ysteps/mm"
#define MSG_ZSTEPS                          "Zsteps/mm"
#define MSG_ESTEPS                          "Esteps/mm"
#define MSG_TEMPERATURE                     "銈兂銉�"                      // "Temperature"
#define MSG_MOTION                          "銈︺偞銈偦銉冦儐銈�"                // "Motion"
#define MSG_VOLUMETRIC                      "銉曘偅銉┿儭銉炽儓"                   // "Filament"
#define MSG_VOLUMETRIC_ENABLED              "E in mm3"
#define MSG_FILAMENT_DIAM                   "銉曘偅銉┿儭銉炽儓銉併儳銉冦偙銈�"            // "Fil. Dia."
#define MSG_CONTRAST                        "LCD銈炽兂銉堛儵銈广儓"               // "LCD contrast"
#define MSG_STORE_EPROM                     "銉°儮銉儤銈偗銉庛偊"               // "Store memory"
#define MSG_LOAD_EPROM                      "銉°儮銉偒銉┿儴銉熴偝銉�"               // "Load memory"
#define MSG_RESTORE_FAILSAFE                "銈汇儍銉嗐偆銉偦銉冦儓"               // "Restore failsafe"
#define MSG_REFRESH                         "銉儠銉儍銈枫儱"                  // "Refresh"
#define MSG_WATCH                           "銈搞儳銈︺儧銈︺偓銉°兂"               // "Info screen"
#define MSG_PREPARE                         "銈搞儱銉炽儞銈汇儍銉嗐偆"               // "Prepare"
#define MSG_TUNE                            "銉併儳銈︺偦銈�"                    // "Tune"
#define MSG_PAUSE_PRINT                     "銈ゃ儊銈搞儐銈ゃ偡"                  // "Pause print"
#define MSG_RESUME_PRINT                    "銉椼儶銉炽儓銈点偆銈偆"                // "Resume print"
#define MSG_STOP_PRINT                      "銉椼儶銉炽儓銉嗐偆銈�"                 // "Stop print"
#define MSG_CARD_MENU                       "SD銈兗銉夈偒銉┿儣銉兂銉�"            // "Print from SD"
#define MSG_NO_CARD                         "SD銈兗銉夈偓銈€儶銉炪偦銉�"            // "No SD card"
#define MSG_DWELL                           "銈儱銈︺偡"                     // "Sleep..."
#define MSG_USERWAIT                        "銈枫儛銉┿偗銈優銉併偗銉�銈点偆"           // "Wait for user..."
#define MSG_RESUMING                        "銉椼儶銉炽儓銈点偆銈偆"                // "Resuming print"
#define MSG_PRINT_ABORTED                   "銉椼儶銉炽儓銈儊銉ャ偊銈枫偟銉優銈枫偪"       // "Print aborted"
#define MSG_NO_MOVE                         "銈︺偞銈優銈汇兂"                  // "No move."
#define MSG_KILLED                          "銉掋偢銉с偊銉嗐偆銈�"                  // "KILLED. "
#define MSG_STOPPED                         "銉嗐偆銈枫偡銉炪偡銈�"                  // "STOPPED. "
#define MSG_CONTROL_RETRACT                 "銉掋偔銈炽儫銉儳銈� mm"                // "Retract mm"
#define MSG_CONTROL_RETRACT_SWAP            "銉掋偔銈炽儫銉儳銈 mm"               // "Swap Re.mm"
#define MSG_CONTROL_RETRACTF                "銉掋偔銈炽儫銈姐偗銉� mm/s"             // "Retract  V"
#define MSG_CONTROL_RETRACT_ZLIFT           "銉庛偤銉偪銈ゃ儝 mm"                // "Hop mm"
#define MSG_CONTROL_RETRACT_RECOVER         "銉涖偡銉с偊銉儳銈� mm"               // "UnRet +mm"
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    "銉涖偡銉с偊銉儳銈 mm"              // "S UnRet+mm"
#define MSG_CONTROL_RETRACT_RECOVERF        "銉涖偡銉с偊銈姐偗銉� mm/s"            // "UnRet  V"
#define MSG_AUTORETRACT                     "銈搞儔銈︺儝銈偝銉�"                 // "AutoRetr."
#define MSG_FILAMENTCHANGE                  "銉曘偅銉┿儭銉炽儓銈炽偊銈兂"              // "Change filament"
#define MSG_INIT_SDCARD                     "SD銈兗銉夈偟銈ゃ儴銉熴偝銉�"             // "Init. SD card"
#define MSG_CNG_SDCARD                      "SD銈兗銉夈偝銈︺偒銉�"               // "Change SD card"
#define MSG_ZPROBE_OUT                      "Z銉椼儹銉笺儢 銉欍儍銉夈偓銈�"            // "Z probe out. bed"
#define MSG_BLTOUCH_SELFTEST                "BLTouch 銈搞偝銈枫兂銉�銉�"          // "BLTouch Self-Test"
#define MSG_BLTOUCH_RESET                   "BLTouch 銉偦銉冦儓"             // "Reset BLTouch"
#define MSG_HOME                            "銈点偔銉�"                      // "Home" // Used as MSG_HOME " " MSG_X MSG_Y MSG_Z " " MSG_FIRST
#define MSG_FIRST                           "銉层儠銉冦偔銈点偦銉嗐偗銉�銈点偆"           // "first"
#define MSG_ZPROBE_ZOFFSET                  "Z銈儠銈汇儍銉�"                   // "Z Offset"
#define MSG_BABYSTEP_X                      "X銈搞偗 銉撱儔銈�"                  // "Babystep X"
#define MSG_BABYSTEP_Y                      "Y銈搞偗 銉撱儔銈�"                  // "Babystep Y"
#define MSG_BABYSTEP_Z                      "Z銈搞偗 銉撱儔銈�"                  // "Babystep Z"
#define MSG_ENDSTOP_ABORT                   "銈ゃ儔銈︺偛銉炽偒銈ゃ偙銉炽儊銈儙銈�"         // "Endstop abort"
#define MSG_HEATING_FAILED_LCD              "銈儘銉勩偡銉冦儜銈�"                 // "Heating failed"
#define MSG_ERR_REDUNDANT_TEMP              "銈ㄣ儵銉�:銈搞儳銈︺儊銉с偊銈点兗銉熴偣銈裤兗銈儙銈�"  // "Err: REDUNDANT TEMP"
#define MSG_THERMAL_RUNAWAY                 "銉嶃儎銉溿偊銈姐偊"                   // "THERMAL RUNAWAY"
#define MSG_ERR_MAXTEMP                     "銈ㄣ儵銉�:銈点偆銈炽偊銈兂銉併儳銈︺偒"         // "Err: MAXTEMP"
#define MSG_ERR_MINTEMP                     "銈ㄣ儵銉�:銈点偆銉嗐偆銈兂銉熴優銉�"          // "Err: MINTEMP"
#define MSG_ERR_MAXTEMP_BED                 "銈ㄣ儵銉�:銉欍儍銉� 銈点偆銈炽偊銈兂銉併儳銈︺偒"    // "Err: MAXTEMP BED"
#define MSG_ERR_MINTEMP_BED                 "銈ㄣ儵銉�:銉欍儍銉� 銈点偆銉嗐偆銈兂銉熴優銉�"     // "Err: MINTEMP BED"
#define MSG_ERR_Z_HOMING                    MSG_HOME " " MSG_X MSG_Y " " MSG_FIRST // "G28 Z Forbidden"
#define MSG_HALTED                          "銉椼儶銉炽偪銉笺儚銉嗐偆銈枫偡銉炪偡銈�"         // "PRINTER HALTED"
#define MSG_PLEASE_RESET                    "銉偦銉冦儓銈枫儐銈儉銈点偆"              // "Please reset"
#define MSG_SHORT_DAY                       "d"                          // One character only
#define MSG_SHORT_HOUR                      "h"                          // One character only
#define MSG_SHORT_MINUTE                    "m"                          // One character only
#define MSG_HEATING                         "銈儘銉勩儊銉ャ偊"                   // "Heating..."
#define MSG_HEATING_COMPLETE                "銈儘銉勩偒銉炽儶銉с偊"                 // "Heating done."
#define MSG_BED_HEATING                     "銉欍儍銉� 銈儘銉勩儊銉ャ偊"              // "Bed Heating."
#define MSG_BED_DONE                        "銉欍儍銉� 銈儘銉勩偒銉炽儶銉с偊"            // "Bed done."
#define MSG_DELTA_CALIBRATE                 "銉囥儷銈� 銈炽偊銈汇偆"                // "Delta Calibration"
#define MSG_DELTA_CALIBRATE_X               "X銈搞偗 銈炽偊銈汇偆"                 // "Calibrate X"
#define MSG_DELTA_CALIBRATE_Y               "Y銈搞偗 銈炽偊銈汇偆"                 // "Calibrate Y"
#define MSG_DELTA_CALIBRATE_Z               "Z銈搞偗 銈炽偊銈汇偆"                 // "Calibrate Z"
#define MSG_DELTA_CALIBRATE_CENTER          "銉併儱銈︺偡銉� 銈炽偊銈汇偆"              // "Calibrate Center"
#define MSG_INFO_MENU                       "銈炽儙銉椼儶銉炽偪銉笺儖銉勩偆銉�"             // "About Printer"
#define MSG_INFO_PRINTER_MENU               "銉椼儶銉炽偪銉笺偢銉с偊銉涖偊"              // "Printer Info"
#define MSG_INFO_STATS_MENU                 "銉椼儶銉炽儓銈搞儳銈︺偔銉с偊"              // "Printer Stats"
#define MSG_INFO_BOARD_MENU                 "銈汇偆銈儳銈便偆銈搞儳銈︺儧銈�"            // "Board Info"
#define MSG_INFO_THERMISTOR_MENU            "銈点兗銉熴偣銈裤兗"                   // "Thermistors"
#define MSG_INFO_EXTRUDERS                  "銈ㄣ偗銈广儓銉兗銉�銉笺偣銈�"             // "Extruders"
#define MSG_INFO_BAUDRATE                   "銉溿兗銉兗銉�"                    // "Baud"
#define MSG_INFO_PROTOCOL                   "銉椼儹銉堛偝銉�"                    // "Protocol"
#define MSG_LIGHTS_ON                       "銈儳銈︺偪銈ゃ儕銈ゃ偡銉с偊銉°偆 銈兂"       // "Case light on"
#define MSG_LIGHTS_OFF                      "銈儳銈︺偪銈ゃ儕銈ゃ偡銉с偊銉°偆 銈儠"       // "Case light off"
#define MSG_INFO_PRINT_COUNT                "銉椼儶銉炽儓銈广偊 "                  // "Print Count"
#define MSG_INFO_COMPLETED_PRINTS           "銈兂銉儳銈︺偣銈�"                  // "Completed"
#define MSG_INFO_PRINT_TIME                 "銉椼儶銉炽儓銈搞偒銉炽儷銈ゃ偙銈�"            // "Total print time"
#define MSG_INFO_PRINT_LONGEST              "銈点偆銉併儳銈︺儣銉兂銉堛偢銈兂"           // "Longest job time"
#define MSG_INFO_PRINT_FILAMENT             "銉曘偅銉┿儭銉炽儓銈枫儴銈︺儶銉с偊銉偆銈便偆"       // "Extruded total"
#define MSG_INFO_MIN_TEMP                   "銈汇儍銉嗐偆銈点偆銉嗐偆銈兂"              // "Min Temp"
#define MSG_INFO_MAX_TEMP                   "銈汇儍銉嗐偆銈点偆銈炽偊銈兂"              // "Max Temp"
#define MSG_INFO_PSU                        "銉囥兂銈层兂銈枫儱銉欍儎"                // "Power Supply"
#define MSG_DRIVE_STRENGTH                  "銉€兗銈裤兗銈儔銈︺儶銉с偗"              // "Drive Strength"
#define MSG_DAC_PERCENT                     "DAC銈枫儱銉勩儶銉с偗 %"               // "Driver %"
#define MSG_DAC_EEPROM_WRITE                MSG_STORE_EPROM              // "DAC EEPROM Write"
#define MSG_FILAMENT_CHANGE_HEADER          "銉曘偅銉┿儭銉炽儓銈炽偊銈兂"              // "CHANGE FILAMENT"
#define MSG_FILAMENT_CHANGE_OPTION_HEADER   "銉夈偊銈点儾銈汇兂銈裤偗銈枫儐銈儉銈点偆"        // "CHANGE OPTIONS:"
#define MSG_FILAMENT_CHANGE_OPTION_EXTRUDE  "銈点儵銉嬨偑銈枫儉銈�"                 // "Extrude more"
#define MSG_FILAMENT_CHANGE_OPTION_RESUME   "銉椼儶銉炽儓銈点偆銈偆"                // "Resume print"
#define MSG_FILAMENT_CHANGE_INIT_1          "銈炽偊銈兂銉层偒銈ゃ偡銈枫優銈�"            // "Wait for start"
#define MSG_FILAMENT_CHANGE_INIT_2          "銈枫儛銉┿偗銈優銉併偗銉�銈点偆"            // "of the filament"
#define MSG_FILAMENT_CHANGE_UNLOAD_1        "銉曘偅銉┿儭銉炽儓銉屻偔銉�銈枫儊銉ャ偊"          // "Wait for"
#define MSG_FILAMENT_CHANGE_UNLOAD_2        "銈枫儛銉┿偗銈優銉併偗銉�銈点偆"            // "filament unload"
#define MSG_FILAMENT_CHANGE_INSERT_1        "銉曘偅銉┿儭銉炽儓銉层偨銈︺儖銉ャ偊銈�,"         // "Insert filament"
#define MSG_FILAMENT_CHANGE_INSERT_2        "銈儶銉冦偗銈广儷銉堛偩銉冦偝銈︺偡銉炪偣"         // "and press button"
#define MSG_FILAMENT_CHANGE_LOAD_1          "銉曘偅銉┿儭銉炽儓銈姐偊銉嗐兂銉併儱銈�"          // "Wait for"
#define MSG_FILAMENT_CHANGE_LOAD_2          "銈枫儛銉┿偗銈優銉併偗銉�銈点偆"            // "filament load"
#define MSG_FILAMENT_CHANGE_EXTRUDE_1       "銉曘偅銉┿儭銉炽儓銈偡銉�銈枫儊銉ャ偊"          // "Wait for"
#define MSG_FILAMENT_CHANGE_EXTRUDE_2       "銈枫儛銉┿偗銈優銉併偗銉�銈点偆"            // "filament extrude"
#define MSG_FILAMENT_CHANGE_RESUME_1        "銉椼儶銉炽儓銉层偟銈ゃ偒銈ゃ偡銉炪偣"           // "Wait for print"
#define MSG_FILAMENT_CHANGE_RESUME_2        "銈枫儛銉┿偗銈優銉併偗銉�銈点偆"            // "to resume"

#endif // LANGUAGE_KANA_UTF_H

