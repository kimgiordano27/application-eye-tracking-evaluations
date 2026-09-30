/*
FUNCTION_NAME: OVRManager$$add_VrFocusAcquired
ENTRY_POINT: 05d6168c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__add_VrFocusAcquired(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  uint unaff_w19;
  long unaff_x21;
  ulong uVar2;
  uint uStack0000000000000008;
  int iStack000000000000000c;
  
  FUN_05d7a214(param_1,param_2,0);
  uVar2 = 0;
  while (lVar1 = FUN_05d4903c(), lVar1 != 0) {
    if (*(uint *)(lVar1 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
      Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
    }
    iStack000000000000000c = *(int *)(lVar1 + uVar2 * 4 + 0x20);
    uStack0000000000000008 = (uint)uVar2;
    if (iStack000000000000000c == 1 &&
        (1 << (ulong)(uStack0000000000000008 & 0x1f) & unaff_w19) != 0) {
      iStack000000000000000c = 2;
    }
    if (*(long *)(unaff_x21 + 0x48) == 0) break;
    FUN_05d7a6f8(*(long *)(unaff_x21 + 0x48),&stack0x00000008,(long)&stack0x00000008 + 4,0,0);
    uVar2 = uVar2 + 1;
    if (uVar2 == 5) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


