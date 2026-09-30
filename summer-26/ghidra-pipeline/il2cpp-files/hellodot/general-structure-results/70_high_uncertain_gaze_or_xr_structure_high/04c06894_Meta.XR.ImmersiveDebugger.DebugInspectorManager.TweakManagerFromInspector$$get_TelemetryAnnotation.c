/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.DebugInspectorManager.TweakManagerFromInspector$$get_TelemetryAnnotation
ENTRY_POINT: 04c06894
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


void Meta_XR_ImmersiveDebugger_DebugInspectorManager_TweakManagerFromInspector__get_TelemetryAnnotation
               (undefined8 param_1)

{
  bool in_ZR;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 in_stack_00000028;
  
  if (!in_ZR) {
    unaff_x22 = param_1;
  }
  uStack0000000000000010 = 0;
  uStack0000000000000018 = 0;
  FUN_03c87038(&stack0x00000010,unaff_x22);
  *(undefined8 *)(unaff_x21 + 0x58) = uStack0000000000000018;
  *(undefined8 *)(unaff_x21 + 0x50) = uStack0000000000000010;
  in_stack_00000028 = FUN_04f13a54();
  FUN_04f47984(&stack0x00000028,0);
  FUN_03c87038();
  *(undefined8 *)(unaff_x21 + 0x38) = 0;
  *(undefined8 *)(unaff_x21 + 0x30) = 0;
  FUN_04c06928();
  return;
}


