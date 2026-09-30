/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry$$.cctor
ENTRY_POINT: 06d7c7bc
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


void Meta_XR_ImmersiveDebugger_Telemetry___cctor(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x19 + 0x38) = param_1;
  thunk_FUN_03d233cc((undefined8 *)(unaff_x19 + 0x38),param_1);
  if (4 < *(uint *)(unaff_x19 + 0x18)) {
    *(undefined8 *)(unaff_x20 + 0x40) = *(undefined8 *)PTR_DAT_08e8f418;
    thunk_FUN_03d233cc();
    uVar1 = FUN_06f74f38();
    if (*(int *)(*(long *)PTR_DAT_08e69670 + 0xe0) == 0) {
      thunk_FUN_03cd7500(*(long *)PTR_DAT_08e69670);
    }
    FUN_085a437c(uVar1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


