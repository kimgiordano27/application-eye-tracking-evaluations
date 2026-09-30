/*
FUNCTION_NAME: OVRTelemetryConstants.OVRManager$$.cctor
ENTRY_POINT: 052136ac
PROGRAM: hellodot-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRTelemetryConstants_OVRManager___cctor(ulong param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  long *plVar2;
  long unaff_x21;
  
  plVar2 = *(long **)(unaff_x20 + 0x878);
  if ((param_1 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_066093f8);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065ce878);
    *(undefined1 *)(unaff_x21 + 0x4b7) = 1;
  }
  if (*(int *)(*plVar2 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  if (DAT_06a73574 == '\0') {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065ce878);
    DAT_06a73574 = '\x01';
  }
  lVar1 = *plVar2;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
    lVar1 = *plVar2;
  }
  if (**(char **)(lVar1 + 0xb8) != '\0') {
    if (*(int *)(*(long *)PTR_DAT_066093f8 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    FUN_051ecaac(param_2);
    return;
  }
  return;
}


