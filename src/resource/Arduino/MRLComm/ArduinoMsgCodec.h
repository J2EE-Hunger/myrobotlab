#ifndef ArduinoMsgCodec_h
#define ArduinoMsgCodec_h

/*******************************************************************
 * MRLCOMM FUNCTION GENERATED INTERFACE
 * this file was generated by ArduinoMsgCodec and ArduinoMsgCodec.h.template
 */

///// INO GENERATED DEFINITION BEGIN //////
// {publishMRLCommError Integer} 
#define PUBLISH_MRLCOMM_ERROR		1
// {getVersion} 
#define GET_VERSION		2
// {publishVersion Integer} 
#define PUBLISH_VERSION		3
// {analogWrite int int} 
#define ANALOG_WRITE		4
// {controllerAttach Arduino int} 
#define CONTROLLER_ATTACH		5
// {createI2cDevice I2CControl int int} 
#define CREATE_I2C_DEVICE		6
// {deviceAttach DeviceControl Object[]} 
#define DEVICE_ATTACH		7
// {deviceDetach DeviceControl} 
#define DEVICE_DETACH		8
// {digitalWrite int int} 
#define DIGITAL_WRITE		9
// {disableBoardStatus} 
#define DISABLE_BOARD_STATUS		10
// {disablePin int} 
#define DISABLE_PIN		11
// {enableBoardStatus int} 
#define ENABLE_BOARD_STATUS		12
// {enablePin int} 
#define ENABLE_PIN		13
// {getMrlPinType PinDefinition} 
#define GET_MRL_PIN_TYPE		14
// {i2cRead I2CControl int int byte[] int} 
#define I2C_READ		15
// {i2cWrite I2CControl int int byte[] int} 
#define I2C_WRITE		16
// {i2cWriteRead I2CControl int int byte[] int byte[] int} 
#define I2C_WRITE_READ		17
// {intsToString int[] int int} 
#define INTS_TO_STRING		18
// {isAttached} 
#define IS_ATTACHED		19
// {motorMove MotorControl} 
#define MOTOR_MOVE		20
// {motorMoveTo MotorControl} 
#define MOTOR_MOVE_TO		21
// {motorReset MotorControl} 
#define MOTOR_RESET		22
// {motorStop MotorControl} 
#define MOTOR_STOP		23
// {msgRoute} 
#define MSG_ROUTE		24
// {neoPixelWriteMatrix NeoPixel List} 
#define NEO_PIXEL_WRITE_MATRIX		25
// {onSensorData SensorData} 
#define ON_SENSOR_DATA		26
// {pinMode int String} 
#define PIN_MODE		27
// {publishAttachedDevice String} 
#define PUBLISH_ATTACHED_DEVICE		28
// {publishBoardInfo BoardInfo} 
#define PUBLISH_BOARD_INFO		29
// {publishBoardStatus BoardStatus} 
#define PUBLISH_BOARD_STATUS		30
// {publishDebug String} 
#define PUBLISH_DEBUG		31
// {publishMessageAck} 
#define PUBLISH_MESSAGE_ACK		32
// {publishPin PinData} 
#define PUBLISH_PIN		33
// {publishPinArray PinData[]} 
#define PUBLISH_PIN_ARRAY		34
// {publishPulse Long} 
#define PUBLISH_PULSE		35
// {publishPulseStop Integer} 
#define PUBLISH_PULSE_STOP		36
// {publishSensorData SensorData} 
#define PUBLISH_SENSOR_DATA		37
// {publishServoEvent Integer} 
#define PUBLISH_SERVO_EVENT		38
// {publishTrigger Pin} 
#define PUBLISH_TRIGGER		39
// {pulse int int int int} 
#define PULSE		40
// {pulseStop} 
#define PULSE_STOP		41
// {read int} 
#define READ		42
// {releaseI2cDevice I2CControl int int} 
#define RELEASE_I2C_DEVICE		43
// {sensorActivate SensorControl Object[]} 
#define SENSOR_ACTIVATE		44
// {sensorDeactivate SensorControl} 
#define SENSOR_DEACTIVATE		45
// {sensorPollingStart String} 
#define SENSOR_POLLING_START		46
// {sensorPollingStop String} 
#define SENSOR_POLLING_STOP		47
// {servoAttach ServoControl int} 
#define SERVO_ATTACH		48
// {servoDetach ServoControl} 
#define SERVO_DETACH		49
// {servoEventsEnabled ServoControl boolean} 
#define SERVO_EVENTS_ENABLED		50
// {servoSetSpeed ServoControl} 
#define SERVO_SET_SPEED		51
// {servoSweepStart ServoControl} 
#define SERVO_SWEEP_START		52
// {servoSweepStop ServoControl} 
#define SERVO_SWEEP_STOP		53
// {servoWrite ServoControl} 
#define SERVO_WRITE		54
// {servoWriteMicroseconds ServoControl int} 
#define SERVO_WRITE_MICROSECONDS		55
// {setDebounce int} 
#define SET_DEBOUNCE		56
// {setDebug boolean} 
#define SET_DEBUG		57
// {setDigitalTriggerOnly Boolean} 
#define SET_DIGITAL_TRIGGER_ONLY		58
// {setPWMFrequency Integer Integer} 
#define SET_PWMFREQUENCY		59
// {setSampleRate int} 
#define SET_SAMPLE_RATE		60
// {setSerialRate int} 
#define SET_SERIAL_RATE		61
// {setTrigger int int int} 
#define SET_TRIGGER		62
// {softReset} 
#define SOFT_RESET		63
// {write int int} 
#define WRITE		64
///// INO GENERATED DEFINITION END //////


/*******************************************************************
 * serial protocol functions
 */
#define MAGIC_NUMBER            170 // 10101010


/*******************************************************************
 * BOARD TYPE
 */
#define BOARD_TYPE_ID_UNKNOWN 0
#define BOARD_TYPE_ID_MEGA    1
#define BOARD_TYPE_ID_UNO     2

#if defined(ARDUINO_AVR_MEGA2560) || defined(ARDUINO_AVR_ADK)
  #define BOARD BOARD_TYPE_ID_MEGA
#elif defined(ARDUINO_AVR_UNO)
  #define BOARD BOARD_TYPE_ID_UNO
#else
  #define BOARD BOARD_TYPE_ID_UNKNOWN
#endif

#endif
