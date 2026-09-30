/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_SetMrcInputVideoBufferType
ENTRY_POINT: 01daae14
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_38_0__ovrp_Media_SetMrcInputVideoBufferType(long param_1)

{
  long unaff_x19;
  long *plVar1;
  long unaff_x20;
  
  if (param_1 == 0) {
    *(long *)(unaff_x19 + 0x30) = unaff_x20;
    thunk_FUN_0106e12c();
    *(long *)(unaff_x19 + 0x38) = unaff_x20;
LAB_01daae58:
    thunk_FUN_0106e12c(unaff_x19 + 0x38);
    return;
  }
  plVar1 = (long *)(unaff_x19 + 0x38);
  if (*plVar1 != 0) {
    *(long *)(*plVar1 + 0x60) = unaff_x20;
    thunk_FUN_0106e12c();
    if (unaff_x20 != 0) {
      *(long *)(unaff_x20 + 0x58) = *plVar1;
      thunk_FUN_0106e12c();
      *plVar1 = unaff_x20;
      goto LAB_01daae58;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


