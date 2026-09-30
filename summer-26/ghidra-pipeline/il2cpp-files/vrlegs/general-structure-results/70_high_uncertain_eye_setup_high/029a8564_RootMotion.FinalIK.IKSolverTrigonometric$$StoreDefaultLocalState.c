/*
FUNCTION_NAME: RootMotion.FinalIK.IKSolverTrigonometric$$StoreDefaultLocalState
ENTRY_POINT: 029a8564
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x029a8624) */

undefined1  [16] RootMotion_FinalIK_IKSolverTrigonometric__StoreDefaultLocalState(void)

{
  uint uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  long unaff_x20;
  undefined1 auVar6 [16];
  undefined8 uVar7;
  undefined8 in_stack_00000008;
  
  FUN_029bb83c();
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x18);
  if (uVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  if (uVar1 == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  if (uVar1 < 3) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  if (uVar1 == 3) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  if (uVar1 < 8) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  uVar2 = *(undefined1 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined1 *)(unaff_x20 + 0x21);
  uVar4 = *(undefined1 *)(unaff_x20 + 0x23);
  *(undefined1 *)(unaff_x20 + 0x20) = *(undefined1 *)(unaff_x20 + 0x27);
  *(undefined1 *)(unaff_x20 + 0x21) = *(undefined1 *)(unaff_x20 + 0x26);
  uVar5 = *(undefined1 *)(unaff_x20 + 0x22);
  *(undefined1 *)(unaff_x20 + 0x22) = *(undefined1 *)(unaff_x20 + 0x25);
  *(undefined1 *)(unaff_x20 + 0x23) = *(undefined1 *)(unaff_x20 + 0x24);
  *(undefined1 *)(unaff_x20 + 0x24) = uVar4;
  *(undefined1 *)(unaff_x20 + 0x25) = uVar5;
  *(undefined1 *)(unaff_x20 + 0x26) = uVar3;
  *(undefined1 *)(unaff_x20 + 0x27) = uVar2;
  auVar6 = FUN_026b53b4();
  uVar7 = auVar6._8_8_;
  if (in_stack_00000008._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  auVar6._8_8_ = uVar7;
  return auVar6;
}


