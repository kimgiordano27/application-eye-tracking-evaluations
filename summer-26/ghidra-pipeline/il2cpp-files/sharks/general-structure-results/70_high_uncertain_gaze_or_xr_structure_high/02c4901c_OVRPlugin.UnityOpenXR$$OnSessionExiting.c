/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionExiting
ENTRY_POINT: 02c4901c
PROGRAM: sharks-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 OVRPlugin_UnityOpenXR__OnSessionExiting(void)

{
  long lVar1;
  long *unaff_x19;
  
  if (*(int *)(*unaff_x19 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  if (DAT_03a24a5c == '\0') {
    FUN_017fc350(PTR_DAT_037f45f0);
    DAT_03a24a5c = '\x01';
  }
  lVar1 = *unaff_x19;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
    lVar1 = *unaff_x19;
  }
  return *(undefined8 *)(*(long *)(lVar1 + 0xb8) + 0x30);
}


