/*
FUNCTION_NAME: Meta.XR.MetaXRFeature$$OnSessionCreate
ENTRY_POINT: 02bec1fc
PROGRAM: sharks-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MetaXRFeature__OnSessionCreate(ulong param_1)

{
  undefined8 *unaff_x20;
  undefined8 uVar1;
  undefined8 *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  undefined1 auVar2 [16];
  
  if ((param_1 & 1) == 0) {
    FUN_017fc350(PTR_DAT_03806300);
    FUN_017fc350(PTR_DAT_038001d0);
    *(undefined1 *)(unaff_x23 + 0xd15) = 1;
  }
  uVar1 = *unaff_x20;
  auVar2 = FUN_01d90860(0,*unaff_x21);
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  FUN_02bd6368(uVar1,auVar2._0_8_,auVar2._8_8_);
  return;
}


