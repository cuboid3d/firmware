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
 * Greek
 *
 * LCD Menu Messages
 * See also https://github.com/MarlinFirmware/Marlin/wiki/LCD-Language
 *
 */
#ifndef LANGUAGE_EL_H
#define LANGUAGE_EL_H

#define MAPPER_CECF
#define DISPLAY_CHARSET_ISO10646_GREEK

#define WELCOME_MSG                         MACHINE_NAME " 苇蟿慰喂渭慰."
#define MSG_SD_INSERTED                     "螘喂蟽伪纬蠅纬萎 魏维蟻蟿伪蟼"
#define MSG_SD_REMOVED                      "螒蠁伪委蟻蔚蟽畏 魏维蟻蟿伪蟼"
#define MSG_LCD_ENDSTOPS                    "Endstops" // Max length 8 characters
#define MSG_MAIN                            "螔伪蟽喂魏萎 螣胃蠈谓畏"
#define MSG_AUTOSTART                       "螒蠀蟿蠈渭伪蟿畏 蔚魏魏委谓畏蟽畏"
#define MSG_DISABLE_STEPPERS                "螒蟺蔚谓蔚蟻纬慰蟺慰委畏蟽畏 螠慰蟿苇蟻"
#define MSG_AUTO_HOME                       "螒蠀蟿慰渭. 蔚蟺伪谓伪蠁慰蟻维 蟽蟿慰 伪蟻蠂喂魏蠈 蟽畏渭蔚委慰" //SHORTEN
#define MSG_AUTO_HOME_X                     "螒蟻蠂喂魏蠈 蟽畏渭蔚委慰 X"
#define MSG_AUTO_HOME_Y                     "螒蟻蠂喂魏蠈 蟽畏渭蔚委慰 Y"
#define MSG_AUTO_HOME_Z                     "螒蟻蠂喂魏蠈 蟽畏渭蔚委慰 Z"
#define MSG_LEVEL_BED_HOMING                "螘蟺伪谓伪蠁慰蟻维 螘蟺. 螘魏蟿蠉蟺蠅蟽畏蟼" //SHORTEN
#define MSG_LEVEL_BED_WAITING               "螘蟺喂蟺蔚未慰蟺慰委畏蟽畏 蔚蟺. 螘魏蟿蠉蟺蠅蟽畏蟼 蟺蔚蟻喂渭蔚谓蔚喂" //SHORTEN
#define MSG_LEVEL_BED_NEXT_POINT            "螘蟺蠈渭蔚谓慰 蟽畏渭蔚委慰"
#define MSG_LEVEL_BED_DONE                  "螣位慰魏位萎蟻蠅蟽畏 蔚蟺喂蟺蔚未慰蟺慰委畏蟽畏蟼!" //SHORTEN
#define MSG_LEVEL_BED_CANCEL                "螒魏蠉蟻蠅蟽畏"
#define MSG_SET_HOME_OFFSETS                "螣蟻喂蟽渭蠈蟼 尾伪蟽喂魏蠋谓 渭蔚蟿伪蟿慰蟺委蟽蔚蠅谓" //SHORTEN
#define MSG_HOME_OFFSETS_APPLIED            "螘蠁伪蟻渭蠈蟽蟿畏魏伪谓 慰喂 渭蔚蟿伪蟿慰蟺委蟽蔚喂蟼" //SHORTEN
#define MSG_SET_ORIGIN                      "螣蟻喂蟽渭蠈蟼 蟺蟻慰苇位蔚蠀蟽畏蟼"
#define MSG_PREHEAT_1                       "螤蟻慰胃苇蟻渭伪谓蟽畏 PLA"
#define MSG_PREHEAT_1_N                     MSG_PREHEAT_1 " "
#define MSG_PREHEAT_1_ALL                   MSG_PREHEAT_1 " 蠈位伪"
#define MSG_PREHEAT_1_BEDONLY               MSG_PREHEAT_1 " bed" //SHORTEN
#define MSG_PREHEAT_1_SETTINGS              MSG_PREHEAT_1 " 蔚蟺喂尾蔚尾伪委蠅蟽畏" //SHORTEN
#define MSG_PREHEAT_2                       "螤蟻慰胃苇蟻渭伪谓蟽畏 ABS"
#define MSG_PREHEAT_2_N                     MSG_PREHEAT_2 " "
#define MSG_PREHEAT_2_ALL                   MSG_PREHEAT_2 " 蠈位伪"
#define MSG_PREHEAT_2_BEDONLY               MSG_PREHEAT_2 " bed" //SHORTEN
#define MSG_PREHEAT_2_SETTINGS              MSG_PREHEAT_2 " 蔚蟺喂尾蔚尾伪委蠅蟽畏" //SHORTEN
#define MSG_COOLDOWN                        "螠蔚喂蠅蟽畏 胃蔚蟻渭慰魏蟻伪蟽喂伪蟼"
#define MSG_SWITCH_PS_ON                    "螘谓蔚蟻纬慰蟺慰委畏蟽畏"
#define MSG_SWITCH_PS_OFF                   "螒蟺蔚谓蔚蟻纬慰蟺慰委畏蟽畏"
#define MSG_EXTRUDE                         "螘尉蠋胃畏蟽畏"
#define MSG_RETRACT                         "螒谓维蟽蠀蟻蟽畏"
#define MSG_MOVE_AXIS                       "螠蔚蟿伪魏委谓畏蟽畏 维尉慰谓伪"
#define MSG_LEVEL_BED                       "螘蟺喂蟺蔚未慰蟺慰委畏蟽畏 螘蟺. 螘魏蟿蠉蟺蠅蟽畏蟼" //SHORTEN
#define MSG_MOVE_X                          "螠蔚蟿伪魏委谓畏蟽畏 X"
#define MSG_MOVE_Y                          "螠蔚蟿伪魏委谓畏蟽畏 Y"
#define MSG_MOVE_Z                          "螠蔚蟿伪魏委谓畏蟽畏 Z"
#define MSG_MOVE_E                          "螘尉蠅胃畏蟿萎蟻伪蟼"
#define MSG_MOVE_01MM                       "螠蔚蟿伪魏委谓畏蟽畏 0,1渭渭"
#define MSG_MOVE_1MM                        "螠蔚蟿伪魏委谓畏蟽畏 1渭渭"
#define MSG_MOVE_10MM                       "螠蔚蟿伪魏委谓畏蟽畏 10渭渭"
#define MSG_SPEED                           "韦伪蠂蠉蟿畏蟿伪"
#define MSG_BED_Z                           "螘蟺. 螘魏蟿蠉蟺蠅蟽畏蟼 Z"
#define MSG_NOZZLE                          "螒魏蟻慰蠁蠉蟽喂慰"
#define MSG_BED                             "螝位委谓畏"
#define MSG_FAN_SPEED                       "韦伪蠂蠉蟿畏蟿伪 伪谓蔚渭喂蟽蟿萎蟻伪"
#define MSG_FLOW                            "巍慰萎"
#define MSG_CONTROL                         "螆位蔚纬蠂慰蟼"
#define MSG_MIN                             " " LCD_STR_THERMOMETER " Min"
#define MSG_MAX                             " " LCD_STR_THERMOMETER " Max"
#define MSG_FACTOR                          " " LCD_STR_THERMOMETER " Fact"
#define MSG_AUTOTEMP                        "螒蠀蟿慰渭 蟻蠉胃渭喂蟽畏 胃蔚蟻/蟽委伪蟼" //SHORTEN
#define MSG_ON                              "螘谓蔚蟻纬慰蟺慰喂畏渭苇谓慰"
#define MSG_OFF                             "螒蟺蔚谓蔚蟻纬慰蟺慰喂畏渭苇谓慰"
#define MSG_PID_P                           "PID-P"
#define MSG_PID_I                           "PID-I"
#define MSG_PID_D                           "PID-D"
#define MSG_PID_C                           "PID-C"
#define MSG_ACC                             "螘蟺喂蟿维蠂蠀谓蟽畏"
#define MSG_VX_JERK                         "V伪谓蟿委未蟻伪蟽畏 x"
#define MSG_VY_JERK                         "V伪谓蟿委未蟻伪蟽畏 y"
#define MSG_VZ_JERK                         "V伪谓蟿委未蟻伪蟽畏 z"
#define MSG_VE_JERK                         "V伪谓蟿委未蟻伪蟽畏 e"
#define MSG_VMAX                            "V 螠苇纬喂蟽蟿慰"
#define MSG_VMIN                            "V 螘位维蠂喂蟽蟿慰"
#define MSG_VTRAV_MIN                       "V蔚位维蠂. 渭蔚蟿伪蟿蠈蟺喂蟽畏"
#define MSG_AMAX                            "A渭蔚纬 "
#define MSG_A_RETRACT                       "螒-伪谓维蟽蠀蟻蟽畏"
#define MSG_A_TRAVEL                        "螒-渭蔚蟿伪蟿蠈蟺喂蟽畏"
#define MSG_XSTEPS                          "B萎渭伪蟿伪 X 伪谓维 渭渭"
#define MSG_YSTEPS                          "B萎渭伪蟿伪 违 伪谓维 渭渭"
#define MSG_ZSTEPS                          "B萎渭伪蟿伪 螙 伪谓维 渭渭"
#define MSG_ESTEPS                          "B萎渭伪蟿伪 螘 伪谓维 渭渭"
#define MSG_TEMPERATURE                     "螛蔚蟻渭慰魏蟻伪蟽委伪"
#define MSG_MOTION                          "螝委谓畏蟽畏"
#define MSG_VOLUMETRIC                      "螡萎渭伪"
#define MSG_VOLUMETRIC_ENABLED              "螘 蟽蔚 渭渭3"
#define MSG_FILAMENT_DIAM                   "螖喂维渭蔚蟿蟻慰蟼 谓萎渭伪蟿慰蟼"
#define MSG_CONTRAST                        "螝慰谓蟿蟻维蟽蟿 LCD"
#define MSG_STORE_EPROM                     "螒蟺慰胃萎魏蔚蠀蟽畏"
#define MSG_LOAD_EPROM                      "桅蠈蟻蟿蠅蟽畏"
#define MSG_RESTORE_FAILSAFE                "螘蟺伪谓伪蠁慰蟻维 伪蟽蠁伪位慰蠉蟼 伪谓蟿喂纬蟻维蠁慰蠀" //SHORTEN
#define MSG_REFRESH                         "螒谓伪谓苇蠅蟽畏"
#define MSG_WATCH                           "螣胃蠈谓畏 蟺位畏蟻慰蠁蠈蟻畏蟽畏蟼"
#define MSG_PREPARE                         "螤蟻慰蔚蟿慰喂渭伪蟽委伪"
#define MSG_TUNE                            "危蠀谓蟿慰谓喂蟽渭蠈蟼"
#define MSG_PAUSE_PRINT                     "螤伪蠉蟽畏 蔚魏蟿蠉蟺蠅蟽畏蟼"
#define MSG_RESUME_PRINT                    "危蠀谓苇蠂喂蟽畏 蔚魏蟿蠉蟺蠅蟽畏蟼"
#define MSG_STOP_PRINT                      "螖喂伪魏慰蟺萎 蔚魏蟿蠉蟺蠅蟽畏蟼"
#define MSG_CARD_MENU                       "螘魏蟿蠉蟺蠅蟽畏 伪蟺蠈 SD"
#define MSG_NO_CARD                         "螖蔚谓 尾蟻苇胃畏魏蔚 SD"
#define MSG_DWELL                           "螒谓伪蟽蟿慰位萎 位蔚喂蟿慰蠀蟻纬委伪蟼"
#define MSG_USERWAIT                        "螒谓伪渭慰谓萎 纬喂伪 蠂蟻萎蟽蟿畏"
#define MSG_RESUMING                        "危蠀谓蔚蠂委味蔚蟿伪喂 畏 蔚魏蟿蠉蟺蠅蟽畏" //SHORTEN
#define MSG_PRINT_ABORTED                   "螖喂伪魏蠈蟺蟿蔚蟿伪喂 畏 蔚魏蟿蠉蟺蠅蟽畏" //SHORTEN
#define MSG_NO_MOVE                         "螝伪渭委伪 魏委谓畏蟽畏."
#define MSG_KILLED                          "韦螘巍螠螒韦螜危螠螣危. "
#define MSG_STOPPED                         "螖螜螒螝螣螤螚. "
#define MSG_CONTROL_RETRACT                 "螒谓维蟽蠀蟻蟽畏 渭渭"
#define MSG_CONTROL_RETRACT_SWAP            "螘谓伪位位伪纬萎 伪谓维蟽蠀蟻蟽畏蟼 渭渭"  //SHORTEN
#define MSG_CONTROL_RETRACTF                "螒谓维蟽蠀蟻蟽畏 V"
#define MSG_CONTROL_RETRACT_ZLIFT           "螠蔚蟿伪蟺萎未畏蟽畏 渭渭"
#define MSG_CONTROL_RETRACT_RECOVER         "UnRet +mm"
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    "S UnRet+mm"
#define MSG_CONTROL_RETRACT_RECOVERF        "UnRet  V"
#define MSG_AUTORETRACT                     "螒蠀蟿蠈渭伪蟿畏 伪谓维蟽蠀蟻蟽畏"
#define MSG_FILAMENTCHANGE                  "螒位位伪纬萎 谓萎渭伪蟿慰蟼"
#define MSG_INIT_SDCARD                     "螤蟻慰蔚蟿慰喂渭伪蟽委伪 魏维蟻蟿伪蟼 SD"  //SHORTEN
#define MSG_CNG_SDCARD                      "螒位位伪纬萎 魏维蟻蟿伪蟼 SD"
#define MSG_ZPROBE_OUT                      "螖喂蔚蟻蔚蠉谓畏蟽畏 Z 蔚魏蟿蠈蟼 螘蟺.螘魏蟿蠉蟺蠅蟽畏蟼" //SHORTEN
#define MSG_YX_UNHOMED                      "螘蟺伪谓伪蠁慰蟻维 围/违 蟺蟻喂谓 伪蟺蠈 螙" //SHORTEN
#define MSG_XYZ_UNHOMED                     "螘蟺伪谓伪蠁慰蟻维 围违螙 蟺蟻蠋蟿伪"
#define MSG_ZPROBE_ZOFFSET                  "螠蔚蟿伪蟿蠈蟺喂蟽畏 螙"
#define MSG_BABYSTEP_X                      "螠喂魏蟻蠈 尾萎渭伪 围"
#define MSG_BABYSTEP_Y                      "螠喂魏蟻蠈 尾萎渭伪 违"
#define MSG_BABYSTEP_Z                      "螠喂魏蟻蠈 尾萎渭伪 螙"
#define MSG_ENDSTOP_ABORT                   "螒魏蠉蟻蠅蟽畏 endstop "
#define MSG_HEATING_FAILED_LCD              "螒谓蔚蟺喂蟿蠀蠂萎蟼 胃苇蟻渭伪谓蟽畏"
#define MSG_ERR_REDUNDANT_TEMP              "螤螞螘螣螡螒螙螣违危螒 螛螘巍螠螣韦螚韦螒"
#define MSG_THERMAL_RUNAWAY                 "螖螜螒桅违螕螚 螛螘巍螠螣螝巍螒危螜螒危"
#define MSG_ERR_MAXTEMP                     "螤螘巍螜韦螚 螛螘巍螠螣螝巍螒危螜螒"
#define MSG_ERR_MINTEMP                     "螠螚 螘螤螒巍螝螚危 螛螘巍螠螣螝巍螒危螜螒危" //SHORTEN
#define MSG_ERR_MAXTEMP_BED                 "螠螘螕螜危韦螚 螛螘巍螠螣螝巍螒危螜螒危 螘螤. 螘螝韦违螤惟危螚危" //SHORTEN
#define MSG_ERR_MINTEMP_BED                 "螘螞螒围螜危韦螚 螛螘巍螠螣螝巍螒危螜螒危 螘螤. 螘螝韦违螤惟危螚危" //SHORTEN
#define MSG_HALTED                          "H 蔚魏蟿蠉蟺蠅蟽畏 未喂伪魏蠈蟺畏魏蔚"
#define MSG_PLEASE_RESET                    "PLEASE RESET" //TRANSLATE
#define MSG_HEATING                         "螛蔚蟻渭伪委谓蔚蟿伪喂鈥�"
#define MSG_HEATING_COMPLETE                "螚 胃苇蟻渭伪谓蟽畏 慰位慰魏位畏蟻蠋胃畏魏蔚." //SHORTEN
#define MSG_BED_HEATING                     "螛苇蟻渭伪谓蟽畏 螘螤. 螘魏蟿蠉蟺蠅蟽畏蟼" //SHORTEN
#define MSG_BED_DONE                        "螚 螘蟺. 螘魏蟿蠉蟺蠅蟽畏蟼 慰位慰魏位畏蟻蠋胃畏魏蔚" //SHORTEN
#define MSG_DELTA_CALIBRATE                 "螔伪胃渭慰谓蠈渭畏蟽畏 Delta"
#define MSG_DELTA_CALIBRATE_X               "螔伪胃渭慰谓蠈渭畏蟽畏 X"
#define MSG_DELTA_CALIBRATE_Y               "螔伪胃渭慰谓蠈渭畏蟽畏 Y"
#define MSG_DELTA_CALIBRATE_Z               "螔伪胃渭慰谓蠈渭畏蟽畏 Z"
#define MSG_DELTA_CALIBRATE_CENTER          "螔伪胃渭慰谓蠈渭畏蟽畏 魏苇谓蟿蟻慰蠀"

