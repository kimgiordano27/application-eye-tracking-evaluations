/*
FUNCTION_NAME: OVRPlugin$$GetBodyState
ENTRY_POINT: 01d88740
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetBodyState(long *param_1)

{
  byte bVar1;
  long lVar2;
  long *unaff_x22;
  
  bVar1 = *(byte *)(*unaff_x22 + 0x130);
  if ((bVar1 <= *(byte *)(*param_1 + 0x130)) &&
     (*(long *)(*(long *)(*param_1 + 200) + (ulong)bVar1 * 8 + -8) == *unaff_x22)) {
    lVar2 = FUN_01d86de4();
    if (lVar2 != 0) {
      FUN_01cd649c(lVar2,0,0,1,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fdc8d0();
}


