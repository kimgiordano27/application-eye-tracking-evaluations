/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ScrollView$$Setup
ENTRY_POINT: 04a46dc4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_ImmersiveDebugger_UserInterface_Generic_ScrollView__Setup(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  long in_x9;
  undefined8 uVar9;
  ulong in_x10;
  long lVar10;
  int *piVar11;
  long in_x13;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  long *plVar12;
  undefined8 unaff_x25;
  long unaff_x26;
  ulong uVar13;
  undefined8 unaff_x28;
  int unaff_w29;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  
  while( true ) {
    unaff_w29 = unaff_w29 + 1;
    uVar4 = *(uint *)(in_x9 + 4);
    uVar13 = (ulong)uVar4;
    if ((int)uVar4 < 0) break;
    if ((uint)param_1 <= uVar4)
    goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_ScrollView__RefreshLayoutPreChildren;
    if (*(int *)(unaff_x20 + uVar13 * (in_x10 & 0xffffffff)) == unaff_w21) {
      plVar12 = *(long **)(unaff_x26 + 0x30);
      if (plVar12 == (long *)0x0) goto LAB_04a46f50;
      lVar10 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x20);
      lVar5 = unaff_x20 + uVar13 * (in_x10 & 0xffffffff);
      uVar9 = *(undefined8 *)(lVar5 + 8);
      uVar3 = *(undefined8 *)(lVar5 + 0x10);
      if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_02b76218(lVar10);
      }
      lVar5 = *plVar12;
      uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar8 != 0) {
        piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar10) {
            puVar2 = (undefined8 *)(lVar5 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_04a46d80;
          }
          uVar8 = uVar8 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar8 != 0);
      }
      puVar2 = (undefined8 *)FUN_02b7654c(plVar12,lVar10,0);
LAB_04a46d80:
      uVar8 = (*(code *)*puVar2)(plVar12,uVar9,uVar3);
      if ((uVar8 & 1) != 0) {
        return 0;
      }
      in_x10 = 0x18;
      param_1 = *(undefined8 *)(in_stack_00000018 + 0x18);
      in_x13 = in_stack_00000018;
      unaff_x22 = in_stack_00000010;
    }
    if ((int)(uint)param_1 <= unaff_w29) {
      thunk_FUN_02ba3594(PTR_DAT_0631cb60);
      uVar9 = thunk_FUN_02b79644();
      uVar3 = thunk_FUN_02ba3594(PTR_DAT_06322b90);
      FUN_04d7b3f4(uVar9,uVar3,0);
                    /* WARNING: Subroutine does not return */
      FUN_02b3c988(uVar9,unaff_x22);
    }
    if ((uint)param_1 <= uVar4)
    goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_ScrollView__RefreshLayoutPreChildren;
    in_x9 = unaff_x20 + uVar13 * (in_x10 & 0xffffffff);
  }
  uVar4 = *(uint *)(unaff_x26 + 0x28);
  if ((int)uVar4 < 0) {
    if (in_x13 == 0) goto LAB_04a46f50;
    uVar4 = *(uint *)(unaff_x26 + 0x24);
    uVar7 = *(uint *)(in_x13 + 0x18);
    if (uVar4 == uVar7) {
      FUN_04a46a28(unaff_x26,*(undefined8 *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x180))
      ;
      if (*(long *)(unaff_x26 + 0x10) == 0) goto LAB_04a46f50;
      uVar4 = *(uint *)(unaff_x26 + 0x24);
      in_x13 = *(long *)(unaff_x26 + 0x18);
      uVar9 = *(undefined8 *)(*(long *)(unaff_x26 + 0x10) + 0x18);
      *(uint *)(unaff_x26 + 0x24) = uVar4 + 1;
      if (in_x13 == 0) goto LAB_04a46f50;
      iVar1 = 0;
      iVar6 = (int)uVar9;
      if (iVar6 != 0) {
        iVar1 = unaff_w21 / iVar6;
      }
      in_stack_00000008._4_4_ = unaff_w21 - iVar1 * iVar6;
      uVar7 = *(uint *)(in_x13 + 0x18);
    }
    else {
      *(uint *)(unaff_x26 + 0x24) = uVar4 + 1;
    }
  }
  else {
    if (in_x13 == 0) goto LAB_04a46f50;
    uVar7 = *(uint *)(in_x13 + 0x18);
    if (uVar7 <= uVar4)
    goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_ScrollView__RefreshLayoutPreChildren;
    *(undefined4 *)(unaff_x26 + 0x28) = *(undefined4 *)(in_x13 + (ulong)uVar4 * 0x18 + 0x24);
  }
  if (uVar4 < uVar7) {
    piVar11 = (int *)(in_x13 + 0x20 + (long)(int)uVar4 * 0x18);
    *(undefined8 *)(piVar11 + 2) = unaff_x25;
    *(undefined8 *)(piVar11 + 4) = unaff_x28;
    lVar10 = *(long *)(unaff_x26 + 0x10);
    *piVar11 = unaff_w21;
    if (lVar10 == 0) {
LAB_04a46f50:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    if ((in_stack_00000008._4_4_ < *(uint *)(lVar10 + 0x18)) && (uVar4 < *(uint *)(in_x13 + 0x18)))
    {
      lVar10 = lVar10 + (ulong)in_stack_00000008._4_4_ * 4;
      *(int *)(in_x13 + 0x20 + (long)(int)uVar4 * 0x18 + 4) = *(int *)(lVar10 + 0x20) + -1;
      *(uint *)(lVar10 + 0x20) = uVar4 + 1;
      *(int *)(unaff_x26 + 0x20) = *(int *)(unaff_x26 + 0x20) + 1;
      *(int *)(unaff_x26 + 0x38) = *(int *)(unaff_x26 + 0x38) + 1;
      return 1;
    }
  }
Meta_XR_ImmersiveDebugger_UserInterface_Generic_ScrollView__RefreshLayoutPreChildren:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


