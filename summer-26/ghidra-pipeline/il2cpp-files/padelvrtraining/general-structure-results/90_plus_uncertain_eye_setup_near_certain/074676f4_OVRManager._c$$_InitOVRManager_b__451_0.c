/*
FUNCTION_NAME: OVRManager.<>c$$<InitOVRManager>b__451_0
ENTRY_POINT: 074676f4
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_1;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_4
*/


bool OVRManager_<>c__<InitOVRManager>b__451_0(void)

{
  undefined1 in_w8;
  long unaff_x19;
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + 0x864) = in_w8;
  if (*(long *)(unaff_x19 + 0x18) != 0) {
    return *(long *)(unaff_x19 + 0x10) != *(long *)(*(long *)(unaff_x19 + 0x18) + 0xd0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


