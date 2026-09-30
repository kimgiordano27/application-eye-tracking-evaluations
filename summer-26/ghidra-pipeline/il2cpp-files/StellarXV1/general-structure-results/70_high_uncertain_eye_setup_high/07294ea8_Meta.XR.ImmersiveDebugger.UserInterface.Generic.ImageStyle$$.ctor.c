/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ImageStyle$$.ctor
ENTRY_POINT: 07294ea8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_13;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x0729509c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void Meta_XR_ImmersiveDebugger_UserInterface_Generic_ImageStyle___ctor
               (long param_1,long param_2,ulong param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  int in_w9;
  long lVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  char cStack000000000000001c;
  undefined8 in_stack_00000028;
  
  if (in_w9 == 0) {
    thunk_FUN_040dedf8(PTR_DAT_0929cb88);
    uVar3 = thunk_FUN_040b4efc();
    uVar2 = thunk_FUN_040dedf8(PTR_DAT_092c21a0);
    FUN_07679464(uVar3,uVar2,0);
LAB_07295084:
    uVar2 = thunk_FUN_040dedf8(PTR_DAT_092c21a8);
                    /* WARNING: Subroutine does not return */
    FUN_040776f4(uVar3,uVar2);
  }
  if ((long)param_3 < 0) {
    thunk_FUN_040dedf8(PTR_DAT_09288c08);
    uVar3 = thunk_FUN_040b4efc();
    uVar2 = thunk_FUN_040dedf8(PTR_DAT_092a4bb8);
    FUN_075d6138(uVar3,uVar2,0);
    goto LAB_07295084;
  }
  if (*(long *)(param_1 + 0x28) == 0) {
    if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uVar6 = (param_3 >> 2) >>
            (((*(uint *)(*(long *)(param_1 + 0x30) + 0x3c) ^ 0xffffffff) & 0xc0) != 0);
LAB_07294efc:
    uVar1 = FUN_072a8904();
    if ((long)uVar6 < (long)(ulong)uVar1) {
      uVar8 = 0;
      goto LAB_07294f18;
    }
  }
  else {
    lVar5 = (long)*(int *)(*(long *)(param_1 + 0x28) + 0x18);
    uVar6 = 0;
    if (lVar5 != 0) {
      uVar6 = (long)(param_3 >> 2) / lVar5;
    }
    if (*(long *)(param_1 + 0x30) != 0) goto LAB_07294efc;
    uVar8 = 0;
    uVar1 = 0;
    if ((long)uVar6 < 0) goto LAB_07294f18;
  }
  uVar8 = uVar1;
  uVar6 = uVar6 - uVar8;
LAB_07294f18:
  in_stack_00000028 = *(undefined8 *)(param_2 + 0x30);
  cStack000000000000001c = '\0';
  FUN_076e7928(in_stack_00000028,&stack0x0000001c,0);
  if (*(long *)(param_2 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar5 = FUN_0729517c(*(long *)(param_2 + 0x20),uVar6);
  if (lVar5 == -1) {
    thunk_FUN_040dedf8(PTR_DAT_09288c08);
    uVar2 = thunk_FUN_040b4efc();
    uVar3 = thunk_FUN_040dedf8(PTR_DAT_092a4bb8);
    FUN_075d6138(uVar2,uVar3,0);
    uVar3 = thunk_FUN_040dedf8(PTR_DAT_092c21a8);
                    /* WARNING: Subroutine does not return */
    FUN_040776f4(uVar2,uVar3);
  }
  if (*(long *)(param_2 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  FUN_072952f0();
  if (uVar8 != 0) {
    if (*(long *)(param_2 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar7 = *(long *)(param_2 + 0x28);
    uVar2 = FUN_07295340();
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830(uVar2,uVar2);
    }
    FUN_072954ac(lVar7,uVar2,*(undefined8 *)(param_2 + 0x40),0);
    lVar5 = lVar5 + (ulong)uVar8;
  }
  lVar7 = *(long *)(param_2 + 0x20);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  if (*(long *)(lVar7 + 0x28) == 0) {
    if (*(long *)(lVar7 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    iVar4 = 1;
    if (((*(uint *)(*(long *)(lVar7 + 0x30) + 0x3c) ^ 0xffffffff) & 0xc0) != 0) {
      iVar4 = 2;
    }
  }
  else {
    iVar4 = *(int *)(*(long *)(lVar7 + 0x28) + 0x18);
  }
  *(undefined1 *)(param_2 + 0x19) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(long *)(param_2 + 0x38) = lVar5 * iVar4 * 4;
  if (cStack000000000000001c != '\0') {
    thunk_FUN_0408541c(in_stack_00000028,0);
  }
  return;
}


