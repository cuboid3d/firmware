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
 * Russian
 *
 * LCD Menu Messages
 * See also https://github.com/MarlinFirmware/Marlin/wiki/LCD-Language
 *
 */
#ifndef LANGUAGE_RU_H
#define LANGUAGE_RU_H

#define MAPPER_D0D1                // For Cyrillic
#define DISPLAY_CHARSET_ISO10646_5

#define WELCOME_MSG                         MACHINE_NAME " 袚芯褌芯胁."
#define MSG_SD_INSERTED                     "袣邪褉褌邪 胁褋褌邪胁谢械薪邪"
#define MSG_SD_REMOVED                      "袣邪褉褌邪 懈蟹胁谢械褔械薪邪"
#define MSG_MAIN                            "袦械薪褞"
#define MSG_LCD_ENDSTOPS                    "泻芯薪褑械胁懈泻"
#define MSG_AUTOSTART                       "袗胁褌芯褋褌邪褉褌"
#define MSG_DISABLE_STEPPERS                "袙褘泻谢. 写胁懈谐邪褌械谢懈"
#define MSG_AUTO_HOME                       "袩邪褉泻芯胁泻邪"
#define MSG_LEVEL_BED_HOMING                "袧褍谢械胁芯械 锌芯谢芯卸"
#define MSG_LEVEL_BED_WAITING               "袧邪卸屑懈褌械 薪邪褔邪褌褜"
#define MSG_LEVEL_BED_NEXT_POINT            "小谢械写褍褞褖邪褟 褌芯褔泻邪"
#define MSG_LEVEL_BED_DONE                  "校褉芯胁械薪褜!"
#define MSG_LEVEL_BED_CANCEL                "袨褌屑械薪懈褌褜"
#define MSG_SET_HOME_OFFSETS                "袟邪锌芯屑薪懈褌褜 锌邪褉泻芯胁泻褍"
#define MSG_HOME_OFFSETS_APPLIED            "袣芯褉褉械泻褑懈懈 锌褉懈屑械薪"
#define MSG_SET_ORIGIN                      "袟邪锌芯屑薪懈褌褜 薪芯谢褜"
#define MSG_PREHEAT_1                       "袩褉械写薪邪谐褉械胁 PLA"
#define MSG_PREHEAT_1_N                     "袚褉械褌褜 PLA 小芯锌谢芯 "
#define MSG_PREHEAT_1_ALL                   "袚褉械褌褜 PLA 袙褋械"
#define MSG_PREHEAT_1_BEDONLY               "袚褉械褌褜 PLA 小褌芯谢"
#define MSG_PREHEAT_1_SETTINGS              "袧邪褋褌褉芯泄泻懈 PLA"
#define MSG_PREHEAT_2                       "袩褉械写薪邪谐褉械胁 ABS"
#define MSG_PREHEAT_2_N                     "袚褉械褌褜 ABS 小芯锌谢芯 "
#define MSG_PREHEAT_2_ALL                   "袚褉械褌褜 ABS 袙褋械"
#define MSG_PREHEAT_2_BEDONLY               "袚褉械褌褜 ABS 小褌芯谢"
#define MSG_PREHEAT_2_SETTINGS              "袧邪褋褌褉芯泄泻懈 ABS"
#define MSG_COOLDOWN                        "袨褏谢邪卸写械薪懈械"
#define MSG_SWITCH_PS_ON                    "袙泻谢褞褔懈褌褜 袩懈褌邪薪懈械"
#define MSG_SWITCH_PS_OFF                   "袨褌泻谢褞褔懈褌褜 袩懈褌邪薪懈械"
#define MSG_EXTRUDE                         "协泻褋褌褉褍蟹懈褟"
#define MSG_RETRACT                         "袙褌褟谐懈胁邪薪懈械"
#define MSG_MOVE_AXIS                       "袛胁懈卸械薪懈械 锌芯 芯褋褟屑"
#define MSG_LEVEL_BED                       "袣邪谢懈斜褉芯胁邪褌褜 褋褌芯谢"
#define MSG_MOVE_X                          "袛胁懈卸械薪懈械 锌芯 X"
#define MSG_MOVE_Y                          "袛胁懈卸械薪懈械 锌芯 Y"
#define MSG_MOVE_Z                          "袛胁懈卸械薪懈械 锌芯 Z"
#define MSG_MOVE_E                          "协泻褋褌褉褍写械褉"
#define MSG_MOVE_01MM                       "袛胁懈卸械薪懈械 XYZ 0.1mm"
#define MSG_MOVE_1MM                        "袛胁懈卸械薪懈械 XYZ 1mm"
#define MSG_MOVE_10MM                       "袛胁懈卸械薪懈械 XY 10mm"
#define MSG_SPEED                           "小泻芯褉芯褋褌褜"
#define MSG_BED_Z                           "Z 褋褌芯谢邪"
#define MSG_NOZZLE                          LCD_STR_THERMOMETER " 小芯锌谢芯"
#define MSG_BED                             LCD_STR_THERMOMETER " 小褌芯谢"
#define MSG_FAN_SPEED                       "袣褍谢械褉"
#define MSG_FLOW                            "袩芯褌芯泻"
#define MSG_CONTROL                         "袧邪褋褌褉芯泄泻懈"
#define MSG_MIN                             LCD_STR_THERMOMETER " 袦懈薪懈屑褍屑"
#define MSG_MAX                             LCD_STR_THERMOMETER " 袦邪泻褋懈屑褍屑"
#define MSG_FACTOR                          LCD_STR_THERMOMETER " 肖邪泻褌芯褉"
#define MSG_AUTOTEMP                        "袗胁褌芯褌械屑锌械褉邪褌褍褉邪"
#define MSG_ON                              "袙泻谢. "
#define MSG_OFF                             "袨褌泻谢. "
#define MSG_PID_P                           "PID-P"
#define MSG_PID_I                           "PID-I"
#define MSG_PID_D                           "PID-D"
#define MSG_PID_C                           "PID-C"
#define MSG_ACC                             "Acc"
#define MSG_VX_JERK                         "Vx-褉褘胁芯泻"
#define MSG_VY_JERK                         "Vy-褉褘胁芯泻"
#define MSG_VZ_JERK                         "Vz-褉褘胁芯泻"
#define MSG_VE_JERK                         "Ve-褉褘胁芯泻"
#define MSG_VMAX                            "V屑邪泻褋 "
#define MSG_VMIN                            "V屑懈薪"
#define MSG_VTRAV_MIN                       "V锌褍褌械褕. 屑懈薪"
#define MSG_AMAX                            "A屑邪泻褋"
#define MSG_A_RETRACT                       "A-胁褌褟谐懈胁邪薪懈械"
#define MSG_A_TRAVEL                        "A-锌褍褌械褕."
#define MSG_XSTEPS                          "X 褕邪谐/屑屑"
#define MSG_YSTEPS                          "Y 褕邪谐/屑屑"
#define MSG_ZSTEPS                          "Z 褕邪谐/屑屑"
#define MSG_ESTEPS                          "E 褕邪谐/屑屑"
#define MSG_TEMPERATURE                     "孝械屑锌械褉邪褌褍褉邪"
#define MSG_MOTION                          "袦械褏邪薪懈泻邪"
#define MSG_VOLUMETRIC                      "袩褉褍褌芯泻"
#define MSG_VOLUMETRIC_ENABLED              "E 胁 mm3"
#define MSG_FILAMENT_DIAM                   "袛懈邪屑械褌褉 锌褉褍褌泻邪"
#define MSG_CONTRAST                        "袣芯薪褌褉邪褋褌 LCD"
#define MSG_STORE_EPROM                     "小芯褏褉邪薪懈褌褜 胁 EEPROM"
#define MSG_LOAD_EPROM                      "小褔懈褌邪褌褜 懈蟹 EEPROM"
#define MSG_RESTORE_FAILSAFE                "小斜褉芯褋 EEPROM"
#define MSG_REFRESH                         "袨斜薪芯胁懈褌褜"
#define MSG_WATCH                           "袨斜蟹芯褉"
#define MSG_PREPARE                         "袛械泄褋褌胁懈褟"
#define MSG_TUNE                            "袧邪褋褌褉芯泄泻懈"
#define MSG_PAUSE_PRINT                     "袩邪褍蟹邪 锌械褔邪褌懈"
#define MSG_RESUME_PRINT                    "袩褉芯写芯谢卸懈褌褜 锌械褔邪褌褜"
#define MSG_STOP_PRINT                      "袨褋褌邪薪芯胁懈褌褜 锌械褔邪褌褜"
#define MSG_CARD_MENU                       "袨斜蟹芯褉 泻邪褉褌褘"
#define MSG_NO_CARD                         "袧械褌 泻邪褉褌褘"
#define MSG_DWELL                           "小芯薪..."
#define MSG_USERWAIT                        "袨卸懈写邪薪懈懈械"
#define MSG_RESUMING                        "袙芯蟹芯斜薪芯胁谢械薪懈械..."
#define MSG_PRINT_ABORTED                   "袨褌屑械薪邪 锌械褔邪褌懈"
#define MSG_NO_MOVE                         "袧械褌 写胁懈卸械薪懈褟."
#define MSG_KILLED                          "校袘袠孝袨."
#define MSG_STOPPED                         "袨小孝袗袧袨袙袥袝袧袨."
#define MSG_CONTROL_RETRACT                 "袙褌褟谐懈胁邪薪懈械 mm"
#define MSG_CONTROL_RETRACT_SWAP            "袙褌褟谐. 褋屑械薪褘 mm"
#define MSG_CONTROL_RETRACTF                "袙褌褟谐懈胁邪薪懈械 V"
#define MSG_CONTROL_RETRACT_ZLIFT           "袙褌褟谐. 锌褉褘卸泻邪 mm"
#define MSG_CONTROL_RETRACT_RECOVER         "袙芯蟹胁褉邪褌 +mm"
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    "袙芯蟹胁褉邪褌 褋屑械薪褘 +mm"
#define MSG_CONTROL_RETRACT_RECOVERF        "袙芯蟹胁褉邪褌  V"
#define MSG_AUTORETRACT                     "袗胁褌芯 袙褌褟谐懈胁邪薪懈械"
#define MSG_FILAMENTCHANGE                  "小屑械薪邪 锌褉褍褌泻邪"
#define MSG_INIT_SDCARD                     "袠薪懈褑. 泻邪褉褌褍"
#define MSG_CNG_SDCARD                      "小屑械薪懈褌褜 泻邪褉褌褍"
#define MSG_ZPROBE_OUT                      "Z 写邪褌褔懈泻 胁薪械 褋褌芯谢邪"
#define MSG_HOME                            "袩邪褉泻褍泄 X/Y 锌械褉械写 Z"
#define MSG_FIRST                           "锌械褉胁褘泄"
#define MSG_ZPROBE_ZOFFSET                  "小屑械褖械薪懈械 Z"
#define MSG_BABYSTEP_X                      "袦懈泻褉芯褕邪谐 X"
#define MSG_BABYSTEP_Y                      "袦懈泻褉芯褕邪谐 Y"
#define MSG_BABYSTEP_Z                      "袦懈泻褉芯褕邪谐 Z"
#define MSG_ENDSTOP_ABORT                   "小褉邪斜芯褌邪谢 泻芯薪褑械胁懈泻"
#define MSG_HEATING_FAILED_LCD              "袪邪蟹芯谐褉械胁 薪械 褍写邪谢褋褟"
#define MSG_ERR_REDUNDANT_TEMP              "袨褕懈斜泻邪:小谢懈褕泻芯屑 谐芯褉褟褔芯"
#define MSG_THERMAL_RUNAWAY                 "孝袝袩袥袨 校袘袝袚袗袧袠携!"
#define MSG_ERR_MAXTEMP                     "袨褕懈斜泻邪: 孝 屑邪泻褋."
#define MSG_ERR_MINTEMP                     "袨褕懈斜泻邪: 孝 屑懈薪."
#define MSG_ERR_MAXTEMP_BED                 "袨褕懈斜泻邪:孝 屑邪泻褋.褋褌芯谢"
#define MSG_ERR_MINTEMP_BED                 "袨褕懈斜泻邪:孝 屑懈薪.褋褌芯谢"
#define MSG_HEATING                         "袧邪谐褉械胁邪褞 褋芯锌谢芯..."
#define MSG_HEATING_COMPLETE                "袧邪谐褉械胁 胁褘锌芯谢薪械薪"
#define MSG_BED_HEATING                     "袧邪谐褉械胁邪褞 褋褌芯谢"
#define MSG_BED_DONE                        "小褌芯谢 褉邪蟹芯谐褉械褌"
#define MSG_DELTA_CALIBRATE                 "袣邪谢懈斜褉芯胁泻邪 Delta"
#define MSG_DELTA_CALIBRATE_X               "袣邪谢懈斜褉芯胁邪褌褜 X"
#define MSG_DELTA_CALIBRATE_Y               "袣邪谢懈斜褉芯胁邪褌褜 Y"
#define MSG_DELTA_CALIBRATE_Z               "袣邪谢懈斜褉芯胁邪褌褜 Z"
#define MSG_DELTA_CALIBRATE_CENTER          "袣邪谢懈斜褉芯胁邪褌褜 褑械薪褌褉"

#endif // LANGUAGE_RU_H

