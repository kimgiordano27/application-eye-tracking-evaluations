/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.AssemblyParser.<>c$$<LoadAssembliesAsync>b__19_1
ENTRY_POINT: 04a3030c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_12;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_ImmersiveDebugger_Utils_AssemblyParser_<>c__<LoadAssembliesAsync>b__19_1
          (long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulong in_x9;
  undefined8 uVar8;
  int *in_x10;
  long lVar9;
  int *piVar10;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  undefined8 unaff_x22;
  ulong unaff_x23;
  long *unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  ulong unaff_x27;
  undefined8 unaff_x28;
  int unaff_w29;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  
code_r0x04a3030c:
  if (!(bool)in_ZR) goto LAB_04a302f8;
LAB_04a30310:
  puVar2 = (undefined8 *)FUN_02b7654c(unaff_x24,param_3,0);
LAB_04a3032c:
  uVar3 = (*(code *)*puVar2)(unaff_x24,unaff_x22,unaff_x26);
  if ((uVar3 & 1) != 0) {
    return 0;
  }
LAB_04a3035c:
  uVar5 = (uint)*(undefined8 *)(in_stack_00000018 + 0x18);
  if ((int)uVar5 <= unaff_w29) {
    thunk_FUN_02ba3594(PTR_DAT_0631cb60);
    uVar8 = thunk_FUN_02b79644();
    uVar4 = thunk_FUN_02ba3594(PTR_DAT_06322b90);
    FUN_04d7b3f4(uVar8,uVar4,0);
                    /* WARNING: Subroutine does not return */
    FUN_02b3c988(uVar8,in_stack_00000010);
  }
  if ((uint)unaff_x27 < uVar5) {
    unaff_w29 = unaff_w29 + 1;
    uVar7 = *(uint *)(unaff_x20 + (unaff_x23 & 0xffffffff) * 0x18 + 4);
    unaff_x23 = (ulong)uVar7;
    if (-1 < (int)uVar7) {
      if (uVar5 <= uVar7) goto LAB_04a304bc;
      unaff_x27 = unaff_x23;
      if (*(int *)(unaff_x20 + unaff_x23 * 0x18) == unaff_w21) goto code_r0x04a302a8;
      goto LAB_04a3035c;
    }
    uVar5 = *(uint *)(unaff_x19 + 0x28);
    if ((int)uVar5 < 0) {
      if (in_stack_00000018 == 0) goto LAB_04a304fc;
      uVar5 = *(uint *)(unaff_x19 + 0x24);
      uVar7 = *(uint *)(in_stack_00000018 + 0x18);
      if (uVar5 == uVar7) {
        FUN_04a2ffd4(unaff_x19,
                     *(undefined8 *)(*(long *)(*(long *)(in_stack_00000010 + 0x20) + 0xc0) + 0x180))
        ;
        if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_04a304fc;
        uVar5 = *(uint *)(unaff_x19 + 0x24);
        in_stack_00000018 = *(long *)(unaff_x19 + 0x18);
        uVar8 = *(undefined8 *)(*(long *)(unaff_x19 + 0x10) + 0x18);
        *(uint *)(unaff_x19 + 0x24) = uVar5 + 1;
        if (in_stack_00000018 == 0) goto LAB_04a304fc;
        iVar1 = 0;
        iVar6 = (int)uVar8;
        if (iVar6 != 0) {
          iVar1 = unaff_w21 / iVar6;
        }
        in_stack_00000008._4_4_ = unaff_w21 - iVar1 * iVar6;
        uVar7 = *(uint *)(in_stack_00000018 + 0x18);
      }
      else {
        *(uint *)(unaff_x19 + 0x24) = uVar5 + 1;
      }
    }
    else {
      if (in_stack_00000018 == 0) goto LAB_04a304fc;
      uVar7 = *(uint *)(in_stack_00000018 + 0x18);
      if (uVar7 <= uVar5) goto LAB_04a304bc;
      *(undefined4 *)(unaff_x19 + 0x28) =
           *(undefined4 *)(in_stack_00000018 + (ulong)uVar5 * 0x18 + 0x24);
    }
    if (uVar7 <= uVar5) goto LAB_04a304bc;
    piVar10 = (int *)(in_stack_00000018 + 0x20 + (long)(int)uVar5 * 0x18);
    *(undefined8 *)(piVar10 + 2) = unaff_x25;
    *(undefined8 *)(piVar10 + 4) = unaff_x28;
    lVar9 = *(long *)(unaff_x19 + 0x10);
    *piVar10 = unaff_w21;
    if (lVar9 == 0) goto LAB_04a304fc;
    if ((in_stack_00000008._4_4_ < *(uint *)(lVar9 + 0x18)) &&
       (uVar5 < *(uint *)(in_stack_00000018 + 0x18))) {
      lVar9 = lVar9 + (ulong)in_stack_00000008._4_4_ * 4;
      *(int *)(in_stack_00000018 + 0x20 + (long)(int)uVar5 * 0x18 + 4) = *(int *)(lVar9 + 0x20) + -1
      ;
      *(uint *)(lVar9 + 0x20) = uVar5 + 1;
      *(int *)(unaff_x19 + 0x20) = *(int *)(unaff_x19 + 0x20) + 1;
      *(int *)(unaff_x19 + 0x38) = *(int *)(unaff_x19 + 0x38) + 1;
      return 1;
    }
  }
LAB_04a304bc:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
code_r0x04a302a8:
  unaff_x24 = *(long **)(unaff_x19 + 0x30);
  if (unaff_x24 == (long *)0x0) {
LAB_04a304fc:
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  param_3 = *(long *)(*(long *)(*(long *)(in_stack_00000010 + 0x20) + 0xc0) + 0x20);
  lVar9 = unaff_x20 + unaff_x23 * 0x18;
  unaff_x22 = *(undefined8 *)(lVar9 + 8);
  unaff_x26 = *(undefined8 *)(lVar9 + 0x10);
  if ((*(ushort *)(param_3 + 0x135) & 1) == 0) {
    param_3 = FUN_02b76218(param_3);
  }
  param_1 = *unaff_x24;
  in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (in_x9 == 0) goto LAB_04a30310;
  in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_04a302f8:
  if (*(long *)(in_x10 + -2) != param_3) {
    in_x9 = in_x9 - 1;
    in_ZR = in_x9 == 0;
    in_x10 = in_x10 + 4;
    goto code_r0x04a3030c;
  }
  puVar2 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
  goto LAB_04a3032c;
}


