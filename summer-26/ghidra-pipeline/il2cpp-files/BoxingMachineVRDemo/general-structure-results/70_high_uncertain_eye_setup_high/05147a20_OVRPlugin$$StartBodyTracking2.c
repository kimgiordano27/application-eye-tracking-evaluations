/*
FUNCTION_NAME: OVRPlugin$$StartBodyTracking2
ENTRY_POINT: 05147a20
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__StartBodyTracking2(void)

{
  long unaff_x19;
  long *unaff_x22;
  
  if (*unaff_x22 != 0) {
    *(undefined8 *)(unaff_x19 + 0x68) = *(undefined8 *)(*unaff_x22 + 0x10);
    thunk_FUN_02dd37b4();
    FUN_050d1e40();
    FUN_05098d24();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


