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
 * Bulgarian
 *
 * LCD Menu Messages
 * See also https://github.com/MarlinFirmware/Marlin/wiki/LCD-Language
 *
 */
#ifndef LANGUAGE_BG_H
#define LANGUAGE_BG_H

#define MAPPER_D0D1                // For Cyrillic
#define DISPLAY_CHARSET_ISO10646_5

#define WELCOME_MSG                         MACHINE_NAME " 袚芯褌芯胁."
#define MSG_SD_INSERTED                     "袣邪褉褌邪褌邪 械 锌芯褋褌邪胁械薪邪"
#define MSG_SD_REMOVED                      "袣邪褉褌邪褌邪 械 懈蟹胁邪写械薪邪"
#define MSG_LCD_ENDSTOPS                    "Endstops" // Max length 8 characters
#define MSG_MAIN                            "袦械薪褞"
#define MSG_AUTOSTART                       "袗胁褌芯褋褌邪褉褌"
#define MSG_DISABLE_STEPPERS                "袠蟹泻谢. 写胁懈谐邪褌械谢懈"
#define MSG_AUTO_HOME                       "袩邪褉泻懈褉邪薪械"
#define MSG_AUTO_HOME_X                     "Home X"
#define MSG_AUTO_HOME_Y                     "Home Y"
#define MSG_AUTO_HOME_Z                     "Home Z"
#define MSG_LEVEL_BED_HOMING                "Homing XYZ"
#define MSG_LEVEL_BED_WAITING               "Click to Begin"
#define MSG_LEVEL_BED_NEXT_POINT            "Next Point"
#define MSG_LEVEL_BED_DONE                  "Leveling Done!"
#define MSG_LEVEL_BED_CANCEL                "Cancel"
#define MSG_SET_HOME_OFFSETS                "袟邪写邪泄 袧邪褔邪谢芯"
#define MSG_HOME_OFFSETS_APPLIED            "Offsets applied"
#define MSG_SET_ORIGIN                      "袠蟹褏芯写薪邪 褌芯褔泻邪"
#define MSG_PREHEAT_1                       "袩芯写谐褉褟胁邪薪械 PLA"
#define MSG_PREHEAT_1_N                     "袩芯写谐褉褟胁邪薪械 PLA"
#define MSG_PREHEAT_1_ALL                   "袩芯写谐褉. PLA 袙褋懈褔泻懈"
#define MSG_PREHEAT_1_BEDONLY               "袩芯写谐褉. PLA 袥械谐谢芯"
#define MSG_PREHEAT_1_SETTINGS              "袧邪褋褌褉芯泄泻懈 PLA"
#define MSG_PREHEAT_2                       "袩芯写谐褉褟胁邪薪械 ABS"
#define MSG_PREHEAT_2_N                     "袩芯写谐褉褟胁邪薪械 ABS"
#define MSG_PREHEAT_2_ALL                   "袩芯写谐褉. ABS 袙褋懈褔泻懈"
#define MSG_PREHEAT_2_BEDONLY               "袩芯写谐褉. ABS 袥械谐谢芯"
#define MSG_PREHEAT_2_SETTINGS              "袧邪褋褌褉芯泄泻懈 ABS"
#define MSG_COOLDOWN                        "袨褏谢邪卸写邪薪械"
#define MSG_SWITCH_PS_ON                    "袙泻谢. 蟹邪褏褉邪薪胁邪薪械"
#define MSG_SWITCH_PS_OFF                   "袠蟹泻谢. 蟹邪褏褉邪薪胁邪薪械"
#define MSG_EXTRUDE                         "袝泻褋褌褉褍蟹懈褟"
#define MSG_RETRACT                         "袨褌泻邪褌"
#define MSG_MOVE_AXIS                       "袛胁懈卸械薪懈械 锌芯 芯褋"
#define MSG_LEVEL_BED                       "袧懈胁械谢懈褉邪薪械"
#define MSG_MOVE_X                          "袛胁懈卸械薪懈械 锌芯 X"
#define MSG_MOVE_Y                          "袛胁懈卸械薪懈械 锌芯 Y"
#define MSG_MOVE_Z                          "袛胁懈卸械薪懈械 锌芯 Z"
#define MSG_MOVE_E                          "袝泻褋褌褉褍写械褉"
#define MSG_MOVE_01MM                       "袩褉械屑械褋褌懈 褋 0.1mm"
#define MSG_MOVE_1MM                        "袩褉械屑械褋褌懈 褋 1mm"
#define MSG_MOVE_10MM                       "袩褉械屑械褋褌懈 褋 10mm"
#define MSG_SPEED                           "小泻芯褉芯褋褌"
#define MSG_BED_Z                           "Bed Z"
#define MSG_NOZZLE                          LCD_STR_THERMOMETER " 袛褞蟹邪"
#define MSG_BED                             LCD_STR_THERMOMETER " 袥械谐谢芯"
#define MSG_FAN_SPEED                       "袙械薪褌懈谢邪褌芯褉"
#define MSG_FLOW                            "袩芯褌芯泻"
#define MSG_CONTROL                         "校锌褉邪胁谢械薪懈械"
#define MSG_MIN                             LCD_STR_THERMOMETER " 袦懈薪懈屑褍屑"
#define MSG_MAX                             LCD_STR_THERMOMETER " 袦邪泻褋懈屑褍屑"
#define MSG_FACTOR                          LCD_STR_THERMOMETER " 肖邪泻褌芯褉"
#define MSG_AUTOTEMP                        "袗胁褌芯-褌械屑锌."
#define MSG_ON                              "袙泻谢. "
#define MSG_OFF                             "袠蟹泻谢. "
#define MSG_PID_P                           "PID-P"
#define MSG_PID_I                           "PID-I"
#define MSG_PID_D                           "PID-D"
#define MSG_PID_C                           "PID-C"
#define MSG_SELECT                          "Select"
#define MSG_ACC                             "Acc"
#define MSG_VX_JERK                         "Vx-jerk"
#define MSG_VY_JERK                         "Vy-jerk"
#define MSG_VZ_JERK                         "Vz-jerk"
#define MSG_VE_JERK                         "Ve-jerk"
#define MSG_VMAX                            "Vmax "
#define MSG_VMIN                            "Vmin"
#define MSG_VTRAV_MIN                       "VTrav min"
#define MSG_AMAX                            "Amax "
#define MSG_A_RETRACT                       "A-芯褌泻邪褌"
#define MSG_A_TRAVEL                        "A-travel"
#define MSG_XSTEPS                          "X 褋褌褗锌泻懈/mm"
#define MSG_YSTEPS                          "Y 褋褌褗锌泻懈/mm"
#define MSG_ZSTEPS                          "Z 褋褌褗锌泻懈/mm"
#define MSG_ESTEPS                          "E 褋褌褗锌泻懈/mm"
#define MSG_TEMPERATURE                     "孝械屑锌械褉邪褌褍褉邪"
#define MSG_MOTION                          "袛胁懈卸械薪懈械"
#define MSG_VOLUMETRIC                      "袧懈褕泻邪"
#define MSG_VOLUMETRIC_ENABLED              "E in mm3"
#define MSG_FILAMENT_DIAM                   "袛懈邪屑. 薪懈褕泻邪"
#define MSG_CONTRAST                        "LCD 泻芯薪褌褉邪褋褌"
#define MSG_STORE_EPROM                     "袟邪锌邪蟹懈 胁 EPROM"
#define MSG_LOAD_EPROM                      "袟邪褉械写懈 芯褌 EPROM"
#define MSG_RESTORE_FAILSAFE                "肖邪斜褉懈褔薪懈 薪邪褋褌褉芯泄泻懈"
#define MSG_REFRESH                         LCD_STR_REFRESH "袨斜薪芯胁懈"
#define MSG_WATCH                           "袩褉械谐谢械写"
#define MSG_PREPARE                         "袛械泄褋褌胁懈褟"
#define MSG_TUNE                            "袧邪褋褌褉芯泄泻邪"
#define MSG_PAUSE_PRINT                     "袩邪褍蟹邪"
#define MSG_RESUME_PRINT                    "袙褗蟹芯斜薪芯胁懈 锌械褔邪褌邪"
#define MSG_STOP_PRINT                      "小锌褉懈 锌械褔邪褌邪"
#define MSG_CARD_MENU                       "袦械薪褞 泻邪褉褌邪"
#define MSG_NO_CARD                         "袧褟屑邪 泻邪褉褌邪"
#define MSG_DWELL                           "袩芯褔懈胁泻邪..."
#define MSG_USERWAIT                        "袠蟹褔邪泻胁邪薪械"
#define MSG_RESUMING                        "袩褉芯写褗谢卸. 锌械褔邪褌邪"
#define MSG_PRINT_ABORTED                   "袩械褔邪褌褗褌 械 锌褉械泻褗褋薪邪褌"
#define MSG_NO_MOVE                         "袧褟屑邪 写胁懈卸械薪懈械"
#define MSG_KILLED                          "校袘袠孝袨."
#define MSG_STOPPED                         "小袩袪携袧袨."
#define MSG_CONTROL_RETRACT                 "袨褌泻邪褌 mm"
#define MSG_CONTROL_RETRACT_SWAP            "小屑褟薪邪 袨褌泻邪褌 mm"
#define MSG_CONTROL_RETRACTF                "袨褌泻邪褌  V"
#define MSG_CONTROL_RETRACT_ZLIFT           "小泻芯泻 mm"
#define MSG_CONTROL_RETRACT_RECOVER         "袙褗蟹胁褉邪褌 +mm"
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    "小屑褟薪邪 袙褗蟹胁褉邪褌 +mm"
#define MSG_CONTROL_RETRACT_RECOVERF        "袙褗蟹胁褉邪褌  V"
#define MSG_AUTORETRACT                     "袗胁褌芯o褌泻邪褌"
#define MSG_FILAMENTCHANGE                  "小屑褟薪邪 薪懈褕泻邪"
#define MSG_INIT_SDCARD                     "袠薪懈褑. SD-袣邪褉褌邪"
#define MSG_CNG_SDCARD                      "小屑褟薪邪 SD-袣邪褉褌邪"
#define MSG_ZPROBE_OUT                      "Z-褋芯薪写邪褌邪 械 懈蟹胁邪写械薪邪"
#define MSG_BLTOUCH_SELFTEST                "BLTouch Self-Test"
#define MSG_BLTOUCH_RESET                   "Reset BLTouch"
#define MSG_HOME                            "Home"  // Used as MSG_HOME " " MSG_X MSG_Y MSG_Z " " MSG_FIRST
#define MSG_FIRST                           "first"
#define MSG_ZPROBE_ZOFFSET                  "Z 袨褌褋褌芯褟薪懈械"
#define MSG_BABYSTEP_X                      "袦懈薪懈褋褌褗锌泻邪 X"
#define MSG_BABYSTEP_Y                      "袦懈薪懈褋褌褗锌泻邪 Y"
#define MSG_BABYSTEP_Z                      "袦懈薪懈褋褌褗锌泻邪 Z"
#define MSG_ENDSTOP_ABORT                   "小褌芯锌 袣褉.袠蟹泻谢褞褔胁邪褌械谢懈"
#define MSG_HEATING_FAILED_LCD              "Heating failed"
#define MSG_ERR_REDUNDANT_TEMP              "Err: REDUNDANT TEMP"
#define MSG_THERMAL_RUNAWAY                 "THERMAL RUNAWAY"
#define MSG_ERR_MAXTEMP                     "Err: MAXTEMP"
#define MSG_ERR_MINTEMP                     "Err: MINTEMP"
#define MSG_ERR_MAXTEMP_BED                 "Err: MAXTEMP BED"
#define MSG_ERR_MINTEMP_BED                 "Err: MINTEMP BED"
#define MSG_ERR_Z_HOMING                    "G28 Z Forbidden"
#define MSG_HALTED                          "PRINTER HALTED"
#define MSG_PLEASE_RESET                    "Please reset"
#define MSG_SHORT_DAY                       "d" // One character only
#define MSG_SHORT_HOUR                      "h" // One character only
#define MSG_SHORT_MINUTE                    "m" // One character only
#define MSG_HEATING                         "Heating..."
#define MSG_HEATING_COMPLETE                "Heating done."
#define MSG_BED_HEATING                     "Bed Heating."
#define MSG_BED_DONE                        "Bed done."
#define MSG_DELTA_CALIBRATE                 "袛械谢褌邪 袣邪谢懈斜褉芯胁泻邪"
#define MSG_DELTA_CALIBRATE_X               "袣邪谢懈斜褉芯胁泻邪 X"
#define MSG_DELTA_CALIBRATE_Y               "袣邪谢懈斜褉芯胁泻邪 Y"
#define MSG_DELTA_CALIBRATE_Z               "袣邪谢懈斜褉芯胁泻邪 Z"
#define MSG_DELTA_CALIBRATE_CENTER          "袣邪谢懈斜褉芯胁泻邪 笑械薪褌褗褉"

