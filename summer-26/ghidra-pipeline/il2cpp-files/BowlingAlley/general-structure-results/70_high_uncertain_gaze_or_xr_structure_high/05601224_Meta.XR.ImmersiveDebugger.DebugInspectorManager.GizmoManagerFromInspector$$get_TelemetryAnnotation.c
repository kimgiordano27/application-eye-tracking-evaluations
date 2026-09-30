/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.DebugInspectorManager.GizmoManagerFromInspector$$get_TelemetryAnnotation
ENTRY_POINT: 05601224
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


bool Meta_XR_ImmersiveDebugger_DebugInspectorManager_GizmoManagerFromInspector__get_TelemetryAnnotation
               (long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0xc0) + 0x28);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_032934b8();
  }
  if (param_3 != (long *)0x0) {
    if (*(byte *)(lVar1 + 0x130) <= *(byte *)(*param_3 + 0x130)) {
      return *(long *)(*(long *)(*param_3 + 200) + (ulong)*(byte *)(lVar1 + 0x130) * 8 + -8) ==
             lVar1;
    }
  }
  return false;
}


