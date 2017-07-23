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
 * Ukrainian
 *
 * LCD Menu Messages
 * See also https://github.com/MarlinFirmware/Marlin/wiki/LCD-Language
 *
 */
#ifndef LANGUAGE_UK_H
#define LANGUAGE_UK_H

#define MAPPER_D0D1                // For Cyrillic
#define DISPLAY_CHARSET_ISO10646_5

#define WELCOME_MSG                         MACHINE_NAME " 谐芯褌芯胁懈泄."
#define MSG_SD_INSERTED                     "袣邪褉褌泻邪 胁褋褌邪胁谢械薪邪"
#define MSG_SD_REMOVED                      "袣邪褉褌泻邪 胁懈写邪谢械薪邪"
#define MSG_LCD_ENDSTOPS                    "袣褨薪褑械胁懈泻" // Max length 8 characters
#define MSG_MAIN                            "袦械薪褞"
#define MSG_AUTOSTART                       "袗胁褌芯褋褌邪褉褌"
#define MSG_DISABLE_STEPPERS                "袙懈屑泻. 写胁懈谐褍薪懈"
#define MSG_AUTO_HOME                       "袗胁褌芯 锌邪褉泻褍胁邪薪薪褟"
#define MSG_AUTO_HOME_X                     "袩邪褉泻褍胁邪薪薪褟 X"
#define MSG_AUTO_HOME_Y                     "袩邪褉泻褍胁邪薪薪褟 Y"
#define MSG_AUTO_HOME_Z                     "袩邪褉泻褍胁邪薪薪褟 Z"
#define MSG_LEVEL_BED_HOMING                "袩邪褉泻褍胁邪薪薪褟 XYZ"
#define MSG_LEVEL_BED_WAITING               "袩芯褔邪褌懈"
#define MSG_LEVEL_BED_NEXT_POINT            "小谢褨写褍褞褔邪 孝芯褔泻邪"
#define MSG_LEVEL_BED_DONE                  "袟邪胁械褉褕械薪芯!"
#define MSG_LEVEL_BED_CANCEL                "袙褨写屑褨薪邪"
#define MSG_SET_HOME_OFFSETS                "袟斜械褉械谐褌懈 锌邪褉泻褍胁."
#define MSG_HOME_OFFSETS_APPLIED            "袟屑褨褖械薪薪褟 蟹邪褋褌芯褋."
#define MSG_SET_ORIGIN                      "袙褋褌邪薪芯胁. 锌芯褔邪褌芯泻"
#define MSG_PREHEAT_1                       "袧邪谐褉褨胁 PLA"
#define MSG_PREHEAT_1_N                     MSG_PREHEAT_1 " "
#define MSG_PREHEAT_1_ALL                   MSG_PREHEAT_1 " 袙褋械"
#define MSG_PREHEAT_1_BEDONLY               MSG_PREHEAT_1 " 小褌褨谢"
#define MSG_PREHEAT_1_SETTINGS              MSG_PREHEAT_1 " 薪邪谢."
#define MSG_PREHEAT_2                       "袧邪谐褉褨胁 ABS"
#define MSG_PREHEAT_2_N                     MSG_PREHEAT_2 " "
#define MSG_PREHEAT_2_ALL                   MSG_PREHEAT_2 " 袙褋械"
#define MSG_PREHEAT_2_BEDONLY               MSG_PREHEAT_2 " 小褌褨谢"
#define MSG_PREHEAT_2_SETTINGS              MSG_PREHEAT_2 " 薪邪谢."
#define MSG_COOLDOWN                        "袨褏芯谢芯写卸械薪薪褟"
#define MSG_SWITCH_PS_ON                    "校胁褨屑泻薪褍褌懈 卸懈胁谢械薪薪褟"
#define MSG_SWITCH_PS_OFF                   "袙懈屑泻薪褍褌懈 卸懈胁谢械薪薪褟"
#define MSG_EXTRUDE                         "袝泻褋褌褉褍蟹褨褟"
#define MSG_RETRACT                         "袙褌褟谐褍胁邪薪薪褟"
#define MSG_MOVE_AXIS                       "袪褍褏 锌芯 芯褋褟屑"
#define MSG_LEVEL_BED                       "袧褨胁械谢褞胁邪薪薪褟 褋褌芯谢褍"
#define MSG_MOVE_X                          "袪褍褏 锌芯 X"
#define MSG_MOVE_Y                          "袪褍褏 锌芯 Y"
#define MSG_MOVE_Z                          "袪褍褏 锌芯 Z"
#define MSG_MOVE_E                          "袝泻褋褌褉褍写械褉"
#define MSG_MOVE_01MM                       "袪褍褏 锌芯 0.1mm"
#define MSG_MOVE_1MM                        "袪褍褏 锌芯 1mm"
#define MSG_MOVE_10MM                       "袪褍褏 锌芯 10mm"
#define MSG_SPEED                           "楔胁懈写泻褨褋褌褜"
#define MSG_BED_Z                           "Z 小褌芯谢褍"
#define MSG_NOZZLE                          "小芯锌谢芯"
#define MSG_BED                             "小褌褨谢"
#define MSG_FAN_SPEED                       "袨褏芯谢芯写卸."
#define MSG_FLOW                            "袩芯褌褨泻"
#define MSG_CONTROL                         "袧邪谢邪褕褌褍胁邪薪薪褟"
#define MSG_MIN                             " " LCD_STR_THERMOMETER " 袦褨薪"
#define MSG_MAX                             " " LCD_STR_THERMOMETER " 袦邪泻褋"
#define MSG_FACTOR                          " " LCD_STR_THERMOMETER " 肖邪泻褌"
#define MSG_AUTOTEMP                        "袗胁褌芯褌械屑锌械褉."
#define MSG_ON                              "校胁褨屑泻."
#define MSG_OFF                             "袙懈屑泻. "
#define MSG_PID_P                           "PID-P"
#define MSG_PID_I                           "PID-I"
#define MSG_PID_D                           "PID-D"
#define MSG_PID_C                           "PID-C"
#define MSG_SELECT                          "袙懈斜褉邪褌懈"
#define MSG_ACC                             "袩褉懈褋泻."
#define MSG_VX_JERK                         "Vx-褉懈胁芯泻"
#define MSG_VY_JERK                         "Vy-褉懈胁芯泻"
#define MSG_VZ_JERK                         "Vz-褉懈胁芯泻"
#define MSG_VE_JERK                         "Ve-褉懈胁芯泻"
#define MSG_VMAX                            "V屑邪泻褋"
#define MSG_VMIN                            "V屑褨薪"
#define MSG_VTRAV_MIN                       "V褉褍褏褍 屑褨薪"
#define MSG_AMAX                            "A屑邪泻褋 "
#define MSG_A_RETRACT                       "A-胁褌褟谐褍胁."
#define MSG_A_TRAVEL                        "A-褉褍褏褍"
#define MSG_XSTEPS                          "X泻褉芯泻褨胁/屑屑"
#define MSG_YSTEPS                          "Y泻褉芯泻褨胁/屑屑"
#define MSG_ZSTEPS                          "Z泻褉芯泻褨胁/屑屑"
#define MSG_ESTEPS                          "E泻褉芯泻褨胁/屑屑"
#define MSG_TEMPERATURE                     "孝械屑锌械褉邪褌褍褉邪"
#define MSG_MOTION                          "袪褍褏"
#define MSG_VOLUMETRIC                      "袙芯谢芯泻薪芯"
#define MSG_VOLUMETRIC_ENABLED              "E 胁 屑屑3"
#define MSG_FILAMENT_DIAM                   "袛褨邪屑. 胁芯谢芯泻."
#define MSG_CONTRAST                        "泻芯薪褌褉邪褋褌 LCD"
#define MSG_STORE_EPROM                     "袟斜械褉械谐褌懈 胁 袩袟袩"
#define MSG_LOAD_EPROM                      "袟褔懈褌邪褌懈 蟹 袩袟袩"
#define MSG_RESTORE_FAILSAFE                "袙褨写薪芯胁懈褌懈 斜邪蟹芯胁褨"
#define MSG_REFRESH                         "袩芯薪芯胁懈褌懈"
#define MSG_WATCH                           "袉薪褎芯褉屑邪褑褨褟"
#define MSG_PREPARE                         "袩褨写谐芯褌褍胁邪褌懈"
#define MSG_TUNE                            "袩褨写谢邪褕褌褍胁邪薪薪褟"
#define MSG_PAUSE_PRINT                     "袩褉懈蟹褍锌懈薪懈褌懈 写褉褍泻"
#define MSG_RESUME_PRINT                    "袙褨写薪芯胁懈褌懈 写褉褍泻"
#define MSG_STOP_PRINT                      "小泻邪褋褍胁邪褌懈 写褉褍泻"
#define MSG_CARD_MENU                       "袛褉褍泻褍胁邪褌懈 蟹 SD"
#define MSG_NO_CARD                         "袙褨写褋褍褌薪褟 SD 泻邪褉褌."
#define MSG_DWELL                           "小锌谢褟褔泻邪..."
#define MSG_USERWAIT                        "袨褔褨泻褍胁邪薪薪褟 写褨泄..."
#define MSG_RESUMING                        "袙褨写薪芯胁谢械薪薪褟 写褉褍泻褍"
#define MSG_PRINT_ABORTED                   "袛褉褍泻 褋泻邪褋芯胁邪薪芯"
#define MSG_NO_MOVE                         "袧械屑邪褦 褉褍褏褍."
#define MSG_KILLED                          "袩袝袪袝袪袙袗袧袨. "
#define MSG_STOPPED                         "袟校袩袠袧袝袧袨. "
#define MSG_FILAMENTCHANGE                  "袟屑褨薪邪 胁芯谢芯泻薪邪"
#define MSG_INIT_SDCARD                     "小褌邪褉褌 SD 泻邪褉褌泻懈"
#define MSG_CNG_SDCARD                      "袟邪屑褨薪邪 SD 泻邪褉褌懈"
#define MSG_ZPROBE_OUT                      "Z 写械褌. 薪械 胁 屑械卸邪褏"
#define MSG_BLTOUCH_SELFTEST                "BLTouch 小邪屑芯-孝械褋褌"
#define MSG_BLTOUCH_RESET                   "小泻懈薪褍褌懈 BLTouch"
#define MSG_HOME                            "袛褨屑"  // Used as MSG_HOME " " MSG_X MSG_Y MSG_Z " " MSG_FIRST
#define MSG_FIRST                           "锌械褉褕懈泄"
#define MSG_ZPROBE_ZOFFSET                  "袟屑褨褖械薪薪褟 Z"
#define MSG_BABYSTEP_X                      "袦褨泻褉芯泻褉芯泻 X"
#define MSG_BABYSTEP_Y                      "袦褨泻褉芯泻褉芯泻 Y"
#define MSG_BABYSTEP_Z                      "袦褨泻褉芯泻褉芯泻 Z"
#define MSG_ENDSTOP_ABORT                   "薪械胁写邪褔邪 泻褨薪褑械胁懈泻邪"
#define MSG_HEATING_FAILED_LCD              "袧械胁写邪谢懈泄 薪邪谐褉褨胁"
#define MSG_THERMAL_RUNAWAY                 "袟袘袉袡 孝袝袦袩袝袪袗孝校袪袠"
#define MSG_ERR_Z_HOMING                    "G28 Z 袙褨写屑芯胁谢械薪芯"
#define MSG_HALTED                          "袩袪袠袧孝袝袪 袟校袩袠袧袝袧袨"
#define MSG_PLEASE_RESET                    "袩械褉械蟹邪胁邪薪褌邪卸褌械"
#define MSG_SHORT_DAY                       "写" // One character only
#define MSG_SHORT_HOUR                      "谐" // One character only
#define MSG_SHORT_MINUTE                    "褏" // One character only
#define MSG_HEATING                         "袧邪谐褉褨胁邪薪薪褟..."
#define MSG_HEATING_COMPLETE                "袧邪谐褉褨褌芯."
#define MSG_BED_HEATING                     "袧邪谐褉褨胁邪薪薪褟 褋褌芯谢褍."
#define MSG_BED_DONE                        "小褌褨谢 薪邪谐褉褨褌懈泄."
#define MSG_DELTA_CALIBRATE                 "袣邪谢褨斜褉. Delta"
#define MSG_DELTA_CALIBRATE_X               "袣邪谢褨斜褉褍胁邪薪薪褟 X"
#define MSG_DELTA_CALIBRATE_Y               "袣邪谢褨斜褉褍胁邪薪薪褟 Y"
#define MSG_DELTA_CALIBRATE_Z               "袣邪谢褨斜褉褍胁邪薪薪褟 Z"
#define MSG_DELTA_CALIBRATE_CENTER          "袣邪谢褨斜褉. 笑械薪褌褉褍"

