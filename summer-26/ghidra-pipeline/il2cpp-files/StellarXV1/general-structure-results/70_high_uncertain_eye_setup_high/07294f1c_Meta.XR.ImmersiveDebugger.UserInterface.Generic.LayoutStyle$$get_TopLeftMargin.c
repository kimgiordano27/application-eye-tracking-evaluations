/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.LayoutStyle$$get_TopLeftMargin
ENTRY_POINT: 07294f1c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x0729509c) */

void Meta_XR_ImmersiveDebugger_UserInterface_Generic_LayoutStyle__get_TopLeftMargin
               (undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  long unaff_x19;
  long lVar5;
  uint unaff_w22;
  undefined8 uStack0000000000000000;
  undefined1 *puStack0000000000000008;
  undefined8 *puStack0000000000000010;
  char cStack000000000000001c;
  undefined8 uStack0000000000000028;
  
  puStack0000000000000008 = &stack0x0000001c;
  cStack000000000000001c = '\0';
  uStack0000000000000000 = 0;
  puStack0000000000000010 = &stack0x00000028;
  uStack0000000000000028 = param_1;
  FUN_076e7928(param_1,&stack0x0000001c,0);
  if (*(long *)(unaff_x19 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar1 = FUN_0729517c();
  if (lVar1 == -1) {
    thunk_FUN_040dedf8(PTR_DAT_09288c08);
    uVar2 = thunk_FUN_040b4efc();
    uVar3 = thunk_FUN_040dedf8(PTR_DAT_092a4bb8);
    FUN_075d6138(uVar2,uVar3,0);
    uVar3 = thunk_FUN_040dedf8(PTR_DAT_092c21a8);
                    /* WARNING: Subroutine does not return */
    FUN_040776f4(uVar2,uVar3);
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
    lVar5 = *(long *)(unaff_x19 + 0x28);
    uVar2 = FUN_07295340();
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830(uVar2,uVar2);
    }
    FUN_072954ac(lVar5,uVar2,*(undefined8 *)(unaff_x19 + 0x40),0);
    lVar1 = lVar1 + (ulong)unaff_w22;
  }
  lVar5 = *(long *)(unaff_x19 + 0x20);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  if (*(long *)(lVar5 + 0x28) == 0) {
    if (*(long *)(lVar5 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    iVar4 = 1;
    if (((*(uint *)(*(long *)(lVar5 + 0x30) + 0x3c) ^ 0xffffffff) & 0xc0) != 0) {
      iVar4 = 2;
    }
  }
  else {
    iVar4 = *(int *)(*(long *)(lVar5 + 0x28) + 0x18);
  }
  *(undefined1 *)(unaff_x19 + 0x19) = 0;
  *(undefined8 *)(unaff_x19 + 0x48) = 0;
  *(long *)(unaff_x19 + 0x38) = lVar1 * iVar4 * 4;
  if (cStack000000000000001c != '\0') {
    thunk_FUN_0408541c(*puStack0000000000000010,0);
  }
  return;
}


