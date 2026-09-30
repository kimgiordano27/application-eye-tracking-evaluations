/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.LayoutStyle$$SetWidth
ENTRY_POINT: 07294f78
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x0729509c) */

void Meta_XR_ImmersiveDebugger_UserInterface_Generic_LayoutStyle__SetWidth(void)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  undefined8 *in_stack_00000010;
  undefined8 in_stack_00000018;
  
  uVar1 = FUN_07295340();
  if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830(uVar1,uVar1);
  }
  FUN_072954ac();
  lVar3 = *(long *)(unaff_x19 + 0x20);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  if (*(long *)(lVar3 + 0x28) == 0) {
    if (*(long *)(lVar3 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    iVar2 = 1;
    if (((*(uint *)(*(long *)(lVar3 + 0x30) + 0x3c) ^ 0xffffffff) & 0xc0) != 0) {
      iVar2 = 2;
    }
  }
  else {
    iVar2 = *(int *)(*(long *)(lVar3 + 0x28) + 0x18);
  }
  *(undefined1 *)(unaff_x19 + 0x19) = 0;
  *(undefined8 *)(unaff_x19 + 0x48) = 0;
  *(ulong *)(unaff_x19 + 0x38) = (unaff_x20 + (unaff_x22 & 0xffffffff)) * (long)iVar2 * 4;
  if (in_stack_00000018._4_1_ != '\0') {
    thunk_FUN_0408541c(*in_stack_00000010,0);
  }
  return;
}


