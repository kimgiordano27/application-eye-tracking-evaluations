/*
FUNCTION_NAME: FUN_06bfa3a0
ENTRY_POINT: 06bfa3a0
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


undefined4 FUN_06bfa3a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  void *__ptr;
  void *__ptr_00;
  void *__ptr_01;
  char *local_60;
  undefined8 uStack_58;
  char *local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_34;
  
                    /* catch(type#2 @ 00000000) { ... } // from try @ 06bfa368 with catch @ 06bfa3a4
                       catch(type#2 @ 00000000) { ... } // from try @ 06bfa39c with catch @ 06bfa3a4
                        */
  if (DAT_086e5018 == (code *)0x0) {
    local_60 = "OVRPlugin";
    uStack_58 = 9;
    local_50 = "ovrp_SendEvent2";
    uStack_48 = 0xf;
    local_38 = 0x18;
    local_40 = DAT_012e29d0;
    local_34 = 0;
    DAT_086e5018 = (code *)FUN_03398d30(&local_60);
  }
  __ptr = (void *)FUN_03399068(param_1);
  __ptr_00 = (void *)FUN_03399068(param_2);
  __ptr_01 = (void *)FUN_03399068(param_3);
  uVar1 = (*DAT_086e5018)(__ptr,__ptr_00,__ptr_01);
  if (__ptr != (void *)0x0) {
    free(__ptr);
  }
  if (__ptr_00 != (void *)0x0) {
    free(__ptr_00);
  }
  if (__ptr_01 != (void *)0x0) {
    free(__ptr_01);
  }
  return uVar1;
}


