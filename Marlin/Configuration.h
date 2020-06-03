/**
 * Marlin 3D打印机固件
 * 版权所有 (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 * Translation from QwejayHuang [https://github.com/QweJay/Marlin]
 * Based on Sprinter and grbl.
 * 版权所有 (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * 该程序是免费软件：您可以重新发布和/或修改
 * 根据GNU通用公共许可证条款发布
 * 自由软件基金会，许可证的第三版，或者
 *（可选）任何更新的版本。
 * 这个程序是分发的，希望它会有用，
 * 但没有任何担保; 甚至没有暗示的保证
 * 适销性或针对特定用途的适用性。看到了
 * GNU通用公共许可证更多细节。
 * 您应该收到GNU通用公共许可证的副本
 * 随着这个程序。如果没有，请参阅
 * <http://www.gnu.org/licenses/>。
 * /
 #一次编译

/**
 * Configuration.h
 *
 *基本设置，例如：
 *
 *-电子类型
 *-温度传感器
 *-打印机结构
 *-Endstop配置
 *-LCD控制器
 *-额外功能
 *
 *高级设置可以在Configuration_adv.h中找到
 *
 */
#define CONFIGURATION_H_VERSION 020005  //配置版本

//===========================================================================
//============================= Getting Started 入门 ========================
//===========================================================================

/**
 *以下是用于校准机器的一些标准链接：
 *
 * http://reprap.org/wiki/Calibration
 * http://youtu.be/wAL9d7FgInk
 * http://calculator.josefprusa.cz
 * http://reprap.org/wiki/Triffid_Hunter%27s_Calibration_Guide
 * http://www.thingiverse.com/thing:5573
 * https://sites.google.com/site/repraplogphase/calibration-of-your-reprap
 * http://www.thingiverse.com/thing:298812
 */

//===========================================================================
//============================= DELTA Printer 三角洲打印机===================
//===========================================================================
// 对于Delta打印机，请从config/examples/delta中的配置文件开始并针对您的机器进行自定义。

//===========================================================================
//============================= SCARA Printer 机械臂3D打印机 ================
//===========================================================================
// 对于SCARA打印机，请从config/examples/SCARA中的配置文件开始并针对您的机器进行自定义。
//

// @固件信息
/**
 * 将显示在Marlin启动消息中，并用于标识固件的作者（和可选变体）。 
 * 使用此设置作为唯一标识所有自定义配置的方法。当连接到主​​机软件，板子重启和M115时，将打印启动消息。
 */
// 在引导期间，此版本的作者信息会打印到主机上
#define STRING_CONFIG_H_AUTHOR "(无，默认配置)" // 谁进行了更改.
//#define CUSTOM_VERSION_FILE Version.h // 根目录的路径（无引号）

/**
 * *** 供应商请阅读 ***
 *
 * Marlin允许您为图形LCD添加自定义启动映像。
 * 使用此选项，Marlin首先显示您的自定义屏幕。
 * 由带有版本号和Web URL的标准Marlin徽标组成。
 *
 * 我们鼓励您利用这项新功能。
 * 请您谨请保留未经修改的Marlin引导屏幕。
 * /

// 启动时显示Marlin引导屏幕。 **可以生产**
#define SHOW_BOOTSCREEN

// 启动时在Marlin/_Bootscreen.h中显示位图。
//#define SHOW_CUSTOM_BOOTSCREEN

// 启动时在Marlin/_Statusscreen.h中的状态屏幕上显示位图。
//#define CUSTOM_STATUS_SCREEN_IMAGE

// @切片机

/**
 * 选择用于与主机通信的串行端口。
 * 这样可以将无线适配器连接到非默认端口引脚。
 * 串行端口-1是USB模拟的串行端口（如果可用）。
 * 注意：Arduino 引导加载程序将始终使用第一个串行端口（-1 或 0）。
 *
 * :[-1, 0, 1, 2, 3, 4, 5, 6, 7]
 */
#define SERIAL_PORT 0

/**
 * 选择板上的辅助串行端口，用于与主机通信。
 * :[-1, 0, 1, 2, 3, 4, 5, 6, 7]
 */
//#define SERIAL_PORT_2 -1  //串行端口-1是USB仿真串行端口(如果可用)。

/**
 * 此设置确定打印机的通信速度。
 *
 * 250000 在大多数情况下有效，但如果在打印过程中，您通常遇到丢失打印机。
 * 您可以尝试 1000000 的通信速度以提高 SD 文件的传输速度。
 *
 * 参考通信速度:[2400, 9600, 19200, 38400, 57600, 115200, 250000, 500000, 1000000]
 */
#define BAUDRATE 250000   //通信波特率设置

// 在 AT90USB 设备上启用蓝牙串行接口
//#define BLUETOOTH

//以下定义选择您拥有的电子板。
//请选择与您的设置匹配的boards.h中的名称
/**
 * 最重要的设置是选择主板。固件需要知道它将在哪个板上运行，以便可以为所有引脚分配正确的功能，
 * 并利用该板的全部功能。 错误地设置此选项将导致不可预测的结果。
 *参照boards.h，将BOARD_RAMPS_14_EFB替换为您的主板ID。 
 * boards.h文件包含支持的板卡的最新列表，因此如果未在其中列出您的文件，请首先进行检查。
 */
#ifndef MOTHERBOARD
  #define MOTHERBOARD BOARD_RAMPS_14_EFB  //定义主机板 BOARD_RAMPS_14_EFB
#endif

// LCD“就绪”消息和“信息”菜单中显示的名称
 /**
 * 这是显示在LCD和M115上的打印机的名称。例如，如果您将此设置为My Delta，那么当打印机启动时，LCD将显示我的Delta。
 */ 
#define CUSTOM_MACHINE_NAME "My 3D Printer"  //自定义打印机名称

// 打印机的唯一ID，某些程序使用它来区分机器。
// 选择自己的服务或使用类似的服务 http://www.uuidgenerator.net/version4
#define MACHINE_UUID "b30cc1b9-816a-4a40-b78e-6676a18c8abd"  //设置打印机UUID

// @挤出机

// 这定义了挤出机的数量
// :[1, 2, 3, 4, 5, 6, 7, 8]
#define EXTRUDERS 1  //挤出机数量

// 一般的直径有（1.75, 2.85, 3.0, ...）用于体积、丝宽传感器等。
#define DEFAULT_NOMINAL_FILAMENT_DIA 1.75

// 开启多挤出机混色打印。
//#define SINGLENOZZLE

/**
 * Průša MK2型单喷嘴多材料多路复用器和变种。
 *
 * 该设备允许一个步进驱动器在控制板上驱动两个
 * 至八个合适的步进电机，每次一个挤压机。
 *
 * 此选项只允许多路复用器打开工具更改。
 * 正在等待配置自定义E步的其他选项。
 */
//#define MK2_MULTIPLEXER
#if ENABLED(MK2_MULTIPLEXER)
  // 如果需要，请在此处覆盖默认 DIO 选择器引脚。
  // 某些引脚文件可能会提供这些引脚的默认值。
  //#define E_MUX0_PIN 40  // 始终需要
  //#define E_MUX1_PIN 42  // 需要3到8个步进器
  //#define E_MUX2_PIN 44  // 需要5到8个步进器
#endif

/**
 * 普鲁萨多材料单元 v2
 *
 * 在 MMU 单元发生故障时，需要NOZZLE_PARK_FEATURE驻留打印头。
 * 需要挤出机 = 5
 *
 * 有关其他配置，请参阅 Configuration_adv.h
 */
//#define PRUSA_MMU2

// 使用单个步进电机的双挤出机
//#define SWITCHING_EXTRUDER
#if ENABLED(SWITCHING_EXTRUDER)
  #define SWITCHING_EXTRUDER_SERVO_NR 0
  #define SWITCHING_EXTRUDER_SERVO_ANGLES { 0, 90 } // 角为E0，E1 [，E2，E3]
  #if EXTRUDERS > 3
    #define SWITCHING_EXTRUDER_E23_SERVO_NR 1
  #endif
#endif

// 使用伺服电机来升高/降低一个（或两个）喷嘴的双喷嘴
//#define SWITCHING_NOZZLE
#if ENABLED(SWITCHING_NOZZLE)
  #define SWITCHING_NOZZLE_SERVO_NR 0
  //#define SWITCHING_NOZZLE_E1_SERVO_NR 1          // 如果使用两个伺服，则第二个的索引
  #define SWITCHING_NOZZLE_SERVO_ANGLES { 0, 90 }   // E0，E1（单伺服）或降低/升高（双伺服）的角度
#endif

/**
 * 两个独立的x轴，带有连接移动部件的挤出机
 * 通过螺线管对接机构。需要 SOL1_PIN 和 SOL2_PIN。
 */
//#define PARKING_EXTRUDER

/**
 * 两个带有挤出机的独立X架，这些挤出机连接到运动部件
 * 通过使用运动且无电磁阀的磁性对接机制
 *
 * 项目   : https://www.thingiverse.com/thing:3080893
 * 视频 : https://youtu.be/0xCEiG9VS3k
 *             https://youtu.be/Bqbcs0CU2FE
 */
//#define MAGNETIC_PARKING_EXTRUDER

#if EITHER(PARKING_EXTRUDER, MAGNETIC_PARKING_EXTRUDER)

  #define PARKING_EXTRUDER_PARKING_X { -78, 184 }     // X 的位置，用于存放挤出机
  #define PARKING_EXTRUDER_GRAB_DISTANCE 1            //（mm）超出停止点以抓住挤出机的距离
  //#define MANUAL_SOLENOID_CONTROL                   // 使用M380 S / M381手动控制对接螺线管

  #if ENABLED(PARKING_EXTRUDER)

    #define PARKING_EXTRUDER_SOLENOIDS_INVERT           // 如果启用，则螺线管不会被施加的电压磁化
    #define PARKING_EXTRUDER_SOLENOIDS_PINS_ACTIVE LOW  // LOW或HIGH引脚信号使线圈通电
    #define PARKING_EXTRUDER_SOLENOIDS_DELAY 250        //（ms）磁场延迟。 没有延迟（如果为0或未定义）。
    //#define MANUAL_SOLENOID_CONTROL                   // 使用M380 S / M381手动控制对接螺线管

  #elif ENABLED(MAGNETIC_PARKING_EXTRUDER)

    #define MPE_FAST_SPEED      9000      // (mm/m) Speed for travel before last distance point
    #define MPE_SLOW_SPEED      4500      // (mm/m) Speed for last distance travel to park and couple
    #define MPE_TRAVEL_DISTANCE   10      // (mm) Last distance point
    #define MPE_COMPENSATION       0      // Offset Compensation -1 , 0 , 1 (multiplier) only for coupling

  #endif

#endif

/**
 * 换刀夹
 *
 * 支持可切换和可停靠的工具头，例如
 * E3D换刀器。工具头被伺服系统锁定。
 */
//#define SWITCHING_TOOLHEAD

/**
 * 磁性切换刀头
 *
 * 支持更换和停靠工具头与磁
 * 对接机构采用运动，无伺服。
 */
//#define MAGNETIC_SWITCHING_TOOLHEAD

/**
 * 电磁开关刀头
 *
 * Parking for CoreXY / HBot kinematics.
 * 刀头停在一侧，用电磁铁固定。
 * 支持超过2个工具头，参见https://youtu.be/JolbsAKTKf4
 */
//#define ELECTROMAGNETIC_SWITCHING_TOOLHEAD

#if ANY(SWITCHING_TOOLHEAD, MAGNETIC_SWITCHING_TOOLHEAD, ELECTROMAGNETIC_SWITCHING_TOOLHEAD)
  #define SWITCHING_TOOLHEAD_Y_POS          235         // (mm) Y position of the toolhead dock
  #define SWITCHING_TOOLHEAD_Y_SECURITY      10         // (mm) Security distance Y axis
  #define SWITCHING_TOOLHEAD_Y_CLEAR         60         // (mm) Minimum distance from dock for unobstructed X axis
  #define SWITCHING_TOOLHEAD_X_POS          { 215, 0 }  // (mm) X positions for parking the extruders
  #if ENABLED(SWITCHING_TOOLHEAD)
    #define SWITCHING_TOOLHEAD_SERVO_NR       2         // Index of the servo connector
    #define SWITCHING_TOOLHEAD_SERVO_ANGLES { 0, 180 }  // (degrees) Angles for Lock, Unlock
  #elif ENABLED(MAGNETIC_SWITCHING_TOOLHEAD)
    #define SWITCHING_TOOLHEAD_Y_RELEASE      5         // (mm) Security distance Y axis
    #define SWITCHING_TOOLHEAD_X_SECURITY   { 90, 150 } // (mm) Security distance X axis (T0,T1)
    //#define PRIME_BEFORE_REMOVE                       // Prime the nozzle before release from the dock
    #if ENABLED(PRIME_BEFORE_REMOVE)
      #define SWITCHING_TOOLHEAD_PRIME_MM           20  // (mm)   Extruder prime length
      #define SWITCHING_TOOLHEAD_RETRACT_MM         10  // (mm)   Retract after priming length
      #define SWITCHING_TOOLHEAD_PRIME_FEEDRATE    300  // (mm/m) Extruder prime feedrate
      #define SWITCHING_TOOLHEAD_RETRACT_FEEDRATE 2400  // (mm/m) Extruder retract feedrate
    #endif
  #elif ENABLED(ELECTROMAGNETIC_SWITCHING_TOOLHEAD)
    #define SWITCHING_TOOLHEAD_Z_HOP          2         // (mm) Z raise for switching
  #endif
#endif

