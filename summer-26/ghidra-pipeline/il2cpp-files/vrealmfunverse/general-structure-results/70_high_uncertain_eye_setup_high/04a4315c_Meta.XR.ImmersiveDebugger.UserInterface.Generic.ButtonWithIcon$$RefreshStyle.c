/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ButtonWithIcon$$RefreshStyle
ENTRY_POINT: 04a4315c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_12;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_ImmersiveDebugger_UserInterface_Generic_ButtonWithIcon__RefreshStyle(undefined8 *param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
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
  
code_r0x04a4315c:
  uVar2 = (*(code *)*param_1)(unaff_x24,unaff_x22,unaff_x26);
  if ((uVar2 & 1) != 0) {
    return 0;
  }
LAB_04a4318c:
  uVar4 = (uint)*(undefined8 *)(in_stack_00000018 + 0x18);
  if ((int)uVar4 <= unaff_w29) {
    thunk_FUN_02ba3594(PTR_DAT_0631cb60);
    uVar8 = thunk_FUN_02b79644();
    uVar3 = thunk_FUN_02ba3594(PTR_DAT_06322b90);
    FUN_04d7b3f4(uVar8,uVar3,0);
                    /* WARNING: Subroutine does not return */
    FUN_02b3c988(uVar8,in_stack_00000010);
  }
  if ((uint)unaff_x27 < uVar4) {
    unaff_w29 = unaff_w29 + 1;
    uVar7 = *(uint *)(unaff_x20 + (unaff_x23 & 0xffffffff) * 0x18 + 4);
    unaff_x23 = (ulong)uVar7;
    if (-1 < (int)uVar7) {
      if (uVar4 <= uVar7) goto LAB_04a432ec;
      unaff_x27 = unaff_x23;
      if (*(int *)(unaff_x20 + unaff_x23 * 0x18) == unaff_w21) goto code_r0x04a430d8;
      goto LAB_04a4318c;
    }
    uVar4 = *(uint *)(unaff_x19 + 0x28);
    if ((int)uVar4 < 0) {
      if (in_stack_00000018 == 0) goto LAB_04a4332c;
      uVar4 = *(uint *)(unaff_x19 + 0x24);
      uVar7 = *(uint *)(in_stack_00000018 + 0x18);
      if (uVar4 == uVar7) {
        FUN_04a42e04(unaff_x19,
                     *(undefined8 *)(*(long *)(*(long *)(in_stack_00000010 + 0x20) + 0xc0) + 0x180))
        ;
        if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_04a4332c;
        uVar4 = *(uint *)(unaff_x19 + 0x24);
        in_stack_00000018 = *(long *)(unaff_x19 + 0x18);
        uVar8 = *(undefined8 *)(*(long *)(unaff_x19 + 0x10) + 0x18);
        *(uint *)(unaff_x19 + 0x24) = uVar4 + 1;
        if (in_stack_00000018 == 0) goto LAB_04a4332c;
        iVar1 = 0;
        iVar6 = (int)uVar8;
        if (iVar6 != 0) {
          iVar1 = unaff_w21 / iVar6;
        }
        in_stack_00000008._4_4_ = unaff_w21 - iVar1 * iVar6;
        uVar7 = *(uint *)(in_stack_00000018 + 0x18);
      }
      else {
        *(uint *)(unaff_x19 + 0x24) = uVar4 + 1;
      }
    }
    else {
      if (in_stack_00000018 == 0) goto LAB_04a4332c;
      uVar7 = *(uint *)(in_stack_00000018 + 0x18);
      if (uVar7 <= uVar4) goto LAB_04a432ec;
      *(undefined4 *)(unaff_x19 + 0x28) =
           *(undefined4 *)(in_stack_00000018 + (ulong)uVar4 * 0x18 + 0x24);
    }
    if (uVar7 <= uVar4) goto LAB_04a432ec;
    piVar10 = (int *)(in_stack_00000018 + 0x20 + (long)(int)uVar4 * 0x18);
    *(undefined8 *)(piVar10 + 2) = unaff_x25;
    *(undefined8 *)(piVar10 + 4) = unaff_x28;
    lVar9 = *(long *)(unaff_x19 + 0x10);
    *piVar10 = unaff_w21;
    if (lVar9 == 0) goto LAB_04a4332c;
    if ((in_stack_00000008._4_4_ < *(uint *)(lVar9 + 0x18)) &&
       (uVar4 < *(uint *)(in_stack_00000018 + 0x18))) {
      lVar9 = lVar9 + (ulong)in_stack_00000008._4_4_ * 4;
      *(int *)(in_stack_00000018 + 0x20 + (long)(int)uVar4 * 0x18 + 4) = *(int *)(lVar9 + 0x20) + -1
      ;
      *(uint *)(lVar9 + 0x20) = uVar4 + 1;
      *(int *)(unaff_x19 + 0x20) = *(int *)(unaff_x19 + 0x20) + 1;
      *(int *)(unaff_x19 + 0x38) = *(int *)(unaff_x19 + 0x38) + 1;
      return 1;
    }
  }
LAB_04a432ec:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
code_r0x04a430d8:
  unaff_x24 = *(long **)(unaff_x19 + 0x30);
  if (unaff_x24 == (long *)0x0) {
LAB_04a4332c:
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  lVar9 = *(long *)(*(long *)(*(long *)(in_stack_00000010 + 0x20) + 0xc0) + 0x20);
  lVar5 = unaff_x20 + unaff_x23 * 0x18;
  unaff_x22 = *(undefined8 *)(lVar5 + 8);
  unaff_x26 = *(undefined8 *)(lVar5 + 0x10);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_02b76218(lVar9);
  }
  lVar5 = *unaff_x24;
  uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar2 != 0) {
    piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == lVar9) {
        param_1 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
        goto code_r0x04a4315c;
      }
      uVar2 = uVar2 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar2 != 0);
  }
  param_1 = (undefined8 *)FUN_02b7654c(unaff_x24,lVar9,0);
  goto code_r0x04a4315c;
}


