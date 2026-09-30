/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.ActionManager$$get_TelemetryAnnotation
ENTRY_POINT: 06d99b4c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_Manager_ActionManager__get_TelemetryAnnotation(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  double dVar1;
  float unaff_s8;
  float unaff_s9;
  
  while( true ) {
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    dVar1 = (double)thunk_FUN_03cee0d4(0x4000000000000000,(double)(unaff_s9 / unaff_s8),0);
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    if (*(uint *)(unaff_x21 + 0x18) <= unaff_x22) break;
    *(float *)(unaff_x24 + unaff_x22 * 4) = (float)dVar1;
    unaff_x22 = unaff_x22 + 1;
    if ((long)(int)*(uint *)(unaff_x20 + 0x18) <= (long)unaff_x22) {
      *(long *)(unaff_x19 + 0x28) = unaff_x21;
      thunk_FUN_03d233cc((long *)(unaff_x19 + 0x28));
      return;
    }
    if (*(uint *)(unaff_x20 + 0x18) <= unaff_x22) break;
    param_1 = *unaff_x25;
    unaff_s9 = *(float *)(unaff_x23 + unaff_x22 * 4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


