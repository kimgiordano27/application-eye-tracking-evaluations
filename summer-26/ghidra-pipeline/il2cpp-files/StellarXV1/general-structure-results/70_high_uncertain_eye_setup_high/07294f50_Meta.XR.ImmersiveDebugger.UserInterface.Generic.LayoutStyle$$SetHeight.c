/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.LayoutStyle$$SetHeight
ENTRY_POINT: 07294f50
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x0729509c) */

void Meta_XR_ImmersiveDebugger_UserInterface_Generic_LayoutStyle__SetHeight(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  long unaff_x19;
  long lVar4;
  uint unaff_w22;
  undefined8 *in_stack_00000010;
  undefined8 in_stack_00000018;
  
  if (param_1 == -1) {
    thunk_FUN_040dedf8(PTR_DAT_09288c08);
    uVar1 = thunk_FUN_040b4efc();
    uVar2 = thunk_FUN_040dedf8(PTR_DAT_092a4bb8);
    FUN_075d6138(uVar1,uVar2,0);
    uVar2 = thunk_FUN_040dedf8(PTR_DAT_092c21a8);
                    /* WARNING: Subroutine does not return */
    FUN_040776f4(uVar1,uVar2);
  }
  if (*(long *)(unaff_x19 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  FUN_072952f0();
  if (unaff_w22 != 0) {
    if (*(long *)(unaff_x19 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar4 = *(long *)(unaff_x19 + 0x28);
    uVar1 = FUN_07295340();
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830(uVar1,uVar1);
    }
    FUN_072954ac(lVar4,uVar1,*(undefined8 *)(unaff_x19 + 0x40),0);
    param_1 = param_1 + (ulong)unaff_w22;
  }
  lVar4 = *(long *)(unaff_x19 + 0x20);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  if (*(long *)(lVar4 + 0x28) == 0) {
    if (*(long *)(lVar4 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    iVar3 = 1;
    if (((*(uint *)(*(long *)(lVar4 + 0x30) + 0x3c) ^ 0xffffffff) & 0xc0) != 0) {
      iVar3 = 2;
    }
  }
  else {
    iVar3 = *(int *)(*(long *)(lVar4 + 0x28) + 0x18);
  }
  *(undefined1 *)(unaff_x19 + 0x19) = 0;
  *(undefined8 *)(unaff_x19 + 0x48) = 0;
  *(long *)(unaff_x19 + 0x38) = param_1 * iVar3 * 4;
  if (in_stack_00000018._4_1_ != '\0') {
    thunk_FUN_0408541c(*in_stack_00000010,0);
  }
  return;
}


