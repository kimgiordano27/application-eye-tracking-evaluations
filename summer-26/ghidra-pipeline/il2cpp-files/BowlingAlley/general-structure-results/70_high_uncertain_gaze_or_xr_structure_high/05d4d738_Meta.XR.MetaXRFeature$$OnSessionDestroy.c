/*
FUNCTION_NAME: Meta.XR.MetaXRFeature$$OnSessionDestroy
ENTRY_POINT: 05d4d738
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MetaXRFeature__OnSessionDestroy(void)

{
  undefined8 uVar1;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  
  *(undefined8 *)(unaff_x19 + 0x160) = unaff_x20;
  thunk_FUN_0333a630();
  uVar1 = thunk_FUN_032a56a0(*unaff_x23);
  FUN_05d4d79c();
  *(undefined8 *)(unaff_x19 + 0x170) = uVar1;
  thunk_FUN_0333a630(unaff_x19 + 0x170,uVar1);
  uVar1 = thunk_FUN_032a56a0(*unaff_x22);
  FUN_05d4d860();
  *(undefined8 *)(unaff_x19 + 400) = uVar1;
  thunk_FUN_0333a630(unaff_x19 + 400,uVar1);
  FUN_0479bcf4();
  return;
}


