/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Style$$.ctor
ENTRY_POINT: 07294ecc
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_11;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x0729509c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Style___ctor(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  long unaff_x19;
  long unaff_x20;
  long lVar6;
  uint uVar7;
  char cStack000000000000001c;
  undefined8 in_stack_00000028;
  
  if (param_1 == 0) {
    uVar7 = 0;
    uVar1 = 0;
    if (unaff_x20 < 0) goto LAB_07294f18;
  }
  else {
    uVar1 = FUN_072a8904();
    if (unaff_x20 < (long)(ulong)uVar1) {
      uVar7 = 0;
      goto LAB_07294f18;
    }
  }
  uVar7 = uVar1;
  unaff_x20 = unaff_x20 - (ulong)uVar7;
LAB_07294f18:
  in_stack_00000028 = *(undefined8 *)(unaff_x19 + 0x30);
  cStack000000000000001c = '\0';
  FUN_076e7928(in_stack_00000028,&stack0x0000001c,0);
  if (*(long *)(unaff_x19 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar2 = FUN_0729517c(*(long *)(unaff_x19 + 0x20),unaff_x20);
  if (lVar2 == -1) {
    thunk_FUN_040dedf8(PTR_DAT_09288c08);
    uVar3 = thunk_FUN_040b4efc();
    uVar4 = thunk_FUN_040dedf8(PTR_DAT_092a4bb8);
    FUN_075d6138(uVar3,uVar4,0);
    uVar4 = thunk_FUN_040dedf8(PTR_DAT_092c21a8);
                    /* WARNING: Subroutine does not return */
    FUN_040776f4(uVar3,uVar4);
  }
  if (*(long *)(unaff_x19 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  FUN_072952f0();
  if (uVar7 != 0) {
    if (*(long *)(unaff_x19 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar6 = *(long *)(unaff_x19 + 0x28);
    uVar3 = FUN_07295340();
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830(uVar3,uVar3);
    }
    FUN_072954ac(lVar6,uVar3,*(undefined8 *)(unaff_x19 + 0x40),0);
    lVar2 = lVar2 + (ulong)uVar7;
  }
  lVar6 = *(long *)(unaff_x19 + 0x20);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  if (*(long *)(lVar6 + 0x28) == 0) {
    if (*(long *)(lVar6 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    iVar5 = 1;
    if (((*(uint *)(*(long *)(lVar6 + 0x30) + 0x3c) ^ 0xffffffff) & 0xc0) != 0) {
      iVar5 = 2;
    }
  }
  else {
    iVar5 = *(int *)(*(long *)(lVar6 + 0x28) + 0x18);
  }
  *(undefined1 *)(unaff_x19 + 0x19) = 0;
  *(undefined8 *)(unaff_x19 + 0x48) = 0;
  *(long *)(unaff_x19 + 0x38) = lVar2 * iVar5 * 4;
  if (cStack000000000000001c != '\0') {
    thunk_FUN_0408541c(in_stack_00000028,0);
  }
  return;
}