/**
 *“混合挤出机”
 *-添加G代码M163和M164来设置和“提交”当前的混合因子。
 *-扩展步进例程以根据混合比例移动多个步进器。
 *-对Repetier固件的'M164 S <index>'支持的虚拟工具的可选支持。
 *-此实现最多支持两个混合挤出机。
 *-为M165启用DIRECT_MIXING_IN_G1并在G1中混合（来自Pia Taubert的参考实现）。
 */
//#define MIXING_EXTRUDER
#if ENABLED(MIXING_EXTRUDER)
  #define MIXING_STEPPERS 2        // 混合挤出机中步进机的数量
  #define MIXING_VIRTUAL_TOOLS 16  // 对M163和M164使用虚拟工具方法
  //#define DIRECT_MIXING_IN_G1    // 在G1运动命令中允许ABCDHI混合因子
  //#define GRADIENT_MIX           // 支持与M166和LCD进行梯度混合
  #if ENABLED(GRADIENT_MIX)
    //#define GRADIENT_VTOOL       // 添加M166 T以使用V-tool索引作为渐变别名
  #endif
#endif

//挤出机的偏移量（如果使用多个挤出机，并且在更换时依靠固件来定位，则不予注释）。
//对于挤出机0 hotend（默认挤出机），偏移量必须为X = 0，Y = 0。
//对于其他加热头，它们是与挤出机0热点的距离。
//#define HOTEND_OFFSET_X { 0.0, 20.00 } // (mm) relative X-offset for each nozzle
//#define HOTEND_OFFSET_Y { 0.0, 5.00 }  // (mm) relative Y-offset for each nozzle
//#define HOTEND_OFFSET_Z { 0.0, 0.00 }  // (mm) relative Z-offset for each nozzle

// @切片机

/**
 * 电源控制
 *
 * 启用电源并将其连接到PS_ON_PIN。
 * 指定电源是有源高电平还是有源低电平。
 */
//#define PSU_CONTROL
//#define PSU_NAME "Power Supply"

#if ENABLED(PSU_CONTROL)
  #define PSU_ACTIVE_HIGH false     // 为ATX设置“false”，为X-Box设置“true”

  //#define PSU_DEFAULT_OFF         // 关闭电源，直到使用M80启用（双电源供应的打印机可以启用）
  //#define PSU_POWERUP_DELAY 100   // (ms)延迟PSU升温至全功率

  //#define AUTO_POWER_CONTROL      // 启用PS_ON引脚的自动控制
  #if ENABLED(AUTO_POWER_CONTROL)
    #define AUTO_POWER_FANS         // 如果风扇需要电力，打开PSU
    #define AUTO_POWER_E_FANS
    #define AUTO_POWER_CONTROLLERFAN
    #define AUTO_POWER_CHAMBER_FAN
    //#define AUTO_POWER_E_TEMP        50 // (℃)在此温度下打开PSU
    //#define AUTO_POWER_CHAMBER_TEMP  30 // (℃)在此温度下打开PSU
    #define POWER_TIMEOUT 30
  #endif
#endif

// @温控部分

//===========================================================================
//============================= Thermal Settings 温控设定 ===================
//===========================================================================

/**
 * --正常情况下是 4.7千欧姆上拉电阻！-在正确的电阻和工作台上，可在热传感器上使用1000欧姆上拉电阻可用的温度传感器：
 *
 *    -5 : PT100 / PT1000 with MAX31865 (only for sensors 0-1)
 *    -3 : thermocouple with MAX31855 (only for sensors 0-1)
 *    -2 : thermocouple with MAX6675 (only for sensors 0-1)
 *    -4 : thermocouple with AD8495
 *    -1 : thermocouple with AD595
 *     0 : not used
 *     1 : 100k thermistor - best choice for EPCOS 100k (4.7k pullup)
 *   331 : (3.3V scaled thermistor 1 table for MEGA)
 *   332 : (3.3V scaled thermistor 1 table for DUE)
 *     2 : 200k thermistor - ATC Semitec 204GT-2 (4.7k pullup)
 *   202 : 200k thermistor - Copymaster 3D
 *     3 : Mendel-parts thermistor (4.7k pullup)
 *     4 : 10k thermistor !! do not use it for a hotend. It gives bad resolution at high temp. !!
 *     5 : 100K thermistor - ATC Semitec 104GT-2/104NT-4-R025H42G (Used in ParCan & J-Head) (4.7k pullup)
 *   501 : 100K Zonestar (Tronxy X3A) Thermistor
 *   512 : 100k RPW-Ultra hotend thermistor (4.7k pullup)
 *     6 : 100k EPCOS - Not as accurate as table 1 (created using a fluke thermocouple) (4.7k pullup)
 *     7 : 100k Honeywell thermistor 135-104LAG-J01 (4.7k pullup)
 *    71 : 100k Honeywell thermistor 135-104LAF-J01 (4.7k pullup)
 *     8 : 100k 0603 SMD Vishay NTCS0603E3104FXT (4.7k pullup)
 *     9 : 100k GE Sensing AL03006-58.2K-97-G1 (4.7k pullup)
 *    10 : 100k RS thermistor 198-961 (4.7k pullup)
 *    11 : 100k beta 3950 1% thermistor (4.7k pullup)
 *    12 : 100k 0603 SMD Vishay NTCS0603E3104FXT (4.7k pullup) (calibrated for Makibox hot bed)
 *    13 : 100k Hisens 3950  1% up to 300°C for hotend "Simple ONE " & "Hotend "All In ONE"
 *    15 : 100k thermistor calibration for JGAurora A5 hotend
 *    18 : ATC Semitec 204GT-2 (4.7k pullup) Dagoma.Fr - MKS_Base_DKU001327
 *    20 : Pt100 with circuit in the Ultimainboard V2.x with 5v excitation (AVR)
 *    21 : Pt100 with circuit in the Ultimainboard V2.x with 3.3v excitation (STM32 \ LPC176x....)
 *   201 : Pt100 with circuit in Overlord, similar to Ultimainboard V2.x
 *    60 : 100k Maker's Tool Works Kapton Bed Thermistor beta=3950
 *    61 : 100k Formbot / Vivedino 3950 350C thermistor 4.7k pullup
 *    66 : 4.7M High Temperature thermistor from Dyze Design
 *    67 : 450C thermistor from SliceEngineering
 *    70 : the 100K thermistor found in the bq Hephestos 2
 *    75 : 100k Generic Silicon Heat Pad with NTC 100K MGB18-104F39050L32 thermistor
 *    99 : 100k thermistor with a 10K pull-up resistor (found on some Wanhao i3 machines)
 *
 *       1k ohm pullup tables - This is atypical, and requires changing out the 4.7k pullup for 1k.
 *                              (but gives greater accuracy and more stable PID)
 *    51 : 100k thermistor - EPCOS (1k pullup)
 *    52 : 200k thermistor - ATC Semitec 204GT-2 (1k pullup)
 *    55 : 100k thermistor - ATC Semitec 104GT-2 (Used in ParCan & J-Head) (1k pullup)
 *
 *  1047 : Pt1000 with 4k7 pullup
 *  1010 : Pt1000 with 1k pullup (non standard)
 *   147 : Pt100 with 4k7 pullup
 *   110 : Pt100 with 1k pullup (non standard)
 *
 *  1000 : Custom - Specify parameters in Configuration_adv.h
 *
 *         Use these for Testing or Development purposes. NEVER for production machine.
 *   998 : Dummy Table that ALWAYS reads 25°C or the temperature defined below.
 *   999 : Dummy Table that ALWAYS reads 100°C or the temperature defined below.
 */
#define TEMP_SENSOR_0 1  //喷嘴温度传感器
#define TEMP_SENSOR_1 0
#define TEMP_SENSOR_2 0
#define TEMP_SENSOR_3 0
#define TEMP_SENSOR_4 0
#define TEMP_SENSOR_5 0
#define TEMP_SENSOR_6 0
#define TEMP_SENSOR_7 0
#define TEMP_SENSOR_BED 1   //热床温度传感器
#define TEMP_SENSOR_PROBE 0
#define TEMP_SENSOR_CHAMBER 0

// 上面这些值是温度传感器类型配置，是能否正常读取温度的重要参数。
// TEMP_SENSOR_0是喷嘴温度传感器
// TEMP_SENSOR_BED是热床温度传感器，配置为1说明两个都是100K ntc热敏电阻。
// 如果你使用了其它温度传感器需要根据情况自行更改。如果没有，配置为0

// 虚拟热敏电阻恒温读数，用于998和999
#define DUMMY_THERMISTOR_998_VALUE 25
#define DUMMY_THERMISTOR_999_VALUE 100

// 使用温度传感器 1 作为传感器 0 的冗余传感器
// 使用温度传感器 1 作为传感器 0 的冗余传感器。如果两个传感器的读数差异过大，打印将中止。
//#define TEMP_SENSOR_1_AS_REDUNDANT
#define MAX_REDUNDANT_TEMP_SENSOR_DIFF 10

#define TEMP_RESIDENCY_TIME     10  // （秒）等待热端在 M109 中"稳定"的时间
#define TEMP_WINDOW              1  // （°C）"温度达到"计时器的温度接近度
#define TEMP_HYSTERESIS          3  // （°C）温度接近被认为"足够接近"目标

#define TEMP_BED_RESIDENCY_TIME 10  // （秒）时间等待床"定居"在M190
#define TEMP_BED_WINDOW          1  // （°C）"温度达到"计时器的温度接近度
#define TEMP_BED_HYSTERESIS      3  // （°C）温度接近被认为"足够接近"目标

// 低于此温度加热器将会关闭
// （可能热敏电阻线损坏或者线路断裂）
// “Err：MINTEMP”：如果出现此错误表示您的热敏电阻已断开连接或断路。 （或者机器太冷了。）
/**
 * 这些参数有助于防止打印机过热和起火。当温度传感器失效或断开连接时，温度传感器会报告异常低的值。
 * 将这些设置为机器可能会经历的最低值(以摄氏度为单位)。
 * 室内温度范围从10 - 40C，对于不加热的热床，请将其值设为0。
 */ 
#define HEATER_0_MINTEMP   5
#define HEATER_1_MINTEMP   5
#define HEATER_2_MINTEMP   5
#define HEATER_3_MINTEMP   5
#define HEATER_4_MINTEMP   5
#define HEATER_5_MINTEMP   5
#define HEATER_6_MINTEMP   5
#define HEATER_7_MINTEMP   5
#define BED_MINTEMP        5

// 高于此温度，加热器将关闭。
// 这可以保护组件免受过热的影响，但不能防止短路和故障。
//（使用 MinTEMP 进行热敏电阻短路/故障保护)。
/**
 * 每个温度传感器的最高温度。如果Marlin读取的温度高于这些值，出于安全考虑，它会立即关闭。
 * 对于E3D V6 挤出头，许多人使用285作为最大值。
 */ 
#define HEATER_0_MAXTEMP 275  //1号打印头的最大温度，下面以此类推。
#define HEATER_1_MAXTEMP 275
#define HEATER_2_MAXTEMP 275
#define HEATER_3_MAXTEMP 275
#define HEATER_4_MAXTEMP 275
#define HEATER_5_MAXTEMP 275
#define HEATER_6_MAXTEMP 275
#define HEATER_7_MAXTEMP 275
#define BED_MAXTEMP      150  //热床温度传感器最大温度。

//===========================================================================
//============================= PID Settings PID 设置 =======================
//===========================================================================
// PID 调整指南: http://reprap.org/wiki/PID_Tuning

// 注释下面的行来禁用PID并启用bang-bang。
#define PIDTEMP
#define BANG_MAX 255     //在bang-bang模式下将限制喷嘴电流； 255 = 全电流
#define PID_MAX BANG_MAX //在PID激活时将限制喷嘴电流（请参见下面的PID_FUNCTIONAL_RANGE）； 255 = 全电流
#define PID_K1 0.95      // 在任何PID循环中的平滑因子
#if ENABLED(PIDTEMP)
  //#define PID_EDIT_MENU         // 将PID编辑添加到“高级设置”菜单。(~700字节PROGMEM)
  //#define PID_AUTOTUNE_MENU     // 在“高级设置”菜单中添加PID自动调整。(~250字节PROGMEM)
  //#define PID_DEBUG             // 将调试数据发送到串口。使用'M303 D'切换激活。
  //#define PID_OPENLOOP 1        // 将 PID 置于打开循环中。M104/M140 将输出功率从 0 设置到 PID_MAX
  //#define SLOW_PWM_HEATERS      // PWM 具有极低频率（约 0.125Hz=8s）和大约 1s 的最小状态时间，适用于由继电器驱动的加热器
  //#define PID_PARAMS_PER_HOTEND // 为每个挤出机使用单独的 PID 参数（对于不匹配的挤出机很有用）
                                  // 使用G代码设置/获取：M301 E_挤出机编号，0-2]
  #define PID_FUNCTIONAL_RANGE 10 // 如果目标温度和实际温度之间的温差超过PID_FUNCTIONAL_RANGE然后PID将关闭，加热器将设置为最小/最大。

  // 如果使用预配置的Hotend挤出头，则可以通过取消注释来使用其中一个值集

  // Ultimaker
  #define DEFAULT_Kp 22.2
  #define DEFAULT_Ki 1.08
  #define DEFAULT_Kd 114

  // MakerGear
  //#define DEFAULT_Kp 7.0
  //#define DEFAULT_Ki 0.1
  //#define DEFAULT_Kd 12

  // Mendel Parts V9 on 12V
  //#define DEFAULT_Kp 63.0
  //#define DEFAULT_Ki 2.25
  //#define DEFAULT_Kd 440

#endif // PIDTEMP

//===========================================================================
//============ PID > Bed Temperature Control PID 热床温度控制 ===============
//===========================================================================

