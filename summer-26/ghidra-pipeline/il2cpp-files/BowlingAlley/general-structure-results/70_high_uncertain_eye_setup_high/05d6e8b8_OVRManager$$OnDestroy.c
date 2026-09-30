/*
FUNCTION_NAME: OVRManager$$OnDestroy
ENTRY_POINT: 05d6e8b8
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__OnDestroy(void)

{
  uint uVar1;
  ulong uVar2;
  long in_x10;
  long lVar3;
  
  if (in_x10 != 0) {
    uVar1 = *(uint *)(in_x10 + 0x18);
    uVar2 = 0;
    while( true ) {
      if (uVar1 <= uVar2) {
                    /* WARNING: Subroutine does not return */
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
      }
      lVar3 = *(long *)(in_x10 + 0x20 + uVar2 * 8);
      if (lVar3 == 0) break;
      uVar2 = uVar2 + 1;
      *(undefined1 *)(lVar3 + 0x1d) = 0;
      if (uVar2 == 5) {
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


