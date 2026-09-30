/*
FUNCTION_NAME: Meta.XR.MetaXRFeature$$OnSessionStateChange
ENTRY_POINT: 03390910
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MetaXRFeature__OnSessionStateChange(undefined2 *param_1)

{
  undefined2 uVar1;
  undefined *puVar2;
  long unaff_x21;
  
  puVar2 = StringLiteral_1060;
  if ((*(byte *)(unaff_x21 + 0x778) & 1) == 0) {
    FUN_01d7d918(StringLiteral_1060);
    *(undefined1 *)(unaff_x21 + 0x778) = 1;
  }
  uVar1 = *param_1;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  FUN_03298d40(uVar1,0);
  return;
}


