/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.DebugInspectorManager.GizmoManagerFromInspector$$get_TelemetryAnnotation
ENTRY_POINT: 04c073f4
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


void Meta_XR_ImmersiveDebugger_DebugInspectorManager_GizmoManagerFromInspector__get_TelemetryAnnotation
               (void)

{
  undefined8 uVar1;
  long *unaff_x19;
  long *unaff_x20;
  undefined8 in_stack_00000008;
  
  FUN_04f0f9c8();
  **(undefined8 **)(*unaff_x19 + 0xb8) = in_stack_00000008;
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  uVar1 = FUN_04f47dac(0x404e000000000000,0);
  *(undefined8 *)(*(long *)(*unaff_x19 + 0xb8) + 8) = uVar1;
  uVar1 = FUN_04f47dac(0x4014000000000000,0);
  *(undefined8 *)(*(long *)(*unaff_x19 + 0xb8) + 0x10) = uVar1;
  return;
}


