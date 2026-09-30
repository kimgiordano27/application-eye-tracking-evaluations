/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.DestructibleGlobalMeshSpawner$$TryGetDestructibleMeshForRoom
ENTRY_POINT: 04a64a14
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


undefined8 Meta_XR_MRUtilityKit_DestructibleGlobalMeshSpawner__TryGetDestructibleMeshForRoom(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  int *piVar10;
  ulong uVar11;
  ulong in_x10;
  int unaff_w19;
  long unaff_x20;
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
  
code_r0x04a64a14:
  plVar12 = *(long **)(unaff_x26 + 0x30);
  if (plVar12 == (long *)0x0) {
LAB_04a64c9c:
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  lVar4 = *(long *)(*(long *)(*(long *)(in_stack_00000010 + 0x20) + 0xc0) + 0x20);
  lVar8 = unaff_x20 + (unaff_x23 & 0xffffffff) * (in_x10 & 0xffffffff);
  uVar9 = *(undefined8 *)(lVar8 + 8);
  uVar3 = *(undefined8 *)(lVar8 + 0x10);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02b76218(lVar4);
  }
  lVar8 = *plVar12;
  uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar11 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == lVar4) {
        puVar2 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_04a64aa4;
      }
      uVar11 = uVar11 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar11 != 0);
  }
  puVar2 = (undefined8 *)FUN_02b7654c(plVar12,lVar4,0);
LAB_04a64aa4:
  uVar11 = (*(code *)*puVar2)(plVar12,uVar9,uVar3);
  if ((uVar11 & 1) != 0) {
    return 0;
  }
  in_x10 = 0x18;
LAB_04a64adc:
  uVar5 = (uint)*(undefined8 *)(unaff_x22 + 0x18);
  if ((int)uVar5 <= unaff_w29) {
    thunk_FUN_02ba3594(PTR_DAT_0631cb60);
    uVar9 = thunk_FUN_02b79644();
    uVar3 = thunk_FUN_02ba3594(PTR_DAT_06322b90);
    FUN_04d7b3f4(uVar9,uVar3,0);
                    /* WARNING: Subroutine does not return */
    FUN_02b3c988(uVar9,in_stack_00000010);
  }
  if ((uint)unaff_x27 < uVar5) {
    unaff_w29 = unaff_w29 + 1;
    uVar7 = *(uint *)(unaff_x20 + (unaff_x23 & 0xffffffff) * 0x18 + 4);
    unaff_x23 = (ulong)uVar7;
    if (-1 < (int)uVar7) {
      if (uVar5 <= uVar7) goto LAB_04a64c5c;
      unaff_x27 = unaff_x23;
      if (*(int *)(unaff_x20 + unaff_x23 * 0x18) == unaff_w19) goto code_r0x04a64a14;
      goto LAB_04a64adc;
    }
    uVar5 = *(uint *)(unaff_x26 + 0x28);
    if ((int)uVar5 < 0) {
      if (unaff_x22 == 0) goto LAB_04a64c9c;
      uVar5 = *(uint *)(unaff_x26 + 0x24);
      uVar7 = *(uint *)(unaff_x22 + 0x18);
      if (uVar5 == uVar7) {
        FUN_04a64738(unaff_x26,
                     *(undefined8 *)(*(long *)(*(long *)(in_stack_00000010 + 0x20) + 0xc0) + 0x180))
        ;
        if (*(long *)(unaff_x26 + 0x10) == 0) goto LAB_04a64c9c;
        uVar5 = *(uint *)(unaff_x26 + 0x24);
        unaff_x22 = *(long *)(unaff_x26 + 0x18);
        uVar9 = *(undefined8 *)(*(long *)(unaff_x26 + 0x10) + 0x18);
        *(uint *)(unaff_x26 + 0x24) = uVar5 + 1;
        if (unaff_x22 == 0) goto LAB_04a64c9c;
        iVar1 = 0;
        iVar6 = (int)uVar9;
        if (iVar6 != 0) {
          iVar1 = unaff_w19 / iVar6;
        }
        in_stack_00000008._4_4_ = unaff_w19 - iVar1 * iVar6;
        uVar7 = *(uint *)(unaff_x22 + 0x18);
      }
      else {
        *(uint *)(unaff_x26 + 0x24) = uVar5 + 1;
      }
    }
    else {
      if (unaff_x22 == 0) goto LAB_04a64c9c;
      uVar7 = *(uint *)(unaff_x22 + 0x18);
      if (uVar7 <= uVar5) goto LAB_04a64c5c;
      *(undefined4 *)(unaff_x26 + 0x28) = *(undefined4 *)(unaff_x22 + (ulong)uVar5 * 0x18 + 0x24);
    }
    if (uVar5 < uVar7) {
      piVar10 = (int *)(unaff_x22 + 0x20 + (long)(int)uVar5 * 0x18);
      *(undefined8 *)(piVar10 + 4) = unaff_x28;
      *(undefined8 *)(piVar10 + 2) = unaff_x25;
      uVar7 = *(uint *)(unaff_x22 + 0x18);
      *piVar10 = unaff_w19;
      if (uVar7 <= uVar5) goto LAB_04a64c5c;
      thunk_FUN_02bb0e9c(piVar10 + 2,0);
      lVar4 = *(long *)(unaff_x26 + 0x10);
      if (lVar4 == 0) goto LAB_04a64c9c;
      if ((in_stack_00000008._4_4_ < *(uint *)(lVar4 + 0x18)) &&
         (uVar5 < *(uint *)(unaff_x22 + 0x18))) {
        lVar4 = lVar4 + (ulong)in_stack_00000008._4_4_ * 4;
        *(int *)(unaff_x22 + 0x20 + (long)(int)uVar5 * 0x18 + 4) = *(int *)(lVar4 + 0x20) + -1;
        *(uint *)(lVar4 + 0x20) = uVar5 + 1;
        *(int *)(unaff_x26 + 0x20) = *(int *)(unaff_x26 + 0x20) + 1;
        *(int *)(unaff_x26 + 0x38) = *(int *)(unaff_x26 + 0x38) + 1;
        return 1;
      }
    }
  }
LAB_04a64c5c:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