/**
 *热床加热 PID 
 *
 * 如果启用此选项，请设置下面的PID常量。
 * 如果禁用此选项，将使用bang-bang，并且bed_limit_switch将启用滞后。
 *
 * PID频率将与挤出机PWM相同。如果PID_dT是默认值，并且硬件/配置正确，将使用7.689Hz，
 * 这对于将方波驱动到电阻负载中没有太大的影响。这同样适用于Fotek SSR-10DA固态继电器到250W加热器上。
 * 如果您的配置与此明显不同，并且您不了解所涉及的问题，那么在其他人验证您的硬件正常工作之前不要使用bed PID。
 */
//#define PIDTEMPBED

//#define BED_LIMIT_SWITCHING

/**
 * 热床最大功率
 * 适用于所有形式的床控制（PID，bang-bang和带滞回的bang-bang）。
 * 当设置为低于255的任何值时，将对床启用一种形式的PWM，其作用类似于分频器
 * 因此，除非您可以在床上使用PWM，否则请不要使用它。 （请参阅有关启用PIDTEMPBED的注释）
 */
#define MAX_BED_POWER 255 // 将工作周期限制在床上;255 = 全电流

#if ENABLED(PIDTEMPBED)
  //#define MIN_BED_POWER 0
  //#define PID_BED_DEBUG // 将调试数据发送到串口。

  //120V 250W silicone heater into 4mm borosilicate (MendelMax 1.5+)
  //from FOPDT model - kp=.39 Tp=405 Tdead=66, Tc set to 79.2, aggressive factor of .15 (vs .1, 1, 10)
  #define DEFAULT_bedKp 10.00
  #define DEFAULT_bedKi .023
  #define DEFAULT_bedKd 305.4

  //120V 250W silicone heater into 4mm borosilicate (MendelMax 1.5+)
  //from pidautotune
  //#define DEFAULT_bedKp 97.1
  //#define DEFAULT_bedKi 1.41
  //#define DEFAULT_bedKd 1675.16

  // 找到你自己的:“M303 E-1 C8 S90”在床上运行自动调整在90度，为8个周期。
#endif // PIDTEMPBED

// @挤出机部分

/**
 * 如果温度低于EXTRUDE_MINTEMP，则防止挤出。
 * 添加M302设置最小挤出温度和/或转向
 * 防止冷挤压断断续续。
 * 设置挤出机工作的最小温度，只有达到指定温度，挤出机电机才会转动，以此保护送丝轮挤不动造成磨损。
 * 所以如果发现挤出机不工作，请先查看打印头是否加热到指定温度。
 * ***强烈建议启用此选项!***
 */
#define PREVENT_COLD_EXTRUSION
#define EXTRUDE_MINTEMP 170  // 设置开启挤出机的最低温度

/**
 * 防止一次挤压超过EXTRUDE_MINTEMP。
 * 注意:对于Bowden挤出机来说，这个尺寸足够大，可以进行加载/卸载。
 */
#define PREVENT_LENGTHY_EXTRUDE
#define EXTRUDE_MAXLENGTH 200  // 设置挤出机挤出耗材的最大长度，防止误操作造成损失。

//===========================================================================
//=============== Thermal Runaway Protection 热失控保护======================
//===========================================================================

/**
 * 热保护提供额外保护，您的打印机免受损坏和预防发生火灾。
 * Marlin始终包括安全的最低和最高温度范围，以保护损坏或断裂的热敏电阻线。
 * 问题:如果热敏电阻断了，它会报告房间里的空气温度低了很多，固件会让加热器继续工作。
 *
 * 如果你得到“热失控”或“加热失败”的错误可以在Configuration_adv.h中优化细节。
 * 
 * 对于不是由温度传感器松动引起的热失控错误，请尝试增大WATCH_TEMP_PERIOD或减小WATCH_TEMP_INCREASE。 
 * 在寒冷的环境中，如果风扇在散热块上吹动，或者加热器的电阻较高，则加热速度可能会降低。
 */

#define THERMAL_PROTECTION_HOTENDS // 为所有挤出机提供热保护
#define THERMAL_PROTECTION_BED     // 启动加热床的热保护
#define THERMAL_PROTECTION_CHAMBER // 启动加热室的热保护

//===========================================================================
//====================== Mechanical Settings 机械设置 =======================
//===========================================================================

// @section machine
// 双轴联动结构
// 取消注释这些选项之一，以通常的顺序启用CoreXY，CoreXZ或CoreYZ运动选项，或反转
//#define COREXY
//#define COREXZ
//#define COREYZ
//#define COREYX
//#define COREZX
//#define COREZY

//===========================================================================
//======================= Endstop Settings 归零限位设置 =====================
//===========================================================================

// @section homing
/**
 * 在开环系统中，挡块是在所有轴上确定滑架实际位置的廉价方法。 在称为“归位”的过程中，每个轴都朝一端移动，
 * 直到触发了终点止动开关，此时机器知道该轴位于终点止动（原点）位置。 从这一点开始，
 * 机器通过跟踪步进器已移动多远来“知道”其位置。 如果机器由于任何原因失步，则可能需要重新复位。
 */
// 在这里指定所有连接到任何端停止或探针的端停止连接器。几乎所有的打印机都将使用一个轴。
// 探测将使用一个或多个额外的连接器。保留未定义的任何用于非终止和非探测的用途。
/**
 * 指定连接到任何终端机或探头的所有终端机连接器。 大多数打印机将使用所有三个最小插头。 
 * 在增量计算机上，应使用所有最大插头。 探头可以共享Z min插头，也可以使用一个或多个额外的连接器。 
 * 请勿在此处启用用于非停止和非探针目的的插头。
 */
#define USE_XMIN_PLUG
#define USE_YMIN_PLUG
#define USE_ZMIN_PLUG
#define USE_XMAX_PLUG
#define USE_YMAX_PLUG
#define USE_ZMAX_PLUG

// 限位开关上拉
/**
 * ENDSTOPPULLUPS 去掉注释的话表示所有限位开关上拉，上拉表示对应引脚悬空的情况下默认是高电平，
 * 即限位开关开路状态下是H电平状态。Makeboard系列主板必须开启此项。如注释掉此项的话，可在下面
 * 代码单独配置XYZ轴MAX和MIN限位开关上拉状态。
 * 如去掉 ENDSTOPPULLUP_XMAX 注释可单独开启X-MAX限位开关上拉。
 * 
 * 默认情况下，所有端点都启用了上拉电阻。 这对于NC开关是最好的，可以防止值“浮动”。 如果只有一些
 * 终端挡块应具有上拉电阻，则可以禁用ENDSTOPPULLUPS并单独启用上拉电阻。
 */
// 对所有端点启用上拉，以防止出现浮动状态
#define ENDSTOPPULLUPS
#if DISABLED(ENDSTOPPULLUPS)
  // 禁用ENDSTOPPULLUPS以分别设置上拉
  //#define ENDSTOPPULLUP_XMAX
  //#define ENDSTOPPULLUP_YMAX
  //#define ENDSTOPPULLUP_ZMAX
  //#define ENDSTOPPULLUP_XMIN
  //#define ENDSTOPPULLUP_YMIN
  //#define ENDSTOPPULLUP_ZMIN
  //#define ENDSTOPPULLUP_ZMIN_PROBE
#endif

// 对所有端点启用下拉，以防止出现浮动状态
//#define ENDSTOPPULLDOWNS
#if DISABLED(ENDSTOPPULLDOWNS)
  // 禁用ENDSTOPPULLDOWNS可分别设置下拉菜单
  //#define ENDSTOPPULLDOWN_XMAX
  //#define ENDSTOPPULLDOWN_YMAX
  //#define ENDSTOPPULLDOWN_ZMAX
  //#define ENDSTOPPULLDOWN_XMIN
  //#define ENDSTOPPULLDOWN_YMIN
  //#define ENDSTOPPULLDOWN_ZMIN
  //#define ENDSTOPPULLDOWN_ZMIN_PROBE
#endif

// 限位开关信号
/**
 * X_MIN_ENDSTOP_INVERTING 等系列参数设置为 true 表示将限位开关的信号反转，针对限位开关的常开和长闭状态，如触发状态不符合预期，可在此处修正。
 * Z_MIN_PROBE_ENDSTOP_INVERTING 表示自动调平使用的探针电平状态，如不时触底时才触发，可在此反转。
 * 
 * 使用M119测试这些设置是否正确。 如果未按下终点挡块时显示为“已触发”，而按下时显示为“打开”，则应在此处将其翻转。
 */
// 机械限位开关，COM接地，NC接信号，此处使用"false"（最常见的设置）。
#define X_MIN_ENDSTOP_INVERTING false       // 设置为true以反转结束停止的逻辑。
#define Y_MIN_ENDSTOP_INVERTING false       // 设置为true以反转结束停止的逻辑。
#define Z_MIN_ENDSTOP_INVERTING false       // 设置为true以反转结束停止的逻辑。
#define X_MAX_ENDSTOP_INVERTING false       // 设置为true以反转结束停止的逻辑。
#define Y_MAX_ENDSTOP_INVERTING false       // 设置为true以反转结束停止的逻辑。
#define Z_MAX_ENDSTOP_INVERTING false       // 设置为true以反转结束停止的逻辑。
#define Z_MIN_PROBE_ENDSTOP_INVERTING false // 设置为true以反转探测的逻辑。

/**
 * 步进驱动
 *
 * 这些设置允许Marlin调整步进驱动器的时序，并为支持它们的步进驱动器启用高级选项。 
 * 您也可以在Configuration_adv.h中覆盖计时选项。
 *
 * 默认使用A4988用于未指定的驱动程序。
 *
 * 选项: A4988, A5984, DRV8825, LV8729, L6470, L6474, POWERSTEP01,
 *          TB6560, TB6600, TMC2100,
 *          TMC2130, TMC2130_STANDALONE, TMC2160, TMC2160_STANDALONE,
 *          TMC2208, TMC2208_STANDALONE, TMC2209, TMC2209_STANDALONE,
 *          TMC26X,  TMC26X_STANDALONE,  TMC2660, TMC2660_STANDALONE,
 *          TMC5130, TMC5130_STANDALONE, TMC5160, TMC5160_STANDALONE
 * :['A4988', 'A5984', 'DRV8825', 'LV8729', 'L6470', 'L6474', 'POWERSTEP01', 'TB6560', 'TB6600', 'TMC2100', 'TMC2130', 'TMC2130_STANDALONE', 'TMC2160', 'TMC2160_STANDALONE', 'TMC2208', 'TMC2208_STANDALONE', 'TMC2209', 'TMC2209_STANDALONE', 'TMC26X', 'TMC26X_STANDALONE', 'TMC2660', 'TMC2660_STANDALONE', 'TMC5130', 'TMC5130_STANDALONE', 'TMC5160', 'TMC5160_STANDALONE']
 */
//#define X_DRIVER_TYPE  DRV8825
//#define Y_DRIVER_TYPE  DRV8825
//#define Z_DRIVER_TYPE  DRV8825
//#define X2_DRIVER_TYPE DRV8825
//#define Y2_DRIVER_TYPE DRV8825
//#define Z2_DRIVER_TYPE DRV8825
//#define Z3_DRIVER_TYPE DRV8825
//#define Z4_DRIVER_TYPE DRV8825
//#define E0_DRIVER_TYPE DRV8825
//#define E1_DRIVER_TYPE DRV8825
//#define E2_DRIVER_TYPE DRV8825
//#define E3_DRIVER_TYPE DRV8825
//#define E4_DRIVER_TYPE DRV8825
//#define E5_DRIVER_TYPE DRV8825
//#define E6_DRIVER_TYPE DRV8825
//#define E7_DRIVER_TYPE DRV8825

// 如果所有使能的终端止动销都具有中断功能，则启用此功能。 这样就无需轮询中断引脚，从而节省了许多CPU周期。
//#define ENDSTOP_INTERRUPTS_FEATURE

/**
 * 归零噪声阈值
 *
 * 如果您的探针或端止点由于噪声而错误触发，请启用。
 *
 * - 较高的值可能会影响某些床型探头的重复性或准确性。
 * - 要解决噪声问题，请在开关内串联一个100nF陶瓷电容器。
 * - 安装在PCB上的普通微动开关不需要此功能
 *   基于Makerbot设计的，已经有100nF电容器。
 *
 * :[2,3,4,5,6,7]
 */
//#define ENDSTOP_NOISE_THRESHOLD 2

//=============================================================================
//===================== Movement Settings 运动设置 ============================
//=============================================================================
// @section motion

/**
 * 默认设置
 *
 * 这些设置可以用M502复位
 *
 * 注意，如果启用了EEPROM，保存的值将覆盖这些值。
 */

/**
 * 有了这个选项，每个E步进器可以有自己的因素，为以下的运动设置。
 * 如果给定的因子比挤出机的总数少，则最后一个值适用于其余的因子。
 * 
 * 如果您的挤出机在机械上并非全部相同，则启用DISTINCT_E_FACTORS。
 * 使用此设置，您可以选择为每个挤出机指定不同的每毫米步数，最大进给速度和最大加速度。
 */
//#define DISTINCT_E_FACTORS

/**
 * 默认单位轴步长(步长/毫米)
 * 可使用 M92 覆盖
 *                                      X, Y, Z, E0 [, E1[, E2...]]
 */