#define MSG_INFO_MENU                       "袩褉芯 锌褉懈薪褌械褉"
#define MSG_INFO_PRINTER_MENU               "袉薪褎芯褉屑邪褑褨褟"
#define MSG_INFO_STATS_MENU                 "小褌邪褌懈褋褌懈泻邪"
#define MSG_INFO_BOARD_MENU                 "袩褉芯 锌谢邪褌褍"
#define MSG_INFO_THERMISTOR_MENU            "孝械褉屑褨褋褌芯褉懈"
#define MSG_INFO_EXTRUDERS                  "袝泻褋褌褉褍写械褉懈"
#define MSG_INFO_BAUDRATE                   "斜褨褌/褋"
#define MSG_INFO_PROTOCOL                   "袩褉芯褌芯泻芯谢"
#define MSG_LIGHTS_ON                       "袩褨写褋胁褨褌泻邪 褍胁褨泻."
#define MSG_LIGHTS_OFF                      "袩褨写褋胁褨褌泻邪 胁懈屑泻."

#if LCD_WIDTH >= 20
  #define MSG_INFO_PRINT_COUNT              "袣-褋褌褜 写褉褍泻褨胁"
  #define MSG_INFO_COMPLETED_PRINTS         "袟邪胁械褉褕械薪芯"
  #define MSG_INFO_PRINT_TIME               "袙械褋褜 褔邪褋 写褉褍泻褍"
  #define MSG_INFO_PRINT_LONGEST            "袧邪泄写芯胁褕懈泄 褔邪褋"
  #define MSG_INFO_PRINT_FILAMENT           "袝泻褋褌褉褍写芯胁邪薪芯"
