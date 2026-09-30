/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.DebugInspectorManager.TweakManagerFromInspector$$get_TelemetryAnnotation
ENTRY_POINT: 031427e8
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_DebugInspectorManager_TweakManagerFromInspector__get_TelemetryAnnotation
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long in_x9;
  long in_x10;
  int *piVar2;
  long unaff_x20;
  
  piVar2 = (int *)(in_x10 + 8);
  do {
    if (*(long *)(piVar2 + -2) == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)*piVar2 * 0x10 + 0x138);
      goto code_r0x03142820;
    }
    in_x9 = in_x9 + -1;
    piVar2 = piVar2 + 4;
  } while (in_x9 != 0);
  puVar1 = (undefined8 *)FUN_01dde8fc();
code_r0x03142820:
  (*(code *)*puVar1)();
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01e7f0d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db68();
}