/**
 * 电机步进数
 * 后面的四个数字 {80,80,4000,500} ，分别表示XYZ和挤出机电机的步进数。
 * XYZ电机步进公式为：(360 / 电机步距角 * 细分数 ) / (同步带齿距 * 齿数)
 * 
 * 这些是您打印机最关键的设置，因为它们确定步进器将轴定位的精度。 
 * 在这里，我们告诉固件多少个单独的步骤产生一个毫米的运动（或SCARA上的度数）。 
 * 这些取决于各种因素，包括皮带间距，皮带轮上的齿数，丝杠上的螺纹间距，微步进设置和挤出机样式。
 * 可使用 M92 覆盖
 */
#define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 4000, 500 }

/**
 * 默认最大进给速率(mm/s)
 * 可使用 M203 覆盖
 *                                      X, Y, Z, E0 [, E1[, E2...]]
 *                                      
 * DEFAULT_MAX_FEEDRATE 后面的四个数字 {300, 300, 5, 25} ，分别表示XYZ和挤出机电机的最大移动速度。
 * 在实际测试不失步的情况下设置的越大越好，此值和电机步进数相关，步进数越大，对应的移动速度设置越小。
 * 所以使用大细分数或者丝杆需要减小此值才能保证电机不失步。                                    
 *                                      
 */
#define DEFAULT_MAX_FEEDRATE          { 300, 300, 5, 25 }

//#define LIMITED_MAX_FR_EDITING        // Limit edit via M203 or LCD to DEFAULT_MAX_FEEDRATE * 2
#if ENABLED(LIMITED_MAX_FR_EDITING)
  #define MAX_FEEDRATE_EDIT_VALUES    { 600, 600, 10, 50 } // ...or, set your own edit limits
#endif

/**
 * 电机最大加速度
 * 默认最大加速度(更改/秒)更改= mm/s
 * (加速动作的最大开始速度)
 * 可使用 M201 覆盖
 *                                      X, Y, Z, E0 [, E1[, E2...]]
 *                                      
 * DEFAULT_MAX_ACCELERATION 后面的四个数字 {3000,3000,100,10000} ，
 * 分别表示XYZ和挤出机电机的最大加速度。三角洲机型的加速度可以设置的大些，
 * 其他机型小些，原则也使实际测试，在不失步的情况下设置的越大越好。
 * 
 * 当任何轴的速度改变时，其加速度（或减速度）（单位为mm/s/s）受当前最大加速度设置的限制。 
 * 另请参见下面的加加速度设置，该设置指定段之间可能发生的最大瞬时速度变化。
 * 
 * 值3000表示轴可以在一秒内从0加速到 3000mm/m (50mm/s) 。
 * 
 */
#define DEFAULT_MAX_ACCELERATION      { 3000, 3000, 100, 10000 }

//#define LIMITED_MAX_ACCEL_EDITING     // Limit edit via M201 or LCD to DEFAULT_MAX_ACCELERATION * 2
#if ENABLED(LIMITED_MAX_ACCEL_EDITING)
  #define MAX_ACCEL_EDIT_VALUES       { 6000, 6000, 200, 20000 } // ...or, set your own edit limits
#endif

/** 
 * 默认加速(更改/秒)更改= mm/s
 * 可使用 M204 覆盖
 *
 *   M204 P    Acceleration
 *   M204 R    Retract Acceleration
 *   M204 T    Travel Acceleration
 */
#define DEFAULT_ACCELERATION          3000    // 设置X，Y，Z和E轴电机的默认移动加速度。
#define DEFAULT_RETRACT_ACCELERATION  3000    // 设置E轴电机回抽时候的默认加速度。
#define DEFAULT_TRAVEL_ACCELERATION   3000    // 设置E轴电机挤出时候的默认加速度。

/**
 * 默认 Jerk 范围 (mm/s)
 * 可使用 M205 覆盖 X Y Z E
 *
 * “Jerk”指定需要加速的最小速度变化。
 * 当改变速度和方向时，如果差值小于此处设置的值，则可能瞬间发生。
 */
//#define CLASSIC_JERK
#if ENABLED(CLASSIC_JERK)
  #define DEFAULT_XJERK 10.0
  #define DEFAULT_YJERK 10.0
  #define DEFAULT_ZJERK  0.3

  //#define TRAVEL_EXTRA_XYJERK 0.0     // Additional jerk allowance for all travel moves

  //#define LIMITED_JERK_EDITING        // Limit edit via M205 or LCD to DEFAULT_aJERK * 2
  #if ENABLED(LIMITED_JERK_EDITING)
    #define MAX_JERK_EDIT_VALUES { 20, 20, 0.6, 10 } // ...or, set your own edit limits
  #endif
#endif

#define DEFAULT_EJERK    5.0  // May be used by Linear Advance

/**
 * Junction Deviation Factor
 *
 * 查看:
 *   https://reprap.org/forum/read.php?1,739819
 *   http://blog.kyneticcnc.com/2018/10/computing-junction-deviation-for-marlin.html
 */
#if DISABLED(CLASSIC_JERK)
  #define JUNCTION_DEVIATION_MM 0.013 // (mm) Distance from real junction edge
#endif

/**
 * S加减速
 *
 * 此选项通过拟合Bezie曲线来加速移动，从而消除打印过程中的振动，产生更平滑的方向变化。
 *
 * 查看 https://github.com/synthetos/TinyG/wiki/Jerk-Controlled-Motion-Explained
 */
//#define S_CURVE_ACCELERATION

//===========================================================================
//======================== Z Probe Options Z探头设置 ========================
//===========================================================================
// @section probes

//
// 查看 http://marlinfw.org/docs/configuration/probes.html
//

/**
 * Z_MIN_PROBE_USES_Z_MIN_ENDSTOP_PIN
 *
 * 为连接到Z Min端停止引脚的探针启用此选项。
 */
#define Z_MIN_PROBE_USES_Z_MIN_ENDSTOP_PIN

/**
 * Z_MIN_PROBE_PIN
 *
* 如果探针没有连接到Z_MIN_PIN，则定义此pin。如果没有定义，将使用所选主板的默认引脚。大多数情况下，默认值就可以了。
 *
 *  - 最简单的选择是使用一个免费的终端连接器。
 *  - 使用5V电源(通常是感应式)传感器。
 *
 *  - RAMPS 1.3/1.4 板使用5V, GND, 和 Aux4->D32 pin:
 *    - 对于简单开关连接...
 *      - 常闭开关 GND 和 D32.
 *      - 常开开关 5V 和 D32.
 *
 */
//#define Z_MIN_PROBE_PIN 32 // Pin 32 是 RAMPS 的默认值

/**
 * 探头类型
 *
 * 六角键探头、伺服探头、z型滑车探头、固定式探头等。
 * 激活其中之一，以使用下面的自动调平床。
 */

/**
 * “手动探头”提供了一种方法来做自动“床找平没有探针。
 * 重复使用G29，使用移动命令或LCD控制器(使用lcd_bed_level)调整每个点Z的高度。
 */
//#define PROBE_MANUALLY
//#define MANUAL_PROBE_START_Z 0.2

/**
 * 固定安装的探测要么不部署，要么需要手动部署。
 * (例如，感应探头或基于喷嘴的探针开关。)
 */
//#define FIX_MOUNTED_PROBE

/**
 * 使用喷嘴作为探头，如与导电喷嘴系统或压电智能执行器。
 */
//#define NOZZLE_AS_PROBE

/**
 * Z伺服探头，如旋转臂上的止动开关。
 */
//#define Z_PROBE_SERVO_NR 0       // 默认伺服0接头。
//#define Z_SERVO_ANGLES { 70, 0 } // Z伺服电机展开角度和收起角度

/**
 * BLTouch探头使用霍尔效应传感器并模拟伺服。
 */
//#define BLTOUCH

/**
 * Touch-MI Probe by hotends.fr
 *
 * This probe is deployed and activated by moving the X-axis to a magnet at the edge of the bed.
 * By default, the magnet is assumed to be on the left and activated by a home. If the magnet is
 * on the right, enable and set TOUCH_MI_DEPLOY_XPOS to the deploy position.
 *
 * Also requires: BABYSTEPPING, BABYSTEP_ZPROBE_OFFSET, Z_SAFE_HOMING,
 *                and a minimum Z_HOMING_HEIGHT of 10.
 */
//#define TOUCH_MI_PROBE
#if ENABLED(TOUCH_MI_PROBE)
  #define TOUCH_MI_RETRACT_Z 0.5                  // 探针缩回的高度
  //#define TOUCH_MI_DEPLOY_XPOS (X_MAX_BED + 2)  // 对于床右侧的磁铁
  //#define TOUCH_MI_MANUAL_DEPLOY                // 用于手动部署（LCD菜单）
#endif

// 部署并存放有电磁销（SOL1_PIN）的探针
//#define SOLENOID_PROBE

// 类似于Charles Bell设计的安装在雪橇上的探头。
//#define Z_PROBE_SLED
//#define SLED_DOCKING_OFFSET 5  // X轴必须经过额外的距离才能提起雪橇。0应该可以，但如果您愿意，可以再往前推。

//一种通过移动x轴展开的探针，如由马蒂·赖斯设计的威尔逊二世齿条-齿轮式探针。
//#define RACK_AND_PINION_PROBE
#if ENABLED(RACK_AND_PINION_PROBE)
  #define Z_PROBE_DEPLOY_X  X_MIN_POS
  #define Z_PROBE_RETRACT_X X_MAX_POS
#endif

// Duet智能执行器(适用于delta打印机) - https://bit.ly/2ul5U7J
// 当pin被定义时，您可以使用M672来设置/重置探针灵敏度。
//#define DUET_SMART_EFFECTOR
#if ENABLED(DUET_SMART_EFFECTOR)
  #define SMART_EFFECTOR_MOD_PIN  -1  // 连接一个GPIO引脚到智能执行器MOD引脚
#endif

/**
 * 用喷嘴探测床的内部。
 * 需要有史泰龙能力的三级步进驱动。
 * 注意:这可能会损坏带Z型丝杠的机器。
 * 在设置此功能时要格外小心。
 */
//#define SENSORLESS_PROBING

//
// 有关Z_PROBE_ALLEN_KEY，请参见增量配置示例。
//

/**
 * Z探头到喷嘴(X,Y)的偏移量，相对于(0,0)。
 *
 * 在下面的例子中，X和Y的偏移量都是正的:
 *
 *   #define NOZZLE_TO_PROBE_OFFSET { 10, 10, 0 }
 *
 *      +-- 后面 ---+
 *      |           |
 *      |    (+) P  |       P <-- 探针 (20,20)
 *   左 |           | 右
 *   右 | (-) N (+) | 边    N <-- 喷嘴 (10,10)
 *      |           | 
 *      |    (-)    | 
 *      |           |
 *      O-- 前面  --+
 *    (0,0)
 *
 * 指定探测位置为 { X, Y, Z }
 */
#define NOZZLE_TO_PROBE_OFFSET { 10, 10, 0 }

// 大多数探测应该远离床的边缘，但是使用NOZZLE_AS_PROBE可以使探测范围更广。
#define MIN_PROBE_EDGE 10

// X轴和Y轴在探头之间的移动速度(mm/m)
#define XY_PROBE_SPEED 8000

// 双探测时第一进路进给速率(mm/m)(MULTIPLE_PROBING == 2)
#define Z_PROBE_SPEED_FAST HOMING_FEEDRATE_Z

// 进料速率(mm/m)，以保证每个点的“精确”探头
#define Z_PROBE_SPEED_SLOW (Z_PROBE_SPEED_FAST / 2)

/**
 * 多探针
 *
 * 你可以通过探测2次或更多次得到更好的结果。通过外向探究，那些非典型性的阅读将被忽略。
 * 总共有2个采用加权平均值的快/慢探针。
 * 总共有3个或更多的探测会增加更慢的探测，取平均值。
 */
//#define MULTIPLE_PROBING 2
//#define EXTRA_PROBING    1

/**
 * Z型探头在部署、装载和在探头点之间移动时需要清除间隙，以避免碰到床和其他硬件。
 * 伺服安装的探头需要额外的空间让手臂旋转。
 * 感应探针需要空间来防止早期触发。
 *
 * 使用这些设置指定距离(mm)来升高探头(或降低床层)。
 * 这里设置的值适用于任意(负)以上的值用NOZZLE_TO_PROBE_OFFSET、M851或LCD探测Z偏移量集。
 * 这里只有整数值>= 1有效。
 *
 * 例如: `M851 Z-5` with a CLEARANCE of 4  =>  9mm from bed to nozzle.
 * 但是: `M851 Z+1` with a CLEARANCE of 2  =>  2mm from bed to nozzle.
 */
#define Z_CLEARANCE_DEPLOY_PROBE   10 // 部署/装载的Z许可
#define Z_CLEARANCE_BETWEEN_PROBES  5 // 探测点之间的Z间隙
#define Z_CLEARANCE_MULTI_PROBE     5 // 多个探针之间的Z间隙
//#define Z_AFTER_PROBING           5 // Z位置探测完成后

#define Z_PROBE_LOW_POINT          -2 // 在扳机点以下最远处停下来
// 对于M851，给出调整Z探头偏移的范围
#define Z_PROBE_OFFSET_RANGE_MIN -20
#define Z_PROBE_OFFSET_RANGE_MAX 20

// 启用M48重复性测试来测试探针的准确性
//#define Z_MIN_PROBE_REPEATABILITY_TEST

// 在部署/装载之前暂停以进行用户确认
//#define PAUSE_BEFORE_DEPLOY_STOW
#if ENABLED(PAUSE_BEFORE_DEPLOY_STOW)
  //#define PAUSE_PROBE_DEPLOY_WHEN_TRIGGERED // 用于手动部署Allenkey探测
#endif

/**
 * 如果探测看起来不可靠，启用以下一个或多个选项。
 * 在探测过程中，可以关闭加热器和/或风扇，以减少电子噪音。延迟也可以添加，以允许噪音和振动的解决。
 * 这些选项对BLTouch探测器最有用，但也可能提高感应探头和压电传感器的读数。
 */
