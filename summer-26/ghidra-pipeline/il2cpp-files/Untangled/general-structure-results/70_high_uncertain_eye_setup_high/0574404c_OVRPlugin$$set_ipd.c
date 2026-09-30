/*
FUNCTION_NAME: OVRPlugin$$set_ipd
ENTRY_POINT: 0574404c
PROGRAM: Untangled-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__set_ipd(void)

{
  char in_NG;
  char in_OV;
  long lVar1;
  undefined8 uVar2;
  uint in_w8;
  undefined8 unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  uint unaff_w22;
  long in_stack_00000008;
  
  while (in_NG != in_OV) {
    if (in_w8 <= unaff_w22) goto LAB_057441b4;
    if (*(long *)(unaff_x21 + (long)(int)unaff_w22 * 8 + 0x20) == 0) break;
    unaff_w22 = unaff_w22 + 1;
    in_OV = SBORROW4(unaff_w22,in_w8);
    in_NG = (int)(unaff_w22 - in_w8) < 0;
  }
  if (unaff_w22 == in_w8) {
    FUN_037364b4(&stack0x00000008,unaff_w22 << 1,*(undefined8 *)PTR_DAT_06d590d0);
    *unaff_x20 = in_stack_00000008;
    thunk_FUN_02f411dc();
    unaff_x21 = in_stack_00000008;
    if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
  }
  lVar1 = thunk_FUN_02ef170c();
  if (lVar1 == 0) {
    uVar2 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
    FUN_02f07f94(uVar2,0);
  }
  if (unaff_w22 < *(uint *)(unaff_x21 + 0x18)) {
    *(undefined8 *)(unaff_x21 + (long)(int)unaff_w22 * 8 + 0x20) = unaff_x19;
    thunk_FUN_02f411dc();
    return;
  }
LAB_057441b4:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c8();
}


