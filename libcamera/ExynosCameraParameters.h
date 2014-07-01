// cmdType in sendCommand functions
enum {
	CAMERA_CMD_SET_TOUCH_AF_POSITION        = 1103,
	CAMERA_CMD_START_STOP_TOUCH_AF          = 1105,
	CAMERA_CMD_SET_SAMSUNG_APP              = 1108,
	CAMERA_CMD_DISABLE_POSTVIEW             = 1109,
	CAMERA_CMD_AUTO_LOW_LIGHT_SET           = 1351,
	CAMERA_CMD_SET_FLIP                     = 1510,
	HAL_CMD_SET_INTERLEAVED_MODE         = 1515,
	CAMERA_CMD_AE_LOCK                      = 1512,
	CAMERA_CMD_AWB_LOCK                     = 1513,
	CAMERA_CMD_START_SERIES_CAPTURE         = 1516,
	CAMERA_CMD_STOP_SERIES_CAPTURE          = 1517,
	CAMERA_CMD_DEVICE_ORIENTATION           = 1521,
	HAL_CMD_START_FACEZOOM               = 1531,
	HAL_CMD_STOP_FACEZOOM                = 1532,
	HAL_CMD_START_CONTINUOUS_AF          = 1551,
	HAL_CMD_STOP_CONTINUOUS_AF           = 1552,
	CAMERA_CMD_PREPARE_FOR_FACE_DETECTION   = 1561,
	CAMERA_CMD_AUTOFOCUS_MACRO_POSITION  = 1642,

	/* secmsg type in sec_camera_msg_defined.h */
	HAL_AE_AWB_LOCK_UNLOCK = 1501,
	HAL_FACE_DETECT_LOCK_UNLOCK = 1502,
	HAL_OBJECT_POSITION = 1503,
	HAL_OBJECT_TRACKING_STARTSTOP = 1504,
	HAL_TOUCH_AF_STARTSTOP = 1505,
	HAL_STOP_CHK_DATALINE = 1056,
	HAL_SET_DEFAULT_IMEI = 1507,
	HAL_SET_SAMSUNG_CAMERA  = 1508,
	HAL_DISABLE_POSTVIEW_TO_OVERLAY = 1509,
	HAL_SET_FRONT_SENSOR_MIRROR = 1510,
	SET_DISPLAY_ORIENTATION_MIRROR = 1511,
	HAL_CONTROL_FIRMWARE = 1514,
	HAL_SET_INTERLEAVED_MODE = 1515,
};

