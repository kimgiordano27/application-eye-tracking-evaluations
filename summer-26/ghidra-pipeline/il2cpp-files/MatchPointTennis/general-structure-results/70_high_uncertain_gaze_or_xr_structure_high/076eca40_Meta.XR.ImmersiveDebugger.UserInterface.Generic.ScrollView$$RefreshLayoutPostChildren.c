/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ScrollView$$RefreshLayoutPostChildren
ENTRY_POINT: 076eca40
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


long Meta_XR_ImmersiveDebugger_UserInterface_Generic_ScrollView__RefreshLayoutPostChildren(void)

{
  long lVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  
  *(undefined1 *)(unaff_x20 + 0xeaf) = 1;
  lVar1 = thunk_FUN_0448520c(*unaff_x21);
  FUN_07a80df4(lVar1,0);
  *(undefined4 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x20) = unaff_x19;
  thunk_FUN_044bb4b4();
  *(undefined4 *)(lVar1 + 0x28) = unaff_s9;
  *(undefined4 *)(lVar1 + 0x2c) = unaff_s8;
  return lVar1;
}


