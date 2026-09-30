/*
FUNCTION_NAME: OVRPlugin$$IsWideMotionModeHandPosesEnabled
ENTRY_POINT: 05d7f22c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 71
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_possible_biometrics_hits_2
*/


uint OVRPlugin__IsWideMotionModeHandPosesEnabled(void)

{
  uint uVar1;
  long lVar2;
  uint *unaff_x19;
  uint unaff_w20;
  long *unaff_x21;
  long unaff_x22;
  
  thunk_FUN_032e1da0(PTR_DAT_072ad8c8);
  *(undefined1 *)(unaff_x22 + 0x805) = 1;
  lVar2 = *unaff_x21;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar2 = *unaff_x21;
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x10);
  if (lVar2 != 0) {
    if (unaff_w20 < *(uint *)(lVar2 + 0x18)) {
      uVar1 = *(uint *)(lVar2 + (long)(int)unaff_w20 * 4 + 0x20);
      *unaff_x19 = uVar1;
      return ~uVar1 >> 0x1f;
    }
                    /* WARNING: Subroutine does not return */
    Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