#else
  #define MSG_INFO_PRINT_COUNT              "袛褉褍泻褨胁"
  #define MSG_INFO_COMPLETED_PRINTS         "袟邪胁械褉褕械薪芯"
  #define MSG_INFO_PRINT_TIME               "袟邪谐邪谢芯屑"
  #define MSG_INFO_PRINT_LONGEST            "袧邪泄写芯胁褕懈泄"
  #define MSG_INFO_PRINT_FILAMENT           "袝泻褋写褉褍写."
#endif

#define MSG_INFO_MIN_TEMP                   "袦褨薪 孝械屑锌."
#define MSG_INFO_MAX_TEMP                   "袦邪泻褋 孝械屑锌."
#define MSG_INFO_PSU                        "袛卸械褉械谢芯 卸懈胁."

#define MSG_DRIVE_STRENGTH                  "小懈谢邪 屑芯褌芯褉褍"
#define MSG_DAC_PERCENT                     "% 屑芯褌芯褉褍"
#define MSG_DAC_EEPROM_WRITE                "袟邪锌懈褋 笑袗袩 薪邪 袩袟袩"

#define MSG_FILAMENT_CHANGE_HEADER          "袟袗袦袉袧袗 袙袨袥袨袣袧袗"
#define MSG_FILAMENT_CHANGE_OPTION_HEADER   "袧袗袥袗楔孝. 袟袗袦袉袧袠:"
#define MSG_FILAMENT_CHANGE_OPTION_EXTRUDE  "袝泻褋褌褉褍写褍胁邪褌懈"
#define MSG_FILAMENT_CHANGE_OPTION_RESUME   "袙褨写薪芯胁懈褌懈 写褉褍泻"

