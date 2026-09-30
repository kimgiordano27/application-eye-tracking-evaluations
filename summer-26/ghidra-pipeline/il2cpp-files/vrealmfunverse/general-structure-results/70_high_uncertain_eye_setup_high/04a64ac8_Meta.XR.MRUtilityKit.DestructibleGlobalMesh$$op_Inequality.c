/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.DestructibleGlobalMesh$$op_Inequality
ENTRY_POINT: 04a64ac8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_13;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_MRUtilityKit_DestructibleGlobalMesh__op_Inequality(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  int *piVar9;
  long lVar10;
  ulong uVar11;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  ulong unaff_x23;
  long *plVar12;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  ulong unaff_x27;
  int unaff_w29;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  
code_r0x04a64ac8:
LAB_04a64adc:
  uVar4 = (uint)*(undefined8 *)(unaff_x22 + 0x18);
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
    uVar6 = *(uint *)(unaff_x20 + (unaff_x23 & 0xffffffff) * 0x18 + 4);
    unaff_x23 = (ulong)uVar6;
    if (-1 < (int)uVar6) {
      if (uVar4 <= uVar6) goto LAB_04a64c5c;
      unaff_x27 = unaff_x23;
      if (*(int *)(unaff_x20 + unaff_x23 * 0x18) == unaff_w21) goto code_r0x04a64a0c;
      goto LAB_04a64adc;
    }
    uVar4 = *(uint *)(unaff_x19 + 0x28);
    if ((int)uVar4 < 0) {
      if (unaff_x22 == 0) goto LAB_04a64c9c;
      uVar4 = *(uint *)(unaff_x19 + 0x24);
      uVar6 = *(uint *)(unaff_x22 + 0x18);
      if (uVar4 == uVar6) {
        FUN_04a64738(unaff_x19,
                     *(undefined8 *)(*(long *)(*(long *)(in_stack_00000010 + 0x20) + 0xc0) + 0x180))
        ;
        if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_04a64c9c;
        uVar4 = *(uint *)(unaff_x19 + 0x24);
        unaff_x22 = *(long *)(unaff_x19 + 0x18);
        uVar8 = *(undefined8 *)(*(long *)(unaff_x19 + 0x10) + 0x18);
        *(uint *)(unaff_x19 + 0x24) = uVar4 + 1;
        if (unaff_x22 == 0) goto LAB_04a64c9c;
        iVar1 = 0;
        iVar5 = (int)uVar8;
        if (iVar5 != 0) {
          iVar1 = unaff_w21 / iVar5;
        }
        in_stack_00000008._4_4_ = unaff_w21 - iVar1 * iVar5;
        uVar6 = *(uint *)(unaff_x22 + 0x18);
      }
      else {
        *(uint *)(unaff_x19 + 0x24) = uVar4 + 1;
      }
    }
    else {
      if (unaff_x22 == 0) goto LAB_04a64c9c;
      uVar6 = *(uint *)(unaff_x22 + 0x18);
      if (uVar6 <= uVar4) goto LAB_04a64c5c;
      *(undefined4 *)(unaff_x19 + 0x28) = *(undefined4 *)(unaff_x22 + (ulong)uVar4 * 0x18 + 0x24);
    }
    if (uVar6 <= uVar4) goto LAB_04a64c5c;
    piVar9 = (int *)(unaff_x22 + 0x20 + (long)(int)uVar4 * 0x18);
    *(undefined8 *)(piVar9 + 4) = unaff_x24;
    *(undefined8 *)(piVar9 + 2) = unaff_x25;
    uVar6 = *(uint *)(unaff_x22 + 0x18);
    *piVar9 = unaff_w21;
    if (uVar4 < uVar6) {
      thunk_FUN_02bb0e9c(piVar9 + 2,0);
      lVar10 = *(long *)(unaff_x19 + 0x10);
      if (lVar10 == 0) goto LAB_04a64c9c;
      if ((in_stack_00000008._4_4_ < *(uint *)(lVar10 + 0x18)) &&
         (uVar4 < *(uint *)(unaff_x22 + 0x18))) {
        lVar10 = lVar10 + (ulong)in_stack_00000008._4_4_ * 4;
        *(int *)(unaff_x22 + 0x20 + (long)(int)uVar4 * 0x18 + 4) = *(int *)(lVar10 + 0x20) + -1;
        *(uint *)(lVar10 + 0x20) = uVar4 + 1;
        *(int *)(unaff_x19 + 0x20) = *(int *)(unaff_x19 + 0x20) + 1;
        *(int *)(unaff_x19 + 0x38) = *(int *)(unaff_x19 + 0x38) + 1;
        return 1;
      }
    }
  }
LAB_04a64c5c:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
code_r0x04a64a0c:
  plVar12 = *(long **)(unaff_x19 + 0x30);
  if (plVar12 == (long *)0x0) {
LAB_04a64c9c:
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  lVar10 = *(long *)(*(long *)(*(long *)(in_stack_00000010 + 0x20) + 0xc0) + 0x20);
  lVar7 = unaff_x20 + unaff_x23 * 0x18;
  uVar8 = *(undefined8 *)(lVar7 + 8);
  uVar3 = *(undefined8 *)(lVar7 + 0x10);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_02b76218(lVar10);
  }
  lVar7 = *plVar12;
  uVar11 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar11 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == lVar10) {
        puVar2 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_04a64aa4;
      }
      uVar11 = uVar11 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar11 != 0);
  }
  puVar2 = (undefined8 *)FUN_02b7654c(plVar12,lVar10,0);
LAB_04a64aa4:
  uVar11 = (*(code *)*puVar2)(plVar12,uVar8,uVar3);
  if ((uVar11 & 1) != 0) {
    return 0;
  }
  goto code_r0x04a64ac8;
}


