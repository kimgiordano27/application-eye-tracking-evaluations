/*
FUNCTION_NAME: FUN_058174a4
ENTRY_POINT: 058174a4
PROGRAM: Untangled-libil2cpp.so
SCORE: 74
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;strong_foveation_hits_1;functionality_foveated_rendering
*/


void FUN_058174a4(undefined8 param_1)

{
  char *pcStack_50;
  undefined8 uStack_48;
  char *pcStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined1 uStack_24;
  
  if (pcRam00000000071c6018 == (code *)0x0) {
    pcStack_50 = "UnityOpenXR";
    uStack_48 = 0xb;
    pcStack_40 = "MetaGetEyeTrackedFoveationSupported";
    uStack_38 = 0x23;
    uStack_28 = 8;
    uStack_30 = DAT_013f55f0;
    uStack_24 = 0;
    pcRam00000000071c6018 = (code *)thunk_FUN_02ef1ac4(&pcStack_50);
  }
  pcStack_50 = (char *)((ulong)pcStack_50 & 0xffffffff00000000);
  (*pcRam00000000071c6018)(&pcStack_50);
  *(bool *)param_1 = (int)pcStack_50 != 0;
  return;
}