//#define PROBING_HEATERS_OFF       // 探测时关闭加热器
#if ENABLED(PROBING_HEATERS_OFF)
  //#define WAIT_FOR_BED_HEATER     // 等待床在探针之间加热(以提高准确性)
#endif
//#define PROBING_FANS_OFF          // 在探测时关闭风扇
//#define PROBING_STEPPERS_OFF      // 在探测时关闭步进器(除非需要保持位置)
//#define DELAY_BEFORE_PROBING 200  // (ms)防止振动触发压电传感器

/**
 * 电机使能信号
 * X_ENABLE_ON 等系列参数设置为 0 表示电机是低电平使能，1 表示高电平使能。
 * Makeboard配套驱动芯片均为低电平使能，默认设置即可。如外接驱动器，如果电机不工作，不锁死，可将此参数设为 1 尝试。
 */

// 对于反相步进器使能引脚(有源低引脚)使用0，非反相(有源高引脚)请使用数值 1
// :{ 0:'Low', 1:'High' }
#define X_ENABLE_ON 0
#define Y_ENABLE_ON 0
#define Z_ENABLE_ON 0
#define E_ENABLE_ON 0 // For all extruders

// 禁用电机
// 不使用时立即禁用轴步进器。
// 警告:当电机关闭时，有可能失去位置精度!
// 如特殊用途，如激光切割机一类，将指定轴，如 DISABLE_Z 设置为 ture 即可禁用Z轴电机。
#define DISABLE_X false
#define DISABLE_Y false
#define DISABLE_Z false

// 警告显示可能降低精度
//#define DISABLE_REDUCED_ACCURACY_WARNING

// @section extruder

#define DISABLE_E false             // 对于所有的挤出机
#define DISABLE_INACTIVE_EXTRUDER   // 只启用活动挤出器

// @section machine

// 电机运动方向
/** 
 *  如果复位时候，打印头不是朝限位开关方向移动，可将对应轴，如 INVERT_X_DIR 设置为 true 即可反转X轴电机运动方向。
 *  如果挤出机电机挤出和回抽动作是反，将对应挤出机，如 INVERT_E0_DIR 设置为 true 即可反转一号挤出机运动方向。
 */
// 反转伺服步进方电机方向。如果轴向错误，则更改(或反转电机连接器)。
#define INVERT_X_DIR false
#define INVERT_Y_DIR true
#define INVERT_Z_DIR false

// @section extruder

// 对于直接驱动挤出机v9设置为 true ，对于齿轮驱动挤出机设置为假。
#define INVERT_E0_DIR false
#define INVERT_E1_DIR false
#define INVERT_E2_DIR false
#define INVERT_E3_DIR false
#define INVERT_E4_DIR false
#define INVERT_E5_DIR false
#define INVERT_E6_DIR false
#define INVERT_E7_DIR false

// @section homing
/**
 * 该值将Z提升到指定的高度，然后再定位X或y。这对于防止头部撞到床上安装件(如螺丝、牛头夹等)非常有用。
 * 这也适用于自动调平，只有当Z轴高度小于定义值时才会触发，否则Z轴将不会移动。
 */
//#define NO_MOTION_BEFORE_HOMING // 禁止运动，直到所有轴归位

//#define UNKNOWN_Z_NO_RAISE      // 如果Z为“未知”，请勿升高Z（或者放下热床）。
                                              //当Z关闭电源时，热床就会掉下来。
//#define Z_HOMING_HEIGHT  4      //（mm）归零之前的最小Z高度（G28）。
                                  // 确保在您的Z_MAX_POS上有这么大的间隙，以防止磨削。

//#define Z_AFTER_HOMING  10      //（mm）归零后要移动到的高度

/**
 * 复位限制开关
 * 设置各轴复位时触发的限位开关，三角洲机型设置为 1，复位时最大值，三轴限位开关插在MAX接口。
 * 非三角洲机型一般设置为 -1，复位时为最小值，复位后坐标为 0,0,0，三轴限位开关插在MIN接口。
 */

// 归位时的挡块方向； 1 =最大，-1 =最小
// :[-1,1]
#define X_HOME_DIR -1
#define Y_HOME_DIR -1
#define Z_HOME_DIR -1

// @section machine

// 打印台的尺寸
/**
 * 使用Marlin，您可以直接指定床的尺寸。 当Marlin与下面的移动限制有所不同时，这允许Marlin进行与床尺寸有关的额外逻辑。 
 * 如果XY滑架能够移动到床外，则可以在下面指定更大的范围。
 */
#define X_BED_SIZE 200
#define Y_BED_SIZE 200

/**
 * 复位坐标
 * 
 * 设置打印机的打印范围，X_MIN_POS，Y_MIN_POS，Z_MIN_POS，
 * 为打印机最小值方向复位的坐标，一般默认设置为 0 即可。
 * X_MAX_POS，Y_MAX_POS，Z_MAX_POS 为打印机复位时的坐标值，在开启MAX软复位后，
 * 为打印机的最大打印范围。一般打印机在调试完后，通过G1指令移动打印头，
 * M114查看当前坐标测得打印机最大打印范围。三角洲机型需特别注意 Z_MAX_POS 参数，
 * 为复位后打印头到平台之间的距离，可将此值设置大些，G28复位后，通过G1指令，移动Z轴，
 * 使打印头接触平台后，通过M114查看当前坐标，即可知道距离是多少了。
 * 
 * 这些值指定了机器的物理极限。 通常将[XYZ] _MIN_POS值设置为0，因为终点挡块位于床的极限位置。 
 * [XYZ] _MAX_POS应该设置为最远的到达点。 默认情况下，这些位置也用作您的归位位置。 
 * 但是，如果需要，可以使用MANUAL_ [XYZ] _HOME_POS选项覆盖这些选项。
 */

// 归位后的行程极限（毫米），对应于挡块位置。
#define X_MIN_POS 0
#define Y_MIN_POS 0
#define Z_MIN_POS 0
#define X_MAX_POS X_BED_SIZE
#define Y_MAX_POS Y_BED_SIZE
#define Z_MAX_POS 180

/**
 * 软限位
 * min_software_endstops 设置为 true 开启的话会使打印头无法移动到负坐标，保护硬件不受损坏。
 * 实际三角洲机型此值无意义，非三角洲机型因为一般MIN方向有硬限位开关，也不会有问题，开不开启无所谓了。
 * max_software_endstops 设置为 true 开启的话会使打印头无法移动超过 X_MAX_POS，Y_MAX_POS,Z_MAX_POS 
 * 设置的坐标，保护硬件不受损坏，一般需要开启，防误操作。
 * 
 * - 防止移动超出设定的机器范围。
 * - 如果需要，可以禁用单个轴。
 * - X和Y仅适用于笛卡尔坐标的机器。
 * - 使用“ M211”设置软件停止器的开/关或报告当前状态。
 * 
 * 启用这些选项可将移动限制在机器的物理边界（由[XYZ] _（MIN | MAX）_POS设置）。 
 * 例如，可以将G1 Z-100最小约束为G1 Z0。 建议启用这些选项作为安全功能。 
 * 如果需要禁用软件停止器，请使用M211 S0。
 */

// 最小软件终端限制在最小坐标范围内的运动
#define MIN_SOFTWARE_ENDSTOPS
#if ENABLED(MIN_SOFTWARE_ENDSTOPS)
  #define MIN_SOFTWARE_ENDSTOP_X
  #define MIN_SOFTWARE_ENDSTOP_Y
  #define MIN_SOFTWARE_ENDSTOP_Z
#endif

// 最大软件终端限制在最大坐标范围内的运动
#define MAX_SOFTWARE_ENDSTOPS
#if ENABLED(MAX_SOFTWARE_ENDSTOPS)
  #define MAX_SOFTWARE_ENDSTOP_X
  #define MAX_SOFTWARE_ENDSTOP_Y
  #define MAX_SOFTWARE_ENDSTOP_Z
#endif

#if EITHER(MIN_SOFTWARE_ENDSTOPS, MAX_SOFTWARE_ENDSTOPS)
  //#define SOFT_ENDSTOPS_MENU_ITEM  // 在LCD上启用/禁用软件终端
#endif

/**
 * 缺料检查
 * FILAMENT_RUNOUT_SENSOR 去掉注释，即可开启缺料检测功能。
 * 一般使用光电限位开关装在送丝机耗材入口处，高电平表示正常送丝，低电平表示缺料。
 * FIL_RUNOUT_INVERTING 设置为 true 可反转限位开关信号。
 * ENDSTOPPULLUP_FIL_RUNOUT 去掉注释，表示缺料检测引脚默认上拉，一般默认开启。
 * FILAMENT_RUNOUT_SCRIPT 设置缺料检测激活时运行的脚本，一般为 M600，使打印机暂时打印，换好耗材后，可继续打印。
 * 
 * 机械或opto端挡用于检查灯丝是否存在。
 *
 * 基于RAMPS的板将SERVO3_PIN用于第一个跳动传感器。
 * 对于其他板，您可能需要定义FIL_RUNOUT_PIN，FIL_RUNOUT2_PIN等。
 * 默认情况下，假定HIGH = FILAMENT PRESENT。
 */
//#define FILAMENT_RUNOUT_SENSOR
#if ENABLED(FILAMENT_RUNOUT_SENSOR)
  #define NUM_RUNOUT_SENSORS   1     // 传感器数量，每个挤出机最多一个。 为每个定义一个FIL_RUNOUT＃_PIN。
  #define FIL_RUNOUT_INVERTING false // 设置为true可反转传感器的逻辑。
  #define FIL_RUNOUT_PULLUP          // 对进料传感器使用内部上拉。
  //#define FIL_RUNOUT_PULLDOWN      // 对进料传感器使用内部下拉。

  // 设置一个或多个命令以在进料传感器执行。
  // （在“ M412 H”之后，Marlin将要求host处理该过程。）
  #define FILAMENT_RUNOUT_SCRIPT "M600"

  // 检测到断料后，请在执行断料脚本之前继续打印此长度的灯丝。 
  // 用于进料管末端的传感器。每个传感器需要4字节SRAM，外加4字节开销。
  //#define FILAMENT_RUNOUT_DISTANCE_MM 25

  #ifdef FILAMENT_RUNOUT_DISTANCE_MM
  // 启用此选项可使用编码器光盘，该光盘可在灯丝移动时切换跳动销。 
  //（请确保将FILAMENT_RUNOUT_DISTANCE_MM设置为足够大，以避免误报。）
    //#define FILAMENT_MOTION_SENSOR
  #endif
#endif

//===========================================================================
//========================= Bed Leveling 平台调平 ===========================
//===========================================================================
// @section calibrate

/**
 * 选择以下选项之一，以启用G29床找平。的参数G29的行为会根据你的选择而改变。
 *
 *  If using a Probe for Z Homing, enable Z_SAFE_HOMING also!
 *
 * - AUTO_BED_LEVELING_3POINT
 *   Probe 3 arbitrary points on the bed (that aren't collinear)
 *   You specify the XY coordinates of all 3 points.
 *   The result is a single tilted plane. Best for a flat bed.
 *
 * - AUTO_BED_LEVELING_LINEAR
 *   Probe several points in a grid.
 *   You specify the rectangle and the density of sample points.
 *   The result is a single tilted plane. Best for a flat bed.
 *
 * - AUTO_BED_LEVELING_BILINEAR
 *   Probe several points in a grid.
 *   You specify the rectangle and the density of sample points.
 *   The result is a mesh, best for large or uneven beds.
 *
 * - AUTO_BED_LEVELING_UBL (Unified Bed Leveling)
 *   A comprehensive bed leveling system combining the features and benefits
 *   of other systems. UBL also includes integrated Mesh Generation, Mesh
 *   Validation and Mesh Editing systems.
 *
 * - MESH_BED_LEVELING
 *   Probe a grid manually
 *   The result is a mesh, suitable for large or uneven beds. (See BILINEAR.)
 *   For machines without a probe, Mesh Bed Leveling provides a method to perform
 *   leveling in steps so you can manually adjust the Z height at each grid-point.
 *   With an LCD controller the process is guided step-by-step.
 */
//#define AUTO_BED_LEVELING_3POINT
//#define AUTO_BED_LEVELING_LINEAR
//#define AUTO_BED_LEVELING_BILINEAR
//#define AUTO_BED_LEVELING_UBL
//#define MESH_BED_LEVELING

/**
 * Normally G28 leaves leveling disabled on completion. Enable
 * this option to have G28 restore the prior leveling state.
 */
//#define RESTORE_LEVELING_AFTER_G28

/**
 * Enable detailed logging of G28, G29, M48, etc.
 * Turn on with the command 'M111 S32'.
 * NOTE: Requires a lot of PROGMEM!
 */
//#define DEBUG_LEVELING_FEATURE

