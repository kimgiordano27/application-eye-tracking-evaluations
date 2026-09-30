/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionDestroy
ENTRY_POINT: 0696ac50
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


long OVRPlugin_UnityOpenXR__OnSessionDestroy(ulong param_1)

{
  long lVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  
  if ((param_1 & 1) == 0) {
    FUN_03a8a718(PTR_DAT_084b7058);
    *(undefined1 *)(unaff_x20 + 0xd8) = 1;
  }
  lVar1 = thunk_FUN_03ac74bc(*unaff_x21);
  FUN_0679343c(lVar1,0);
  *(undefined4 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x20) = unaff_x19;
  thunk_FUN_03afed3c();
  return lVar1;
}


