#ifndef IGGY_SCE_SHIM_H
#define IGGY_SCE_SHIM_H

#ifdef __cplusplus
extern "C" {
#endif

typedef enum SceSystemParamId {
    SCE_SYSTEM_PARAM_ID_LANG = 1,
    SCE_SYSTEM_PARAM_ID_ENTER_BUTTON,
    SCE_SYSTEM_PARAM_ID_USER_NAME,
    SCE_SYSTEM_PARAM_ID_DATE_FORMAT,
    SCE_SYSTEM_PARAM_ID_TIME_FORMAT,
    SCE_SYSTEM_PARAM_ID_TIME_ZONE,
    SCE_SYSTEM_PARAM_ID_SUMMERTIME,
    SCE_SYSTEM_PARAM_ID_MAX_VALUE = 0xFFFFFFFF
} SceSystemParamId;

typedef struct SceDateTime {

} SceDateTime;

typedef struct SceRtcTick {

} SceRtcTick;

#ifdef __cplusplus
}
#endif

#endif // IGGY_SCE_SHIM_H