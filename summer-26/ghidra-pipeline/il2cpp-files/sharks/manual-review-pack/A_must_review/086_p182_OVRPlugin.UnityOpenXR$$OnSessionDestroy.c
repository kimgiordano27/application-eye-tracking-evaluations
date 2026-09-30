/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionDestroy
ENTRY_POINT: 02c49158
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


void OVRPlugin_UnityOpenXR__OnSessionDestroy(void)

{
  undefined *puVar1;
  long lVar2;
  long *unaff_x21;
  
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
  }
  if (DAT_03a2265f == '\0') {
    FUN_017fc350(PTR_DAT_037f8768);
    FUN_017fc350(PTR_DAT_037f45f0);
    DAT_03a2265f = '\x01';
  }
  puVar1 = PTR_DAT_037f45f0;
  lVar2 = *(long *)PTR_DAT_037f45f0;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
    lVar2 = *(long *)puVar1;
  }
  if (*(char *)(*(long *)(lVar2 + 0xb8) + 0x10) != '\0') {
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    FUN_02c422bc();
    return;
  }
  return;
}