#if ANY(MESH_BED_LEVELING, AUTO_BED_LEVELING_BILINEAR, AUTO_BED_LEVELING_UBL)
  // Gradually reduce leveling correction until a set height is reached,
  // at which point movement will be level to the machine's XY plane.
  // The height can be set with M420 Z<height>
  #define ENABLE_LEVELING_FADE_HEIGHT

  // For Cartesian machines, instead of dividing moves on mesh boundaries,
  // split up moves into short segments like a Delta. This follows the
  // contours of the bed more closely than edge-to-edge straight moves.
  #define SEGMENT_LEVELED_MOVES
  #define LEVELED_SEGMENT_LENGTH 5.0 // (mm) Length of all segments (except the last one)

  /**
   * Enable the G26 Mesh Validation Pattern tool.
   */
  //#define G26_MESH_VALIDATION
  #if ENABLED(G26_MESH_VALIDATION)
    #define MESH_TEST_NOZZLE_SIZE    0.4  // (mm) Diameter of primary nozzle.
    #define MESH_TEST_LAYER_HEIGHT   0.2  // (mm) Default layer height for the G26 Mesh Validation Tool.
    #define MESH_TEST_HOTEND_TEMP  205    // (°C) Default nozzle temperature for the G26 Mesh Validation Tool.
    #define MESH_TEST_BED_TEMP      60    // (°C) Default bed temperature for the G26 Mesh Validation Tool.
    #define G26_XY_FEEDRATE         20    // (mm/s) Feedrate for XY Moves for the G26 Mesh Validation Tool.
    #define G26_RETRACT_MULTIPLIER   1.0  // G26 Q (retraction) used by default between mesh test elements.
  #endif

#endif

#if EITHER(AUTO_BED_LEVELING_LINEAR, AUTO_BED_LEVELING_BILINEAR)

  // Set the number of grid points per dimension.
  #define GRID_MAX_POINTS_X 3
  #define GRID_MAX_POINTS_Y GRID_MAX_POINTS_X

  // Probe along the Y axis, advancing X after each column
  //#define PROBE_Y_FIRST

  #if ENABLED(AUTO_BED_LEVELING_BILINEAR)

    // Beyond the probed grid, continue the implied tilt?
    // Default is to maintain the height of the nearest edge.
    //#define EXTRAPOLATE_BEYOND_GRID

    //
    // Experimental Subdivision of the grid by Catmull-Rom method.
    // Synthesizes intermediate points to produce a more detailed mesh.
    //
    //#define ABL_BILINEAR_SUBDIVISION
    #if ENABLED(ABL_BILINEAR_SUBDIVISION)
      // Number of subdivisions between probe points
      #define BILINEAR_SUBDIVISIONS 3
    #endif

  #endif

#elif ENABLED(AUTO_BED_LEVELING_UBL)

  //===========================================================================
  //========================= Unified Bed Leveling ============================
  //===========================================================================

  //#define MESH_EDIT_GFX_OVERLAY   // 显示一个图形覆盖而编辑网格

  #define MESH_INSET 1              // 将网格边界设置为床的嵌入区域
  #define GRID_MAX_POINTS_X 10      // 每个轴使用不超过15点，实现有限。
  #define GRID_MAX_POINTS_Y GRID_MAX_POINTS_X

  #define UBL_MESH_EDIT_MOVES_Z     // 经验丰富的用户不喜欢移动喷嘴
  #define UBL_SAVE_ACTIVE_ON_M500   // 将当前活动网格保存在M500上的当前槽中

  //#define UBL_Z_RAISE_WHEN_OFF_MESH 2.5 // 当喷嘴离开网格时，这个值被用作Z-Height校正值。
                                          

#elif ENABLED(MESH_BED_LEVELING)

  //===========================================================================
  //=================================== Mesh ==================================
  //===========================================================================

  #define MESH_INSET 10          // 将网格边界设置为床的嵌入区域
  #define GRID_MAX_POINTS_X 3    // 每轴使用不超过7个点，实现受限。
  #define GRID_MAX_POINTS_Y GRID_MAX_POINTS_X

  //#define MESH_G28_REST_ORIGIN // 在归位所有轴之后('G28'或'G28 XYZ')在Z_MIN_POS处休息Z

#endif // BED_LEVELING

/**
 * 为ABL或MBL添加一个子菜单。
 * 如果启用手动探测，则包括引导过程。
 */
//#define LCD_BED_LEVELING

#if ENABLED(LCD_BED_LEVELING)
  #define MESH_EDIT_Z_STEP  0.025 // (mm) 手动探测Z轴时的步长。
  #define LCD_PROBE_Z_RANGE 4     // (mm) Z范围集中在Z_MIN_POS的LCD Z调整
  //#define MESH_EDIT_MENU        // 添加一个菜单来编辑网格点
#endif

// 添加一个菜单项来移动床角之间的手动床调整
//#define LEVEL_BED_CORNERS

#if ENABLED(LEVEL_BED_CORNERS)
  #define LEVEL_CORNERS_INSET_LFRB { 30, 30, 30, 30 } // (mm) 左，前，右，后
  #define LEVEL_CORNERS_HEIGHT      0.0   // (mm) 喷嘴在水平点的高度Z
  #define LEVEL_CORNERS_Z_HOP       4.0   // (mm) 水准点之间喷嘴高度Z
  //#define LEVEL_CENTER_TOO              // 移动到最后一个角落的中心
#endif

/**
 * 在G29探测结束时执行的命令。
 * 有用的收缩或移动Z探头的方式。
 */
//#define Z_PROBE_END_SCRIPT "G1 Z10 F12000\nG1 X15 Y330\nG1 Z0.5\nG1 Z10"


// @section homing

// 平台的中心在(X=0, Y=0)
// 如果床中心位于X0 Y0，则启用此选项。 该设置影响自动原点位置
//#define BED_CENTER_AT_0_0

// 手动设置回归位置。为自动设置保留这些未定义的值。
// 对于DELTA，这是笛卡尔打印的顶部中心。
//#define MANUAL_X_HOME_POS 0
//#define MANUAL_Y_HOME_POS 0
//#define MANUAL_Z_HOME_POS 0  // 归位后喷嘴到打印平台的距离

// 使用“ Z安全归位”避免在床区域外使用Z探针归位。
//
// 启用此功能：
//
// - 仅在X和Y原点复归且步进驱动器仍启用后才允许Z原点复归。
// - 如果步进驱动程序超时，则需要在Z原点复归之前再次X和Y原点复归。
// - 对所有轴进行归位时，将Z探针（或喷嘴）移动到Z归位之前定义的XY点（G28）。
// - 当Z探头位于床身区域之外时，防止Z归位。
//
/**
 * 当使用G28对所有轴进行归零时，Z安全归位可通过在Z归零之前移动到定义的XY点（默认为床的中部）
 * 来防止探头（或喷嘴）位于床身区域之外时Z归零。 作为副作用，在Z归位之前需要X和Y归位。 
 * 如果步进驱动程序超时，将再次需要X和Y归位。
 * 如果将探针（不是终点挡块）用于Z归位，则启用此选项。 如果使用Z终点挡块进行原点复归，
 * 则不需要Z安全原点复归，但也可以启用Z安全原点，以使XY在原点复归后始终移动到某个自定义位置。
 */
//#define Z_SAFE_HOMING

#if ENABLED(Z_SAFE_HOMING)
  #define Z_SAFE_HOMING_X_POINT ((X_BED_SIZE) / 2)    // 回原点所有轴（G28）时，Z回原点的Y点。
  #define Z_SAFE_HOMING_Y_POINT ((Y_BED_SIZE) / 2)    // 回原点所有轴（G28）时，Z回原点的Y点。
#endif

// 复位速度 (mm/m)
/**
 * HOMING_FEEDRATE_XY 设置复位时XY轴的移动速度。
 * HOMING_FEEDRATE_Z 设置复位时Z轴的移动速度，如果用丝杆的话，需要设置的比用皮带慢很多。
 */
#define HOMING_FEEDRATE_XY (50*60)
#define HOMING_FEEDRATE_Z  (4*60)

// 验证归位移动是否触发了限位器
#define VALIDATE_HOMING_ENDSTOPS

// @section calibrate

/**
 * 床偏补偿
 *
 * 此功能可纠正XYZ轴中的未对准情况。
 *
 * 请执行以下步骤以使床偏斜在XY平面中：
 *  1. 打印测试方块 (例如： https://www.thingiverse.com/thing:2563185)
 *  2. 对于XY_DIAG_AC，测量对角线A到C
 *  3. 对于XY_DIAG_BD，测量对角线B到D
 *  4. 对于XY_SIDE_AD，测量边A到D
 *
 * Marlin会根据这些测量结果自动计算偏斜因子。
 * 偏斜因子也可以手动计算和设置：
 *
 *  - 计算 AB        : SQRT(2*AC*AC+2*BD*BD-4*AD*AD)/2
 *  - XY_SKEW_FACTOR : TAN(PI/2-ACOS((AC*AC-AB*AB-AD*AD)/(2*AB*AD)))
 *
 * 如果需要，请对XZ和YZ遵循相同的步骤。
 * 使用这些图作为参考：
 *
 *    Y                     Z                     Z
 *    ^     B-------C       ^     B-------C       ^     B-------C
 *    |    /       /        |    /       /        |    /       /
 *    |   /       /         |   /       /         |   /       /
 *    |  A-------D          |  A-------D          |  A-------D
 *    +-------------->X     +-------------->X     +-------------->Y
 *     XY_SKEW_FACTOR        XZ_SKEW_FACTOR        YZ_SKEW_FACTOR
 */
//#define SKEW_CORRECTION

#if ENABLED(SKEW_CORRECTION)
  // 在此处输入所有长度测量值：
  #define XY_DIAG_AC 282.8427124746
  #define XY_DIAG_BD 282.8427124746
  #define XY_SIDE_AD 200

  // 或者直接在此处设置默认的偏斜系数以覆盖上述测量值：
  #define XY_SKEW_FACTOR 0.0

  //#define SKEW_CORRECTION_FOR_Z
  #if ENABLED(SKEW_CORRECTION_FOR_Z)
    #define XZ_DIAG_AC 282.8427124746
    #define XZ_DIAG_BD 282.8427124746
    #define YZ_DIAG_AC 282.8427124746
    #define YZ_DIAG_BD 282.8427124746
    #define YZ_SIDE_AD 200
    #define XZ_SKEW_FACTOR 0.0
    #define YZ_SKEW_FACTOR 0.0
  #endif

  // 为M852启用此选项以在运行时设置偏斜
  //#define SKEW_CORRECTION_GCODE
#endif

//=============================================================================
//========================= Additional Features 附加功能 ======================
//=============================================================================

// @section extras

/**
 * EEPROM
 *
 * 永久存储，可在重新启动后保留可配置的设置。
 * EEPROM_SETTINGS 去掉注释，可开启EEPROM功能，打印机部分配置参数将保存在打印机中，可通过液晶屏实时调节，无需重刷固件。
 * 配置固件阶段推荐关闭，调试好机器后再开启，要不很可能有参数给代码中调节后不会生效，造成误判断。
 *   M500 - 将设置存储到EEPROM。
 *   M501 - 从EEPROM读取设置。（即，丢弃未保存的更改）
 *   M502 - 将设置恢复为“出厂”默认设置。（接着用M500初始化EEPROM。）
 */
//#define EEPROM_SETTINGS     // M500和M501的永久存储
//#define DISABLE_M503        // 保存〜2700字节的PROGMEM。 禁止发布！
#define EEPROM_CHITCHAT       // 提供有关EEPROM命令的反馈。 禁用保存PROGMEM。
#define EEPROM_BOOT_SILENT    // 保持M503安静，仅在首次加载时给出错误
#if ENABLED(EEPROM_SETTINGS)
  //#define EEPROM_AUTO_INIT  // 如有任何错误，将自动初始化EEPROM。
#endif

//
// 主机保持活动
//
// 启用后，当Marlin无法接受命令时，它将每隔几秒钟向host发送一个忙碌状态消息。
//
#define HOST_KEEPALIVE_FEATURE        // 如果您的主机不喜欢保持活动消息，请禁用此功能
#define DEFAULT_KEEPALIVE_INTERVAL 2  // “繁忙”消息之间的秒数。 用M113设置。
#define BUSY_WHILE_HEATING            // 有些主机即使在加热期间也需要“忙”消息

//
// G20 / G21英寸模式支持
//
//#define INCH_MODE_SUPPORT

//
// M149设定温度单位支持
//
//#define TEMPERATURE_UNITS_SUPPORT

// @section temperature

/*
 * 预加热
 * 分别设置液晶屏菜单选择预加热PLA和ABS的打印头，热床温度，及冷却风扇转速。
 */
// 预热常数
#define PREHEAT_1_LABEL       "PLA"
#define PREHEAT_1_TEMP_HOTEND 180
#define PREHEAT_1_TEMP_BED     70
#define PREHEAT_1_FAN_SPEED     0 // 值： 0 到 255

#define PREHEAT_2_LABEL       "ABS"
#define PREHEAT_2_TEMP_HOTEND 240
#define PREHEAT_2_TEMP_BED    110
#define PREHEAT_2_FAN_SPEED     0 // 值： 0 到 255

/**
 * 喷嘴
 *
 * 将喷嘴停在怠速或G27上给定的XYZ位置。
 *
 * “P”参数控制应用于Z轴的动作:
 *
 *    P0  (默认)如果Z在park Z以下，则提高喷嘴。
 *    P1  将喷嘴提升到Z-park高度。
 *    P2  提高喷嘴数量Z-park，限制在Z_MAX_POS。
 */
//#define NOZZLE_PARK_FEATURE

#if ENABLED(NOZZLE_PARK_FEATURE)
  // 将park位置指定为{X, Y, Z_raise}
  #define NOZZLE_PARK_POINT { (X_MIN_POS + 10), (Y_MAX_POS - 10), 20 }
  #define NOZZLE_PARK_XY_FEEDRATE 100   // (mm/s) X、Y轴进给速度(也用于Z轴)
  #define NOZZLE_PARK_Z_FEEDRATE 5      // (mm/s) Z轴进给速度(不用于delta打印机)
# endif

