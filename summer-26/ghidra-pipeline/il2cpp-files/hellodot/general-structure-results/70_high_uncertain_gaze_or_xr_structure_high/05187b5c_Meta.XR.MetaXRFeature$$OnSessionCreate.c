/*
FUNCTION_NAME: Meta.XR.MetaXRFeature$$OnSessionCreate
ENTRY_POINT: 05187b5c
PROGRAM: hellodot-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MetaXRFeature__OnSessionCreate(void)

{
  undefined *puVar1;
  long unaff_x21;
  
  puVar1 = PTR_DAT_06607db8;
  if ((*(byte *)(unaff_x21 + 0x172) & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06607db8);
    *(undefined1 *)(unaff_x21 + 0x172) = 1;
  }
  thunk_FUN_02cea4e8(*(undefined8 *)puVar1);
  return;
}


