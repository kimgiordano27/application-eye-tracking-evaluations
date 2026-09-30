/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.WatchManager$$get_TelemetryAnnotation
ENTRY_POINT: 057b7460
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


void Meta_XR_ImmersiveDebugger_Manager_WatchManager__get_TelemetryAnnotation(long param_1)

{
  uint uVar1;
  long lVar2;
  
  if (*(int *)(param_1 + 0x14) != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    uVar1 = *(int *)(param_1 + 0x14) - 1;
    *(uint *)(param_1 + 0x14) = uVar1;
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    if (*(uint *)(lVar2 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    lVar2 = lVar2 + (long)(int)uVar1 * 0xc;
    *(undefined8 *)(lVar2 + 0x20) = 0;
    *(undefined4 *)(lVar2 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x14);
  }
  return;
}