#if LCD_HEIGHT >= 4
  // Up to 3 lines allowed
  #define MSG_FILAMENT_CHANGE_INIT_1          "袟邪褔械泻邪泄褌械 薪邪"
  #define MSG_FILAMENT_CHANGE_INIT_2          "锌芯褔邪褌芯泻 蟹邪屑褨薪懈"
  #define MSG_FILAMENT_CHANGE_INIT_3          "胁芯谢芯泻薪邪"
  #define MSG_FILAMENT_CHANGE_UNLOAD_1        "袟邪褔械泻邪泄褌械 薪邪"
  #define MSG_FILAMENT_CHANGE_UNLOAD_2        "胁懈胁褨写 胁芯谢芯泻薪邪"
  #define MSG_FILAMENT_CHANGE_INSERT_1        "袙褋褌邪胁褌械 胁芯谢芯泻薪芯"
  #define MSG_FILAMENT_CHANGE_INSERT_2        "褌邪 薪邪褌懈褋薪褨褌褜 写谢褟"
  #define MSG_FILAMENT_CHANGE_INSERT_3        "锌褉芯写芯胁卸械薪薪褟..."
  #define MSG_FILAMENT_CHANGE_LOAD_1          "袟邪褔械泻邪泄褌械 薪邪"
  #define MSG_FILAMENT_CHANGE_LOAD_2          "胁胁褨写 胁芯谢芯泻薪邪"
  #define MSG_FILAMENT_CHANGE_EXTRUDE_1       "袟邪褔械泻邪泄褌械 薪邪"
  #define MSG_FILAMENT_CHANGE_EXTRUDE_2       "械泻褋褌褉褍蟹褨褞"
  #define MSG_FILAMENT_CHANGE_EXTRUDE_3       "胁芯谢芯泻薪邪"
  #define MSG_FILAMENT_CHANGE_RESUME_1        "袟邪褔械泻邪泄褌械 薪邪"
  #define MSG_FILAMENT_CHANGE_RESUME_2        "胁褨写薪芯胁谢械薪薪褟"
  #define MSG_FILAMENT_CHANGE_RESUME_3        "写褉褍泻褍"
#else // LCD_HEIGHT < 4
  // Up to 2 lines allowed
  #define MSG_FILAMENT_CHANGE_INIT_1          "袟邪褔械泻邪泄褌械..."
  #define MSG_FILAMENT_CHANGE_UNLOAD_1        "袙懈胁褨写..."
  #define MSG_FILAMENT_CHANGE_INSERT_1        "袙褋褌邪胁褌械 褨 薪邪褌."
  #define MSG_FILAMENT_CHANGE_LOAD_1          "袙胁褨写..."
  #define MSG_FILAMENT_CHANGE_EXTRUDE_1       "袝泻褋褌褍蟹褨褟..."
  #define MSG_FILAMENT_CHANGE_RESUME_1        "袙褨写薪芯胁谢械薪薪褟..."
#endif // LCD_HEIGHT < 4

#endif // LANGUAGE_UK_H

