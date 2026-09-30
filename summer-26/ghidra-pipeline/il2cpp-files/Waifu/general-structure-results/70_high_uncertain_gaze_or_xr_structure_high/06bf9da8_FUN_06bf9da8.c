/*
FUNCTION_NAME: FUN_06bf9da8
ENTRY_POINT: 06bf9da8
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


undefined4 FUN_06bf9da8(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  void *__ptr;
  void *__ptr_00;
  char *local_50;
  undefined8 uStack_48;
  char *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  
  if (DAT_086e4fc8 == (code *)0x0) {
    local_50 = "OVRPlugin";
    uStack_48 = 9;
    local_40 = "ovrp_SendEvent";
    uStack_38 = 0xe;
    local_28 = 0x10;
    local_30 = DAT_012e29d0;
    local_24 = 0;
    DAT_086e4fc8 = (code *)FUN_03398d30(&local_50);
  }
  __ptr = (void *)FUN_03399068(param_1);
  __ptr_00 = (void *)FUN_03399068(param_2);
  uVar1 = (*DAT_086e4fc8)(__ptr,__ptr_00);
  if (__ptr != (void *)0x0) {
    free(__ptr);
  }
  if (__ptr_00 != (void *)0x0) {
    free(__ptr_00);
  }
  return uVar1;
}