/**
 * 喷嘴清洁功能——实验性
 *
 * 添加G12命令以执行喷嘴清洗过程。
 *
 * 参数:
 *   P  模式
 *   S  行程 / 重复
 *   T  三角形（仅限P1）
 *
 * 参数:
 *   P0  直线（默认）。该过程需要在固定床位置使用海绵型材料。 “ S”指定起点/终点之间的笔划（即后退运动）。
 *
 *   P1  在（X0，Y0）和（X1，Y1）之间的Z字形模式，“ T”指定要执行的Z字形三角形的数量。 “ S”定义笔划数。 
 *       之字形以较窄的尺寸为准。 例如，将执行“ G12 P1 S1 T3”：
 *
 *          --
 *         |  (X0, Y1) |     /\        /\        /\     | (X1, Y1)
 *         |           |    /  \      /  \      /  \    |
 *       A |           |   /    \    /    \    /    \   |
 *         |           |  /      \  /      \  /      \  |
 *         |  (X0, Y0) | /        \/        \/        \ | (X1, Y0)
 *          --         +--------------------------------+
 *                       |________|_________|_________|
 *                           T1        T2        T3
 *
 *   P2  Circular pattern with middle at NOZZLE_CLEAN_CIRCLE_MIDDLE.
 *       "R" specifies the radius. "S" specifies the stroke count.
 *       Before starting, the nozzle moves to NOZZLE_CLEAN_START_POINT.
 *
 *   Caveats: The ending Z should be the same as starting Z.
 * Attention: EXPERIMENTAL. G-code arguments may change.
 *
 */
//#define NOZZLE_CLEAN_FEATURE

#if ENABLED(NOZZLE_CLEAN_FEATURE)
  // 模式重复的默认次数
  #define NOZZLE_CLEAN_STROKES  12

  // 默认三角形数
  #define NOZZLE_CLEAN_TRIANGLES  3

  // 将每个工具的位置指定为 { { X, Y, Z }, { X, Y, Z } }
  // Dual hotend system may use { {  -20, (Y_BED_SIZE / 2), (Z_MIN_POS + 1) },  {  420, (Y_BED_SIZE / 2), (Z_MIN_POS + 1) }}
  #define NOZZLE_CLEAN_START_POINT { {  30, 30, (Z_MIN_POS + 1) } }
  #define NOZZLE_CLEAN_END_POINT   { { 100, 60, (Z_MIN_POS + 1) } }

  // 圆形图案半径
  #define NOZZLE_CLEAN_CIRCLE_RADIUS 6.5
  // 圆形模式圆碎片数
  #define NOZZLE_CLEAN_CIRCLE_FN 10
  // 圆的中点
  #define NOZZLE_CLEAN_CIRCLE_MIDDLE NOZZLE_CLEAN_START_POINT

  // 清洁后将喷嘴移至初始位置
  #define NOZZLE_CLEAN_GOBACK

  // 启用清洗/清洗站，使其始终处于机架高度(因此没有Z向移动)
  //#define NOZZLE_CLEAN_NO_Z
#endif

/**
 * 打印作业计时器
 *
 * 在M104/M109/M190上自动启动和停止打印作业计时器。
 *
 *   M104 (hotend, no wait) - high temp = none,        low temp = stop timer
 *   M109 (hotend, wait)    - high temp = start timer, low temp = stop timer
 *   M190 (bed, wait)       - high temp = start timer, low temp = none
 *
 * 定时器也可以通过以下命令来控制:
 *
 *   M75 - Start the print job timer
 *   M76 - Pause the print job timer
 *   M77 - Stop the print job timer
 */
#define PRINTJOB_TIMER_AUTOSTART

/**
 * 打印计数器
 *
 * 跟踪统计数据，如:
 *
 *  - 总打印作业
 *  - 打印作业全部成功
 *  - 打印作业总数失败
 *  - 总打印时间
 *
 * 使用M78查看当前统计数据。
 */
//#define PRINTCOUNTER

//=============================================================================
//========================= LCD and SD support 屏幕支持 =======================
//=============================================================================

// @section lcd

/**
 * 面板语言设定
 *
 * 选择要在LCD上显示的语言。这些语言是可用的:
 *
 *   en, an, bg, ca, cz, da, de, el, el_gr, es, eu, fi, fr, gl, hr, it, jp_kana,
 *   ko_KR, nl, pl, pt, pt_br, ru, sk, tr, uk, vi, zh_CN, zh_TW, test
 *
 * :{ 'en':'English', 'an':'Aragonese', 'bg':'Bulgarian', 'ca':'Catalan', 'cz':'Czech', 'da':'Danish', 'de':'German', 'el':'Greek', 'el_gr':'Greek (Greece)', 'es':'Spanish', 'eu':'Basque-Euskera', 'fi':'Finnish', 'fr':'French', 'gl':'Galician', 'hr':'Croatian', 'it':'Italian', 'jp_kana':'Japanese', 'ko_KR':'Korean (South Korea)', 'nl':'Dutch', 'pl':'Polish', 'pt':'Portuguese', 'pt_br':'Portuguese (Brazilian)', 'ru':'Russian', 'sk':'Slovak', 'tr':'Turkish', 'uk':'Ukrainian', 'vi':'Vietnamese', 'zh_CN':'Chinese (Simplified)', 'zh_TW':'Chinese (Traditional)', 'test':'TEST' }
 *
 * 有关支持的语言及其国际语言代码的最新列表，请参见language.h。
 */
#define LCD_LANGUAGE zh_CN

/**
 * 液晶字符集
 *
 * 注意:此选项不适用于图形显示。
 *
 * 所有基于字符的LCD都提供ASCII和其中一种语言扩展:
 *
 *  - JAPANESE ... the most common
 *  - WESTERN  ... with more accented characters
 *  - CYRILLIC ... for the Russian language
 *
 * 要确定语言扩展安装在您的控制器:
 *
 *  - 将LCD_LANGUAGE设置为“test”编译并上传
 *  - 点击控制器查看LCD菜单
 *  - LCD将显示JAPANESE、WESTERN或CYRILLIC的文本
 *
 * 查看 http://marlinfw.org/docs/development/lcd_language.html
 *
 * :['JAPANESE', 'WESTERN', 'CYRILLIC']
 */
#define DISPLAY_CHARSET_HD44780 JAPANESE

/**
 * 信息屏幕样式 (0:Classic, 1:Prusa)
 *
 * :[0:'Classic', 1:'Prusa']
 */
#define LCD_INFO_SCREEN_STYLE 0

/**
 * SD储存卡
 *
 * SD卡支持在默认情况下是禁用的。如果你的控制器有一个SD插槽，你必须取消注释下面的选项，否则它将无法工作。
 * 
 * 启用以使用SD打印，无论是作为LCD控制器的一部分还是作为独立的SDCard插槽。
 * 必须启用SDSUPPORT选项，否则将不支持SD打印。具有内置SDCard插槽的LCD控制器不再自动启用它。
 */
#define SDSUPPORT

/**
 * SD储存卡: SPI 速度
 *
 * 启用下列项目之一以获得较慢的SPI传输速度。
 * 这可能需要解决“卷初始化”错误。
 */
//#define SPI_SPEED SPI_HALF_SPEED
//#define SPI_SPEED SPI_QUARTER_SPEED
//#define SPI_SPEED SPI_EIGHTH_SPEED

/**
 * SD储存卡: 启用 CRC检查
 *
 * 在SD通信上使用CRC检查和重试。
 */
//#define SD_CHECK_AND_RETRY

/**
 * LCD菜单项
 *
 * 禁用所有菜单，只显示状态屏幕，或者删除一些无关的菜单项来恢复空间。
 */
//#define NO_LCD_MENUS
//#define SLIM_LCD_MENUS

//
// 编码设置
//
// 此选项覆盖产生一个步骤所需的默认编码脉冲数。应增加高分辨率编码器。
//
//#define ENCODER_PULSES_PER_STEP 4

//
// 使用此选项可覆盖在next/prev菜单项之间移动所需的步骤信号数量。
//
//#define ENCODER_STEPS_PER_MENU_ITEM 1

/**
 * 编码器方向选择
 *
 * 先测试编码器的行为，禁用这两个选项。
 *
 *  Reversed Value Edit and Menu Nav? Enable REVERSE_ENCODER_DIRECTION.
 *  Reversed Menu Navigation only?    Enable REVERSE_MENU_DIRECTION.
 *  Reversed Value Editing only?      Enable BOTH options.
 */

//
// 此选项将反转所有编码器的方向。
//
// 如果顺时针导致值减小，则设置此选项
// 有些液晶屏旋转编码器方向做反了，需要软件修正，Makeboard配套液晶屏不需要，默认即可。
//#define REVERSE_ENCODER_DIRECTION  // 去掉注释，反转液晶屏上调节数值旋转编码器方向。

//
// 此选项反转用于导航LCD菜单的编码器方向。
//
//  如果顺时针向下移动，它就会向上移动。
//  如果顺时针向上移动，它就会向下移动。
//
//#define REVERSE_MENU_DIRECTION // 去掉注释，反转液晶屏上选择菜单时旋转编码器方向。

//
// 此选项将反转选择屏幕的编码器方向。
//
//  如果顺时针向左移动，它就会向右移动。
//  如果顺时针向右移动，它就会向左移动。
//
//#define REVERSE_SELECT_DIRECTION

//
// 独立轴复位
//
// 将单个轴归位项目（Home X，Home Y和Home Z）添加到LCD菜单。
// 去掉注释，可在液晶屏上增加单独的复位X，Y，Z轴的菜单，方便调试。
//#define INDIVIDUAL_AXIS_HOMING_MENU

//
// 扬声器/蜂鸣器
// 
// 如果您的扬声器可以发出声音，请在此处启用它。
// 默认情况下，Marlin假设您有固定频率的蜂鸣器。
//
#define SPEAKER // 去掉注释，可开始液晶屏上的蜂鸣器，旋转编码旋转或者按下时蜂鸣器会发声。

//
// UI反馈声音的持续时间和频率。
// 将它们设置为0可禁用LCD菜单中的音频反馈。
//
// 注意：使用G代码测试音频输出：
// M300 S <频率Hz> P <持续时间ms>
//
//#define LCD_FEEDBACK_FREQUENCY_DURATION_MS 2
//#define LCD_FEEDBACK_FREQUENCY_HZ 5000

//=============================================================================
//======================== LCD / Controller Selection =========================
//========================   (Character-based LCDs)   =========================
//======================LCD /控制器选择（基于字符的LCD）=======================
//=============================================================================

//
// RepRapDiscount Smart Controller.
// http://reprap.org/wiki/RepRapDiscount_Smart_Controller
//
// Note: Usually sold with a white PCB.
//
//#define REPRAP_DISCOUNT_SMART_CONTROLLER  //启用2004液晶控制器,一个带拨轮的20 x 4字符LCD控制器。

//
// Original RADDS LCD Display+Encoder+SDCardReader
// http://doku.radds.org/dokumentation/lcd-display/
//
//#define RADDS_DISPLAY

//
// ULTIMAKER Controller.
//
//#define ULTIMAKERCONTROLLER

//
// ULTIPANEL as seen on Thingiverse.
//
//#define ULTIPANEL

//
// PanelOne from T3P3 (via RAMPS 1.4 AUX2/AUX3)
// http://reprap.org/wiki/PanelOne
//
//#define PANEL_ONE

//
// GADGETS3D G3D LCD/SD Controller
// http://reprap.org/wiki/RAMPS_1.3/1.4_GADGETS3D_Shield_with_Panel
//
// Note: Usually sold with a blue PCB.
//
//#define G3D_PANEL

//
// RigidBot Panel V1.0
// http://www.inventapart.com/
//
//#define RIGIDBOT_PANEL

//
// Makeboard 3D Printer Parts 3D Printer Mini Display 1602 Mini Controller
// https://www.aliexpress.com/item/32765887917.html
//
//#define MAKEBOARD_MINI_2_LINE_DISPLAY_1602

//
// ANET and Tronxy 20x4 Controller
//
//#define ZONESTAR_LCD            // Requires ADC_KEYPAD_PIN to be assigned to an analog pin.
                                  // This LCD is known to be susceptible to electrical interference
                                  // which scrambles the display.  Pressing any button clears it up.
                                  // This is a LCD2004 display with 5 analog buttons.

//
// Generic 16x2, 16x4, 20x2, or 20x4 character-based LCD.
//
//#define ULTRA_LCD

//=============================================================================
//======================== LCD / Controller Selection =========================
//=====================   (I2C and Shift-Register LCDs)   =====================
//===========================I2C和移位寄存器LCD================================
//=============================================================================

//
// 控制器类型：I2C
//
// 注意：这些控制器需要安装Arduino的LiquidCrystal_I2C库。
// 更多信息: https://github.com/kiyoshigawa/LiquidCrystal_I2C
//

//
// Elefu RA Board Control Panel
// http://www.elefu.com/index.php?route=product/product&product_id=53
//
//#define RA_CONTROL_PANEL

//
// Sainsmart (YwRobot) LCD Displays
//
// These require F.Malpartida's LiquidCrystal_I2C library
// https://bitbucket.org/fmalpartida/new-liquidcrystal/wiki/Home
//
//#define LCD_SAINSMART_I2C_1602
//#define LCD_SAINSMART_I2C_2004

//
// Generic LCM1602 LCD adapter
//
//#define LCM1602

//
// PANELOLU2 LCD with status LEDs,
// separate encoder and click inputs.
//
// Note: This controller requires Arduino's LiquidTWI2 library v1.2.3 or later.
// For more info: https://github.com/lincomatic/LiquidTWI2
//
// Note: The PANELOLU2 encoder click input can either be directly connected to
// a pin (if BTN_ENC defined to != -1) or read through I2C (when BTN_ENC == -1).
//
//#define LCD_I2C_PANELOLU2

