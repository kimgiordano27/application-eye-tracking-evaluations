/*
FUNCTION_NAME: FUN_02cebc24
ENTRY_POINT: 02cebc24
PROGRAM: sharks-libil2cpp.so
SCORE: 74
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;strong_foveation_hits_1;functionality_foveated_rendering
*/


void FUN_02cebc24(undefined8 param_1)

{
  char *local_50;
  undefined8 uStack_48;
  char *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  
  if (DAT_03a28580 == (code *)0x0) {
    local_50 = "UnityOpenXR";
    uStack_48 = 0xb;
    local_40 = "MetaGetEyeTrackedFoveationSupported";
    uStack_38 = 0x23;
    local_28 = 8;
    local_30 = DAT_009a57e0;
    local_24 = 0;
    DAT_03a28580 = (code *)thunk_FUN_01861e78(&local_50);
  }
  local_50 = (char *)((ulong)local_50 & 0xffffffff00000000);
  (*DAT_03a28580)(&local_50);
  *(bool *)param_1 = (int)local_50 != 0;
  return;
}


