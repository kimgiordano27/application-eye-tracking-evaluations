/*
FUNCTION_NAME: OVRManager$$FixedUpdate
ENTRY_POINT: 05d6e868
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__FixedUpdate(void)

{
  long lVar1;
  long unaff_x20;
  ulong unaff_x21;
  
  while (lVar1 = *(long *)(unaff_x20 + 0x10), lVar1 != 0) {
    if (*(uint *)(lVar1 + 0x18) <= unaff_x21) {
                    /* WARNING: Subroutine does not return */
      Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
    }
    if (*(long *)(lVar1 + unaff_x21 * 8 + 0x20) == 0) break;
    FUN_05d6e8f8();
    unaff_x21 = unaff_x21 + 1;
    if (unaff_x21 == 5) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


