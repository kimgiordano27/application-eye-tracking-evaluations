/*
FUNCTION_NAME: OVRManager$$LateUpdate
ENTRY_POINT: 01d71cf4
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__LateUpdate(void)

{
  byte bVar1;
  int in_w9;
  long *unaff_x19;
  
  if (in_w9 == 0) {
    thunk_FUN_01022c14();
  }
  FUN_01d5e86c();
  bVar1 = *(byte *)(*(long *)PTR_DAT_0234c598 + 0x130);
  if ((bVar1 <= *(byte *)(*unaff_x19 + 0x130)) &&
     (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_0234c598))
  {
    FUN_01d7172c();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fdc8d0();
}