#define MSG_INFO_MENU                       "About Printer"
#define MSG_INFO_PRINTER_MENU               "Printer Info"
#define MSG_INFO_STATS_MENU                 "Printer Stats"
#define MSG_INFO_BOARD_MENU                 "Board Info"
#define MSG_INFO_THERMISTOR_MENU            "Thermistors"
#define MSG_INFO_EXTRUDERS                  "Extruders"
#define MSG_INFO_BAUDRATE                   "Baud"
#define MSG_INFO_PROTOCOL                   "Protocol"

#if LCD_WIDTH >= 20
  #define MSG_INFO_PRINT_COUNT              "Print Count"
  #define MSG_INFO_COMPLETED_PRINTS         "Completed  "
  #define MSG_INFO_PRINT_TIME               "Total Time "
#else
  #define MSG_INFO_PRINT_COUNT              "Prints   "
  #define MSG_INFO_COMPLETED_PRINTS         "Completed"
  #define MSG_INFO_PRINT_TIME               "Duration "
#endif
#define MSG_INFO_MIN_TEMP                   "Min Temp"
#define MSG_INFO_MAX_TEMP                   "Max Temp"
#define MSG_INFO_PSU                        "Power Supply"

#define MSG_FILAMENT_CHANGE_HEADER          "CHANGE FILAMENT"
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
#endif

#endif // LANGUAGE_EL_H

