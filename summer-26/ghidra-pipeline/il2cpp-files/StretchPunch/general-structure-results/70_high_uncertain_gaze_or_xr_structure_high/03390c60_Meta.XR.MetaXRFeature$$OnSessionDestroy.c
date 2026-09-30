/*
FUNCTION_NAME: Meta.XR.MetaXRFeature$$OnSessionDestroy
ENTRY_POINT: 03390c60
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


void Meta_XR_MetaXRFeature__OnSessionDestroy(ulong param_1)

{
  undefined8 uVar1;
  undefined2 *unaff_x21;
  long *unaff_x22;
  undefined8 *unaff_x23;
  long unaff_x24;
  undefined2 uStack000000000000000c;
  
  if ((param_1 & 1) == 0) {
    FUN_01d7d918(StringLiteral_1060);
    FUN_01d7d918(StringLiteral_1169);
    *(undefined1 *)(unaff_x24 + 0x77f) = 1;
  }
  uStack000000000000000c = *unaff_x21;
  uVar1 = thunk_FUN_01de23e8(*unaff_x23,&stack0x0000000c);
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01dc4f30(*unaff_x22);
  }
  FUN_032912b8(uVar1);
  return;
}


