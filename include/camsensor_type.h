// have to match count at seccamera.h
#ifndef __MEDIA_CAMSENSOR_TYPE_H__ // VE_GROUP [[
#define __MEDIA_CAMSENSOR_TYPE_H__
#define CONFIG_VIDEO_SENSOR_VE
enum CAMERA_SENSOR_ID
{
	CAMERA_SENSOR_ID_BACK_ORG = 0 ,
	CAMERA_SENSOR_ID_ISX005 = CAMERA_SENSOR_ID_BACK_ORG, // for original cam
	CAMERA_SENSOR_ID_FRONT,
#ifdef LTN_ATV
	CAMERA_SENSOR_ID_ATV,
#endif
	CAMERA_SENSOR_ID_BACK_VE_START,
	CAMERA_SENSOR_ID_S5K5CCGX = CAMERA_SENSOR_ID_BACK_VE_START ,
	CAMERA_SENSOR_ID_BACK_VE_END
}; 
#endif  //]] VE_GROUP