//
// Panucatt VIKI LCD with status LEDs,
// integrated click & L/R/U/D buttons, separate encoder inputs.
//
//#define LCD_I2C_VIKI

//
// CONTROLLER TYPE: Shift register panels
//

//
// 2-wire Non-latching LCD SR from https://goo.gl/aJJ4sH
// LCD configuration: http://reprap.org/wiki/SAV_3D_LCD
//
//#define SAV_3DLCD

//
// 3-wire SR LCD with strobe using 74HC4094
// https://github.com/mikeshub/SailfishLCD
// Uses the code directly from Sailfish
//
//#define FF_INTERFACEBOARD

//=============================================================================
//=======================   LCD / Controller Selection  =======================
//=========================      (Graphical LCDs)      ========================
//================================= 图形LCD ===================================
//=============================================================================

//
// 控制器类型：图形 128x64（DOGMA）
//
// 重要: 图形显示需要U8glib库!
// https://github.com/olikraus/U8glib_Arduino
//

//
// RepRapDiscount FULL GRAPHIC Smart Controller
// http://reprap.org/wiki/RepRapDiscount_Full_Graphic_Smart_Controller
//
#define REPRAP_DISCOUNT_FULL_GRAPHIC_SMART_CONTROLLER // 开启12864液晶屏功能,可能需要u8glib库文件。
// u8glib下载 ：https://bintray.com/olikraus/u8glib/Arduino
//
// ReprapWorld Graphical LCD
// https://reprapworld.com/?products_details&products_id/1218
//
//#define REPRAPWORLD_GRAPHICAL_LCD

//
// Activate one of these if you have a Panucatt Devices
// Viki 2.0 or mini Viki with Graphic LCD
// http://panucatt.com
//
//#define VIKI2
//#define miniVIKI

//
// MakerLab Mini Panel with graphic
// controller and SD support - http://reprap.org/wiki/Mini_panel
//
//#define MINIPANEL

//
// MaKr3d Makr-Panel with graphic controller and SD support.
// http://reprap.org/wiki/MaKr3d_MaKrPanel
//
//#define MAKRPANEL

//
// Adafruit ST7565 Full Graphic Controller.
// https://github.com/eboston/Adafruit-ST7565-Full-Graphic-Controller/
//
//#define ELB_FULL_GRAPHIC_CONTROLLER

//
// BQ LCD Smart Controller shipped by
// default with the BQ Hephestos 2 and Witbox 2.
//
//#define BQ_LCD_SMART_CONTROLLER

//
// Cartesio UI
// http://mauk.cc/webshop/cartesio-shop/electronics/user-interface
//
//#define CARTESIO_UI

//
// LCD for Melzi Card with Graphical LCD
//
//#define LCD_FOR_MELZI

//
// Original Ulticontroller from Ultimaker 2 printer with SSD1309 I2C display and encoder
// https://github.com/Ultimaker/Ultimaker2/tree/master/1249_Ulticontroller_Board_(x1)
//
//#define ULTI_CONTROLLER

//
// MKS MINI12864 with graphic controller and SD support
// https://reprap.org/wiki/MKS_MINI_12864
//
//#define MKS_MINI_12864

//
// FYSETC variant of the MINI12864 graphic controller with SD support
// https://wiki.fysetc.com/Mini12864_Panel/
//
//#define FYSETC_MINI_12864_X_X    // Type C/D/E/F. No tunable RGB Backlight by default
//#define FYSETC_MINI_12864_1_2    // Type C/D/E/F. Simple RGB Backlight (always on)
//#define FYSETC_MINI_12864_2_0    // Type A/B. Discreet RGB Backlight
//#define FYSETC_MINI_12864_2_1    // Type A/B. Neopixel RGB Backlight
//#define FYSETC_GENERIC_12864_1_1 // Larger display with basic ON/OFF backlight.

//
// Factory display for Creality CR-10
// https://www.aliexpress.com/item/32833148327.html
//
// This is RAMPS-compatible using a single 10-pin connector.
// (For CR-10 owners who want to replace the Melzi Creality board but retain the display)
//
//#define CR10_STOCKDISPLAY

//
// Ender-2 OEM display, a variant of the MKS_MINI_12864
//
//#define ENDER2_STOCKDISPLAY

//
// ANET and Tronxy Graphical Controller
//
// Anet 128x64 full graphics lcd with rotary encoder as used on Anet A6
// A clone of the RepRapDiscount full graphics display but with
// different pins/wiring (see pins_ANET_10.h).
//
//#define ANET_FULL_GRAPHICS_LCD

//
// AZSMZ 12864 LCD with SD
// https://www.aliexpress.com/item/32837222770.html
//
//#define AZSMZ_12864

//
// Silvergate GLCD controller
// http://github.com/android444/Silvergate
//
//#define SILVER_GATE_GLCD_CONTROLLER

//=============================================================================
//========================  OLED Displays OLED显示器 ==========================
//=============================================================================

//
// SSD1306 OLED全图形通用显示器
//
//#define U8GLIB_SSD1306

//
// SAV OLEd LCD module support using either SSD1306 or SH1106 based LCD modules
//
//#define SAV_3DGLCD
#if ENABLED(SAV_3DGLCD)
  #define U8GLIB_SSD1306
  //#define U8GLIB_SH1106
#endif

//
// TinyBoy2 128x64 OLED / Encoder Panel
//
//#define OLED_PANEL_TINYBOY2

//
// MKS OLED 1.3" 128 × 64 FULL GRAPHICS CONTROLLER
// http://reprap.org/wiki/MKS_12864OLED
//
// Tiny, but very sharp OLED display
//
//#define MKS_12864OLED          // Uses the SH1106 controller (default)
//#define MKS_12864OLED_SSD1306  // Uses the SSD1306 controller

//
// Einstart S OLED SSD1306
//
//#define U8GLIB_SH1106_EINSTART

//
// Overlord OLED display/controller with i2c buzzer and LEDs
//
//#define OVERLORD_OLED

//=============================================================================
//=============== Extensible UI Displays 可扩展的UI显示 =======================
//=============================================================================

//
// 带有DWIN OS的DGUS触摸屏。 （选一个）
//
//#define DGUS_LCD_UI_ORIGIN
//#define DGUS_LCD_UI_FYSETC
//#define DGUS_LCD_UI_HIPRECY

//
// Touch-screen LCD for Malyan M200 printers
//
//#define MALYAN_LCD

//
// Touch UI for FTDI EVE (FT800/FT810) displays
// See Configuration_adv.h for all configuration options.
//
//#define TOUCH_UI_FTDI_EVE

//
// Third-party or vendor-customized controller interfaces.
// Sources should be installed in 'src/lcd/extensible_ui'.
//
//#define EXTENSIBLE_UI

//=============================================================================
//======================== Graphical TFTs 图形TFT ==============================
//=============================================================================

//
// FSMC显示屏（MKS Robin，Alfawise U20，JGAurora A5S，REXYZ A1等）
//
//#define FSMC_GRAPHICAL_TFT

//=============================================================================
//=====================  Other Controllers  其他控制器 ========================
//=============================================================================

//
// ADS7843/XPT2046 ADC Touchscreen such as ILI9341 2.8
//
//#define TOUCH_BUTTONS
#if ENABLED(TOUCH_BUTTONS)
  #define BUTTON_DELAY_EDIT  50 // (ms) Button repeat delay for edit screens
  #define BUTTON_DELAY_MENU 250 // (ms) Button repeat delay for menus

  #define XPT2046_X_CALIBRATION   12316
  #define XPT2046_Y_CALIBRATION  -8981
  #define XPT2046_X_OFFSET       -43
  #define XPT2046_Y_OFFSET        257
#endif

//
// RepRapWorld REPRAPWORLD_KEYPAD v1.1
// http://reprapworld.com/?products_details&products_id=202&cPath=1591_1626
//
//#define REPRAPWORLD_KEYPAD
//#define REPRAPWORLD_KEYPAD_MOVE_STEP 10.0 // (mm) Distance to move per key-press

//=============================================================================
//========================== Extra Features 额外功能 ==========================
//=============================================================================

// @section extras

// 增加风扇PWM频率。去除PWM噪声但会增加FET/Arduino的发热
//#define FAST_PWM_FAN

// 与加热器一样，使用软件PWM驱动风扇。这使用了非常低的频率，不像硬件PWM那样令人讨厌。 
// 另一方面，如果该频率太低，则还应该增加SOFT_PWM_SCALE。
//#define FAN_SOFT_PWM

// 增加1将使软件PWM频率加倍，影响加热器，如果FAN_SOFT_PWM是启用的风扇。然而，控制分辨率会增加一半;
// 在零值时，有128个有效控制位置。
// :[0,1,2,3,4,5,6,7]
#define SOFT_PWM_SCALE 0

// 如果将SOFT_PWM_SCALE设置为大于0的值，则可以使用抖动来减轻相关的分辨率损失。
// 如果启用，一些PWM周期被拉伸，从而平均达到期望的占空比。
//#define SOFT_PWM_DITHER

// 温度状态led，显示加热头和热床温度。
// 如果所有的温度、热床温度和目标温度都低于54C，那么蓝色的led就亮了。否则，红色的led灯就亮了。(1C延迟)
//#define TEMP_STAT_LEDS

// 当使用弧点作为圆角过程时，SkeinForge发送了错误的弧G代码
//#define SF_ARC_FIX

// 支持BariCUDA糊状挤出机
//#define BARICUDA

// 支持BlinkM / CyzRgb
//#define BLINKM

// 支持PCA9632 PWM LED驱动器
//#define PCA9632

// 支持PCA9533 PWM LED驱动器
// https://github.com/mikeshub/SailfishRGB_LED
//#define PCA9533

/**
 *RGB LED / LED灯带控制
 *
 * 启用对连接到5V数字引脚的RGB LED或连接到由数字引脚控制的MOSFET的RGB条的支持。
 *
 * 添加M150命令以设置LED（或LED灯带）颜色。
 * 如果引脚具有PWM功能（例如4、5、6、11），则可以将亮度值的范围设置为0至255。
 * 对于Neopixel LED，还可以提供整体亮度参数。
 *
 * *** 警告 ***
 *  LED条需要在PWM线和LED之间使用MOSFET芯片，因为Arduino无法处理LED所需的电流。
 *  不遵循此预防措施可能会破坏您的Arduino！
 *  注意：需要单独的5V电源！ Neopixel LED需求
 *  比Arduino 5V线性稳压器产生的电流更大。
 * *** 警告 ***
 *
 * LED类型。 仅启用以下两个选项之一。
 *
 */
//#define RGB_LED
//#define RGBW_LED

#if EITHER(RGB_LED, RGBW_LED)
  //#define RGB_LED_R_PIN 34
  //#define RGB_LED_G_PIN 43
  //#define RGB_LED_B_PIN 35
  //#define RGB_LED_W_PIN -1
#endif

// 支持Adafruit Neopixel LED驱动器
//#define NEOPIXEL_LED
#if ENABLED(NEOPIXEL_LED)
  #define NEOPIXEL_TYPE   NEO_GRBW // NEO_GRBW / NEO_GRB-四/三通道驱动程序类型（在Adafruit_NeoPixel.h中定义）
  #define NEOPIXEL_PIN     4       // LED驱动引脚
  //#define NEOPIXEL2_TYPE NEOPIXEL_TYPE
  //#define NEOPIXEL2_PIN    5
  #define NEOPIXEL_PIXELS 30       // 灯条中的LED数量，如果使用2个新像素灯条，则大于2个灯条
  #define NEOPIXEL_IS_SEQUENTIAL   // 温度变化的顺序显示-逐个LED。 禁用一次更改所有LED。
  #define NEOPIXEL_BRIGHTNESS 127  // 初始亮度（0-255）
  //#define NEOPIXEL_STARTUP_TEST  // 启动时循环显示颜色

  // 使用单个Neopixel LED进行静态（背景）照明
  //#define NEOPIXEL_BKGD_LED_INDEX  0               // 使用的LED的索引
  //#define NEOPIXEL_BKGD_COLOR { 255, 255, 255, 0 } // R, G, B, W
#endif

/**
 * 打印机事件指示灯
 *
 * 在打印过程中，LED将反映打印机状态：
 *
 *  - 随着加热床达到目标温度，逐渐从蓝色变为紫色
 *  - 随着温度上升，紫罗兰色逐渐变为红色
 *  - 变为白色以照亮工作表面
 *  - 打印完成后变为绿色
 *  - 打印完成，用户按下按钮后关闭
 */
#if ANY(BLINKM, RGB_LED, RGBW_LED, PCA9632, PCA9533, NEOPIXEL_LED)
  #define PRINTER_EVENT_LEDS
#endif

/**
 * R/C 伺服电机支持
 * Sponsored by TrinityLabs, Reworked by codexmas
 */

/**
 * 伺服数
 *
 * 对于某些与伺服相关的选项，将自动设置NUM_SERVOS。
 * 如果还有其他需要手动控制的伺服器，请手动设置。
 * 保留未定义或设置为0可以完全禁用伺服子系统。
 */
//#define NUM_SERVOS 3 // M280命令的伺服索引从0开始

// (ms) 在下一个动作开始之前要延迟一定的时间，以使伺服系统有时间达到其目标角度。
// 300ms 是一个很好的值，但是您可以尝试减少延迟。
// 如果伺服器无法到达要求的位置，请增加它。
#define SERVO_DELAY { 300 }

// 在运动过程中仅对功率伺服器供电，否则应避免抖动
//#define DEACTIVATE_SERVOS_AFTER_MOVE

// 允许编辑伺服角度并将其保存到EEPROM
//#define EDITABLE_SERVO_ANGLES
