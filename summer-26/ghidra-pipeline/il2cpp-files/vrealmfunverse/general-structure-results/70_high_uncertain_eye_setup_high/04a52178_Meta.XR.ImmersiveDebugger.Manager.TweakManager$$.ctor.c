/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.TweakManager$$.ctor
ENTRY_POINT: 04a52178
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


undefined8 Meta_XR_ImmersiveDebugger_Manager_TweakManager___ctor(code *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  long lVar10;
  int *piVar11;
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
  
code_r0x04a52178:
  uVar3 = (*param_1)(unaff_x24,unaff_x22,unaff_x26);
  if ((uVar3 & 1) != 0) {
    return 0;
  }
LAB_04a521a4:
  uVar5 = (uint)*(undefined8 *)(in_stack_00000018 + 0x18);
  if ((int)uVar5 <= unaff_w29) {
    thunk_FUN_02ba3594(PTR_DAT_0631cb60);
    uVar9 = thunk_FUN_02b79644();
    uVar4 = thunk_FUN_02ba3594(PTR_DAT_06322b90);
    FUN_04d7b3f4(uVar9,uVar4,0);
                    /* WARNING: Subroutine does not return */
    FUN_02b3c988(uVar9,in_stack_00000010);
  }
  if ((uint)unaff_x27 < uVar5) {
    unaff_w29 = unaff_w29 + 1;
    uVar8 = *(uint *)(unaff_x20 + (unaff_x23 & 0xffffffff) * 0x18 + 4);
    unaff_x23 = (ulong)uVar8;
    if (-1 < (int)uVar8) {
      if (uVar5 <= uVar8) goto LAB_04a52304;
      unaff_x27 = unaff_x23;
      if (*(int *)(unaff_x20 + unaff_x23 * 0x18) == unaff_w21) goto code_r0x04a520f0;
      goto LAB_04a521a4;
    }
    uVar5 = *(uint *)(unaff_x19 + 0x28);
    if ((int)uVar5 < 0) {
      if (in_stack_00000018 == 0) goto LAB_04a52344;
      uVar5 = *(uint *)(unaff_x19 + 0x24);
      uVar8 = *(uint *)(in_stack_00000018 + 0x18);
      if (uVar5 == uVar8) {
        FUN_04a51e1c(unaff_x19,
                     *(undefined8 *)(*(long *)(*(long *)(in_stack_00000010 + 0x20) + 0xc0) + 0x180))
        ;
        if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_04a52344;
        uVar5 = *(uint *)(unaff_x19 + 0x24);
        in_stack_00000018 = *(long *)(unaff_x19 + 0x18);
        uVar9 = *(undefined8 *)(*(long *)(unaff_x19 + 0x10) + 0x18);
        *(uint *)(unaff_x19 + 0x24) = uVar5 + 1;
        if (in_stack_00000018 == 0) goto LAB_04a52344;
        iVar1 = 0;
        iVar7 = (int)uVar9;
        if (iVar7 != 0) {
          iVar1 = unaff_w21 / iVar7;
        }
        in_stack_00000008._4_4_ = unaff_w21 - iVar1 * iVar7;
        uVar8 = *(uint *)(in_stack_00000018 + 0x18);
      }
      else {
        *(uint *)(unaff_x19 + 0x24) = uVar5 + 1;
      }
    }
    else {
      if (in_stack_00000018 == 0) goto LAB_04a52344;
      uVar8 = *(uint *)(in_stack_00000018 + 0x18);
      if (uVar8 <= uVar5) goto LAB_04a52304;
      *(undefined4 *)(unaff_x19 + 0x28) =
           *(undefined4 *)(in_stack_00000018 + (ulong)uVar5 * 0x18 + 0x24);
    }
    if (uVar8 <= uVar5) goto LAB_04a52304;
    piVar11 = (int *)(in_stack_00000018 + 0x20 + (long)(int)uVar5 * 0x18);
    *(undefined8 *)(piVar11 + 2) = unaff_x25;
    *(undefined8 *)(piVar11 + 4) = unaff_x28;
    lVar10 = *(long *)(unaff_x19 + 0x10);
    *piVar11 = unaff_w21;
    if (lVar10 == 0) goto LAB_04a52344;
    if ((in_stack_00000008._4_4_ < *(uint *)(lVar10 + 0x18)) &&
       (uVar5 < *(uint *)(in_stack_00000018 + 0x18))) {
      lVar10 = lVar10 + (ulong)in_stack_00000008._4_4_ * 4;
      *(int *)(in_stack_00000018 + 0x20 + (long)(int)uVar5 * 0x18 + 4) =
           *(int *)(lVar10 + 0x20) + -1;
      *(uint *)(lVar10 + 0x20) = uVar5 + 1;
      *(int *)(unaff_x19 + 0x20) = *(int *)(unaff_x19 + 0x20) + 1;
      *(int *)(unaff_x19 + 0x38) = *(int *)(unaff_x19 + 0x38) + 1;
      return 1;
    }
  }
LAB_04a52304:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
code_r0x04a520f0:
  unaff_x24 = *(long **)(unaff_x19 + 0x30);
  if (unaff_x24 == (long *)0x0) {
LAB_04a52344:
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  lVar10 = *(long *)(*(long *)(*(long *)(in_stack_00000010 + 0x20) + 0xc0) + 0x20);
  lVar6 = unaff_x20 + unaff_x23 * 0x18;
  unaff_x22 = *(undefined8 *)(lVar6 + 8);
  unaff_x26 = *(undefined8 *)(lVar6 + 0x10);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_02b76218(lVar10);
  }
  lVar6 = *unaff_x24;
  uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar3 != 0) {
    piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == lVar10) {
        puVar2 = (undefined8 *)(lVar6 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_04a52174;
      }
      uVar3 = uVar3 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined8 *)FUN_02b7654c(unaff_x24,lVar10,0);
LAB_04a52174:
  param_1 = (code *)*puVar2;
  goto code_r0x04a52178;
}


