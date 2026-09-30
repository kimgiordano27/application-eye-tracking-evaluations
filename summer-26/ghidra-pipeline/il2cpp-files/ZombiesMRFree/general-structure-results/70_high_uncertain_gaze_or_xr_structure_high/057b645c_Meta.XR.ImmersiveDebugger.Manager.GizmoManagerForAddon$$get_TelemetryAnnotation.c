/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.GizmoManagerForAddon$$get_TelemetryAnnotation
ENTRY_POINT: 057b645c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_Manager_GizmoManagerForAddon__get_TelemetryAnnotation(void)

{
  undefined4 uVar1;
  long unaff_x19;
  long unaff_x20;
  
  *(long *)(unaff_x20 + 0x20) = unaff_x19;
  thunk_FUN_03048534();
  if (unaff_x19 != 0) {
    uVar1 = *(undefined4 *)(unaff_x19 + 0x18);
    *(undefined4 *)(unaff_x20 + 0x14) = uVar1;
    *(undefined4 *)(unaff_x20 + 0x18) = uVar1;
    *(undefined4 *)(unaff_x20 + 0x10) = uVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


