/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Tweak<bool>$$get_Tween
ENTRY_POINT: 04b86694
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_13;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_ImmersiveDebugger_Manager_Tweak<bool>__get_Tween
          (long param_1,long param_2,undefined8 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  undefined4 unaff_w19;
  long unaff_x22;
  ulong unaff_x23;
  long *plVar12;
  uint uVar13;
  ulong uVar14;
  
  iVar5 = FUN_04b86a14(param_2,param_3,*(undefined8 *)(param_1 + 0x48));
  lVar7 = *(long *)(param_2 + 0x10);
  if (lVar7 == 0) goto LAB_04b868b0;
  uVar13 = *(uint *)(lVar7 + 0x18);
  iVar4 = 0;
  if (uVar13 != 0) {
    iVar4 = iVar5 / (int)uVar13;
  }
  uVar2 = iVar5 - iVar4 * uVar13;
  if (uVar2 < uVar13) {
    uVar13 = *(int *)(lVar7 + (long)(int)uVar2 * 4 + 0x20) - 1;
    if (-1 < (int)uVar13) {
      lVar7 = *(long *)(param_2 + 0x18);
      do {
        if (lVar7 == 0) goto LAB_04b868b0;
        if (*(uint *)(lVar7 + 0x18) <= uVar13) goto LAB_04b868b4;
        uVar14 = (ulong)uVar13;
        if (*(int *)(lVar7 + uVar14 * 0xc + 0x20) == iVar5) {
          plVar12 = *(long **)(param_2 + 0x28);
          if (plVar12 == (long *)0x0) goto LAB_04b868b0;
          uVar1 = *(undefined4 *)(lVar7 + uVar14 * 0xc + 0x24);
          lVar7 = **(long **)(*(long *)(unaff_x22 + 0x20) + 0xc0);
          if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_02feb2c4(lVar7);
          }
          lVar8 = *plVar12;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == lVar7) {
                puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_04b86778;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar6 = (undefined8 *)FUN_02feb5b8(plVar12,lVar7,0);
LAB_04b86778:
          uVar9 = (*(code *)*puVar6)(plVar12,uVar1,unaff_w19,puVar6[1]);
          if ((uVar9 & 1) != 0) {
            return 1;
          }
          lVar7 = *(long *)(param_2 + 0x18);
          if (lVar7 == 0) goto LAB_04b868b0;
        }
        if (*(uint *)(lVar7 + 0x18) <= uVar13) goto LAB_04b868b4;
        uVar13 = *(uint *)(lVar7 + uVar14 * 0xc + 0x28);
      } while (-1 < (int)uVar13);
    }
    if ((unaff_x23 & 1) == 0) {
      return 0;
    }
    uVar13 = *(uint *)(param_2 + 0x24);
    if ((int)uVar13 < 0) {
      if (*(long *)(param_2 + 0x18) == 0) goto LAB_04b868b0;
      uVar13 = *(uint *)(param_2 + 0x20);
      if (uVar13 == *(uint *)(*(long *)(param_2 + 0x18) + 0x18)) {
        FUN_04b868b8(param_2,*(undefined8 *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x60));
        uVar13 = *(uint *)(param_2 + 0x20);
      }
      *(uint *)(param_2 + 0x20) = uVar13 + 1;
    }
    else {
      lVar7 = *(long *)(param_2 + 0x18);
      if (lVar7 == 0) goto LAB_04b868b0;
      if (*(uint *)(lVar7 + 0x18) <= uVar13) goto LAB_04b868b4;
      *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(lVar7 + (ulong)uVar13 * 0xc + 0x28);
    }
    lVar7 = *(long *)(param_2 + 0x10);
    if ((lVar7 == 0) || (lVar8 = *(long *)(param_2 + 0x18), lVar8 == 0)) {
LAB_04b868b0:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    if (uVar13 < *(uint *)(lVar8 + 0x18)) {
      uVar2 = *(uint *)(lVar7 + 0x18);
      lVar11 = lVar8 + (long)(int)uVar13 * 0xc;
      *(int *)(lVar11 + 0x20) = iVar5;
      *(undefined4 *)(lVar11 + 0x24) = unaff_w19;
      iVar4 = 0;
      if (uVar2 != 0) {
        iVar4 = iVar5 / (int)uVar2;
      }
      uVar3 = iVar5 - iVar4 * uVar2;
      if (uVar3 < uVar2) {
        lVar7 = lVar7 + (long)(int)uVar3 * 4;
        *(int *)(lVar8 + (long)(int)uVar13 * 0xc + 0x28) = *(int *)(lVar7 + 0x20) + -1;
        *(uint *)(lVar7 + 0x20) = uVar13 + 1;
        return 0;
      }
    }
  }
LAB_04b868b4:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94f0();
}