#define MSG_INFO_MENU                       "About Printer"
#define MSG_INFO_PRINTER_MENU               "Printer Info"
#define MSG_INFO_STATS_MENU                 "Printer Stats"
#define MSG_INFO_BOARD_MENU                 "Board Info"
#define MSG_INFO_THERMISTOR_MENU            "Thermistors"
#define MSG_INFO_EXTRUDERS                  "Extruders"
#define MSG_INFO_BAUDRATE                   "Baud"
#define MSG_INFO_PROTOCOL                   "Protocol"
#define MSG_LIGHTS_ON                       "Case light on"
#define MSG_LIGHTS_OFF                      "Case light off"

#if LCD_WIDTH >= 20
  #define MSG_INFO_PRINT_COUNT              "Print Count"
  #define MSG_INFO_COMPLETED_PRINTS         "Completed"
  #define MSG_INFO_PRINT_TIME               "Total print time"
  #define MSG_INFO_PRINT_LONGEST            "Longest job time"
  #define MSG_INFO_PRINT_FILAMENT           "Extruded total"
#else
  #define MSG_INFO_PRINT_COUNT              "Prints"
  #define MSG_INFO_COMPLETED_PRINTS         "Completed"
  #define MSG_INFO_PRINT_TIME               "Total"
  #define MSG_INFO_PRINT_LONGEST            "Longest"
  #define MSG_INFO_PRINT_FILAMENT           "Extruded"
