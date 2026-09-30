/*
FUNCTION_NAME: Meta.XR.Editor.FalcoOVRTelemetry.OVRFalcoTelemetry$$.cctor
ENTRY_POINT: 060a1b70
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 88
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


void Meta_XR_Editor_FalcoOVRTelemetry_OVRFalcoTelemetry___cctor(long param_1)

{
  long unaff_x19;
  undefined1 in_stack_00000000 [16];
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined8 in_stack_00000018;
  
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  FUN_071ce770(&stack0x00000000 + 4,0);
  *(ulong *)(unaff_x19 + 0xb8) = CONCAT44(uStack0000000000000010,in_stack_00000000._12_4_);
  *(undefined8 *)(unaff_x19 + 0xb0) = in_stack_00000000._4_8_;
  *(undefined8 *)(unaff_x19 + 0xc4) = in_stack_00000018;
  *(ulong *)(unaff_x19 + 0xbc) = CONCAT44(uStack0000000000000014,uStack0000000000000010);
  if (*(char *)(unaff_x19 + 0x110) == '\0') {
    if (*(long *)(unaff_x19 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    *(undefined1 *)(unaff_x19 + 0x111) = *(undefined1 *)(*(long *)(unaff_x19 + 0x20) + 0x7c);
  }
  *(undefined1 *)(unaff_x19 + 0x110) = 0;
  return;
}


