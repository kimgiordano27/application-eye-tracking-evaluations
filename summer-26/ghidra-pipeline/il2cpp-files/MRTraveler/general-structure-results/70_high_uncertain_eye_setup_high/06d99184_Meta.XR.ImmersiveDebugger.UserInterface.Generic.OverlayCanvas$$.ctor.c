/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.OverlayCanvas$$.ctor
ENTRY_POINT: 06d99184
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x06d992b8) */

void Meta_XR_ImmersiveDebugger_UserInterface_Generic_OverlayCanvas___ctor(long param_1)

{
  undefined8 uVar1;
  int iVar2;
  long unaff_x20;
  long unaff_x21;
  long lVar3;
  uint unaff_w23;
  undefined8 in_stack_00000008;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  FUN_06d9953c();
  if (unaff_w23 != 0) {
    if (*(long *)(unaff_x20 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar3 = *(long *)(unaff_x20 + 0x28);
    uVar1 = FUN_06d9958c();
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30(uVar1,uVar1);
    }
    FUN_06d996fc(lVar3,uVar1,*(undefined8 *)(unaff_x20 + 0x40),0);
    unaff_x21 = unaff_x21 + (ulong)unaff_w23;
  }
  lVar3 = *(long *)(unaff_x20 + 0x20);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  if (*(long *)(lVar3 + 0x28) == 0) {
    if (*(long *)(lVar3 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    iVar2 = 1;
    if (((*(uint *)(*(long *)(lVar3 + 0x30) + 0x3c) ^ 0xffffffff) & 0xc0) != 0) {
      iVar2 = 2;
    }
  }
  else {
    iVar2 = *(int *)(*(long *)(lVar3 + 0x28) + 0x18);
  }
  *(undefined1 *)(unaff_x20 + 0x19) = 0;
  *(long *)(unaff_x20 + 0x38) = unaff_x21 * iVar2 * 4;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  if (in_stack_00000008._4_1_ != '\0') {
    thunk_FUN_03cdf404();
  }
  return;
}