#endif

#define MSG_INFO_MIN_TEMP                   "Min Temp"
#define MSG_INFO_MAX_TEMP                   "Max Temp"
#define MSG_INFO_PSU                        "Power Supply"

#define MSG_DRIVE_STRENGTH                  "Drive Strength"
#define MSG_DAC_PERCENT                     "Driver %"
#define MSG_DAC_EEPROM_WRITE                "DAC EEPROM Write"

#define MSG_FILAMENT_CHANGE_HEADER          "CHANGE FILAMENT"
#define MSG_FILAMENT_CHANGE_OPTION_HEADER   "CHANGE OPTIONS:"
#define MSG_FILAMENT_CHANGE_OPTION_EXTRUDE  "Extrude more"
#define MSG_FILAMENT_CHANGE_OPTION_RESUME   "Resume print"

#if LCD_HEIGHT >= 4
  // Up to 3 lines allowed
  #define MSG_FILAMENT_CHANGE_INIT_1          "Wait for start"
  #define MSG_FILAMENT_CHANGE_INIT_2          "of the filament"
  #define MSG_FILAMENT_CHANGE_INIT_3          "change"
  #define MSG_FILAMENT_CHANGE_UNLOAD_1        "Wait for"
  #define MSG_FILAMENT_CHANGE_UNLOAD_2        "filament unload"
  #define MSG_FILAMENT_CHANGE_INSERT_1        "Insert filament"
  #define MSG_FILAMENT_CHANGE_INSERT_2        "and press button"
  #define MSG_FILAMENT_CHANGE_INSERT_3        "to continue..."
  #define MSG_FILAMENT_CHANGE_LOAD_1          "Wait for"
  #define MSG_FILAMENT_CHANGE_LOAD_2          "filament load"
  #define MSG_FILAMENT_CHANGE_EXTRUDE_1       "Wait for"
  #define MSG_FILAMENT_CHANGE_EXTRUDE_2       "filament extrude"
  #define MSG_FILAMENT_CHANGE_RESUME_1        "Wait for print"
  #define MSG_FILAMENT_CHANGE_RESUME_2        "to resume"
#else // LCD_HEIGHT < 4
  // Up to 2 lines allowed
  #define MSG_FILAMENT_CHANGE_INIT_1          "Please wait..."
  #define MSG_FILAMENT_CHANGE_UNLOAD_1        "Ejecting..."
  #define MSG_FILAMENT_CHANGE_INSERT_1        "Insert and Click"
  #define MSG_FILAMENT_CHANGE_LOAD_1          "Loading..."
  #define MSG_FILAMENT_CHANGE_EXTRUDE_1       "Extruding..."
  #define MSG_FILAMENT_CHANGE_RESUME_1        "Resuming..."
#endif // LCD_HEIGHT < 4

#endif // LANGUAGE_BG_H

