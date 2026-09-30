/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Member$$<AddToggle>b__37_0
ENTRY_POINT: 04a3f4b4
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


undefined8 Meta_XR_ImmersiveDebugger_UserInterface_Member__<AddToggle>b__37_0(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong in_x10;
  int *piVar11;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  ulong unaff_x23;
  long *plVar12;
  undefined8 unaff_x25;
  long unaff_x26;
  ulong unaff_x27;
  undefined8 unaff_x28;
  int unaff_w29;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  
code_r0x04a3f4b4:
  plVar12 = *(long **)(unaff_x26 + 0x30);
  if (plVar12 == (long *)0x0) {
LAB_04a3f708:
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  lVar4 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x20);
  lVar6 = unaff_x20 + (unaff_x23 & 0xffffffff) * (in_x10 & 0xffffffff);
  uVar10 = *(undefined8 *)(lVar6 + 8);
  uVar3 = *(undefined8 *)(lVar6 + 0x10);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02b76218(lVar4);
  }
  lVar6 = *plVar12;
  uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar9 != 0) {
    piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == lVar4) {
        puVar2 = (undefined8 *)(lVar6 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_04a3f538;
      }
      uVar9 = uVar9 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar9 != 0);
  }
  puVar2 = (undefined8 *)FUN_02b7654c(plVar12,lVar4,0);
LAB_04a3f538:
  uVar9 = (*(code *)*puVar2)(plVar12,uVar10,uVar3);
  if ((uVar9 & 1) != 0) {
    return 0;
  }
  in_x10 = 0x18;
LAB_04a3f568:
  uVar5 = (uint)*(undefined8 *)(in_stack_00000018 + 0x18);
  if ((int)uVar5 <= unaff_w29) {
    thunk_FUN_02ba3594(PTR_DAT_0631cb60);
    uVar10 = thunk_FUN_02b79644();
    uVar3 = thunk_FUN_02ba3594(PTR_DAT_06322b90);
    FUN_04d7b3f4(uVar10,uVar3,0);
                    /* WARNING: Subroutine does not return */
    FUN_02b3c988(uVar10,in_stack_00000010);
  }
  if ((uint)unaff_x27 < uVar5) {
    unaff_w29 = unaff_w29 + 1;
    uVar8 = *(uint *)(unaff_x20 + (unaff_x23 & 0xffffffff) * 0x18 + 4);
    unaff_x23 = (ulong)uVar8;
    if (-1 < (int)uVar8) {
      if (uVar5 <= uVar8) goto LAB_04a3f6c8;
      unaff_x22 = in_stack_00000010;
      unaff_x27 = unaff_x23;
      if (*(int *)(unaff_x20 + unaff_x23 * 0x18) == unaff_w21) goto code_r0x04a3f4b4;
      goto LAB_04a3f568;
    }
    uVar5 = *(uint *)(unaff_x26 + 0x28);
    if ((int)uVar5 < 0) {
      if (in_stack_00000018 == 0) goto LAB_04a3f708;
      uVar5 = *(uint *)(unaff_x26 + 0x24);
      uVar8 = *(uint *)(in_stack_00000018 + 0x18);
      if (uVar5 == uVar8) {
        FUN_04a3f1e0(unaff_x26,
                     *(undefined8 *)(*(long *)(*(long *)(in_stack_00000010 + 0x20) + 0xc0) + 0x180))
        ;
        if (*(long *)(unaff_x26 + 0x10) == 0) goto LAB_04a3f708;
        uVar5 = *(uint *)(unaff_x26 + 0x24);
        in_stack_00000018 = *(long *)(unaff_x26 + 0x18);
        uVar10 = *(undefined8 *)(*(long *)(unaff_x26 + 0x10) + 0x18);
        *(uint *)(unaff_x26 + 0x24) = uVar5 + 1;
        if (in_stack_00000018 == 0) goto LAB_04a3f708;
        iVar1 = 0;
        iVar7 = (int)uVar10;
        if (iVar7 != 0) {
          iVar1 = unaff_w21 / iVar7;
        }
        in_stack_00000008._4_4_ = unaff_w21 - iVar1 * iVar7;
        uVar8 = *(uint *)(in_stack_00000018 + 0x18);
      }
      else {
        *(uint *)(unaff_x26 + 0x24) = uVar5 + 1;
      }
    }
    else {
      if (in_stack_00000018 == 0) goto LAB_04a3f708;
      uVar8 = *(uint *)(in_stack_00000018 + 0x18);
      if (uVar8 <= uVar5) goto LAB_04a3f6c8;
      *(undefined4 *)(unaff_x26 + 0x28) =
           *(undefined4 *)(in_stack_00000018 + (ulong)uVar5 * 0x18 + 0x24);
    }
    if (uVar8 <= uVar5) goto LAB_04a3f6c8;
    piVar11 = (int *)(in_stack_00000018 + 0x20 + (long)(int)uVar5 * 0x18);
    *(undefined8 *)(piVar11 + 2) = unaff_x25;
    *(undefined8 *)(piVar11 + 4) = unaff_x28;
    lVar4 = *(long *)(unaff_x26 + 0x10);
    *piVar11 = unaff_w21;
    if (lVar4 == 0) goto LAB_04a3f708;
    if ((in_stack_00000008._4_4_ < *(uint *)(lVar4 + 0x18)) &&
       (uVar5 < *(uint *)(in_stack_00000018 + 0x18))) {
      lVar4 = lVar4 + (ulong)in_stack_00000008._4_4_ * 4;
      *(int *)(in_stack_00000018 + 0x20 + (long)(int)uVar5 * 0x18 + 4) = *(int *)(lVar4 + 0x20) + -1
      ;
      *(uint *)(lVar4 + 0x20) = uVar5 + 1;
      *(int *)(unaff_x26 + 0x20) = *(int *)(unaff_x26 + 0x20) + 1;
      *(int *)(unaff_x26 + 0x38) = *(int *)(unaff_x26 + 0x38) + 1;
      return 1;
    }
  }
LAB_04a3f6c8:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


