/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.TweakManager$$get_TelemetryAnnotation
ENTRY_POINT: 0729a0c0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_Manager_TweakManager__get_TelemetryAnnotation(void)

{
  undefined8 uVar1;
  long unaff_x19;
  undefined8 *unaff_x21;
  
  uVar1 = FUN_04077674();
  *(undefined8 *)(unaff_x19 + 0x50) = uVar1;
  thunk_FUN_040ec700();
  uVar1 = FUN_04077674(*unaff_x21,0x10);
  *(undefined8 *)(unaff_x19 + 0x58) = uVar1;
  thunk_FUN_040ec700();
  uVar1 = FUN_04077674(*unaff_x21,8);
  *(undefined8 *)(unaff_x19 + 0x60) = uVar1;
  thunk_FUN_040ec700();
  uVar1 = FUN_04077674(*unaff_x21,8);
  *(undefined8 *)(unaff_x19 + 0x68) = uVar1;
  thunk_FUN_040ec700();
  uVar1 = FUN_04077674(*unaff_x21,8);
  *(undefined8 *)(unaff_x19 + 0x70) = uVar1;
  thunk_FUN_040ec700();
  uVar1 = FUN_04077674(*unaff_x21,8);
  *(undefined8 *)(unaff_x19 + 0x78) = uVar1;
  thunk_FUN_040ec700();
  uVar1 = FUN_04077674(*unaff_x21,4);
  *(undefined8 *)(unaff_x19 + 0x80) = uVar1;
  thunk_FUN_040ec700();
  uVar1 = FUN_04077674(*unaff_x21,6);
  *(undefined8 *)(unaff_x19 + 0x88) = uVar1;
  thunk_FUN_040ec700();
  uVar1 = FUN_04077674(*unaff_x21,4);
  *(undefined8 *)(unaff_x19 + 0x90) = uVar1;
  thunk_FUN_040ec700();
  uVar1 = FUN_04077674(*unaff_x21,4);
  *(undefined8 *)(unaff_x19 + 0x98) = uVar1;
  thunk_FUN_040ec700();
  FUN_076bca34();
  *(undefined4 *)(unaff_x19 + 0x28) = 0;
  return;
}


