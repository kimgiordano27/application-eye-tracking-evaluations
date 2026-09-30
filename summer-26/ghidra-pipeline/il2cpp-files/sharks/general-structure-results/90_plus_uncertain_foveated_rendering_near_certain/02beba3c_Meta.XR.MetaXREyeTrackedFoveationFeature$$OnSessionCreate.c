/*
FUNCTION_NAME: Meta.XR.MetaXREyeTrackedFoveationFeature$$OnSessionCreate
ENTRY_POINT: 02beba3c
PROGRAM: sharks-libil2cpp.so
SCORE: 114
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;data_collection_or_telemetry
MODULES: eye_source;telemetry;foveation_rendering
EVIDENCE: strong_eye_source_hits_3;telemetry_or_network_hits_2;strong_foveation_hits_2;functionality_foveated_rendering;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MetaXREyeTrackedFoveationFeature__OnSessionCreate(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_037f3df8;
  if ((DAT_03a25d05 & 1) == 0) {
    FUN_017fc350(PTR_DAT_037f3df8);
    DAT_03a25d05 = 1;
  }
  uVar1 = *param_1;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  FUN_02b4d334(uVar1,0);
  return;
}


