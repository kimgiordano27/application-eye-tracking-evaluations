/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.FindSpawnPositions$$.ctor
ENTRY_POINT: 04a6c3a0
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


undefined8 Meta_XR_MRUtilityKit_FindSpawnPositions___ctor(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  int in_w8;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  long unaff_x19;
  undefined8 unaff_x20;
  int unaff_w21;
  long unaff_x22;
  long *plVar12;
  long unaff_x26;
  int iVar13;
  undefined8 in_stack_00000008;
  
  uVar4 = in_w8 - 1;
  if (-1 < (int)uVar4) {
    if (unaff_x26 == 0) goto LAB_04a6c5f8;
    uVar5 = *(undefined8 *)(unaff_x26 + 0x18);
    iVar13 = 0;
    do {
      if ((uint)uVar5 <= uVar4) goto LAB_04a6c5b8;
      lVar11 = unaff_x26 + 0x20 + (ulong)uVar4 * 0x10;
      if (*(int *)(unaff_x26 + 0x20 + (ulong)uVar4 * 0x10) == unaff_w21) {
        plVar12 = *(long **)(unaff_x19 + 0x30);
        if (plVar12 == (long *)0x0) goto LAB_04a6c5f8;
        uVar5 = *(undefined8 *)(lVar11 + 8);
        lVar3 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x20);
        if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_02b76218(lVar3);
        }
        lVar6 = *plVar12;
        uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == lVar3) {
              puVar1 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_04a6c450;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar1 = (undefined8 *)FUN_02b7654c(plVar12,lVar3,0);
LAB_04a6c450:
        uVar9 = (*(code *)*puVar1)(plVar12,uVar5);
        if ((uVar9 & 1) != 0) {
          return 0;
        }
        uVar5 = *(undefined8 *)(unaff_x26 + 0x18);
      }
      if ((int)(uint)uVar5 <= iVar13) {
        thunk_FUN_02ba3594(PTR_DAT_0631cb60);
        uVar5 = thunk_FUN_02b79644();
        uVar2 = thunk_FUN_02ba3594(PTR_DAT_06322b90);
        FUN_04d7b3f4(uVar5,uVar2,0);
                    /* WARNING: Subroutine does not return */
        FUN_02b3c988(uVar5);
      }
      if ((uint)uVar5 <= uVar4) goto LAB_04a6c5b8;
      uVar4 = *(uint *)(lVar11 + 4);
      iVar13 = iVar13 + 1;
    } while (-1 < (int)uVar4);
  }
  uVar4 = *(uint *)(unaff_x19 + 0x28);
  if ((int)uVar4 < 0) {
    if (unaff_x26 == 0) goto LAB_04a6c5f8;
    uVar4 = *(uint *)(unaff_x19 + 0x24);
    uVar8 = *(uint *)(unaff_x26 + 0x18);
    if (uVar4 == uVar8) {
      FUN_04a6c110();
      if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_04a6c5f8;
      uVar4 = *(uint *)(unaff_x19 + 0x24);
      unaff_x26 = *(long *)(unaff_x19 + 0x18);
      uVar5 = *(undefined8 *)(*(long *)(unaff_x19 + 0x10) + 0x18);
      *(uint *)(unaff_x19 + 0x24) = uVar4 + 1;
      if (unaff_x26 == 0) goto LAB_04a6c5f8;
      iVar13 = 0;
      iVar7 = (int)uVar5;
      if (iVar7 != 0) {
        iVar13 = unaff_w21 / iVar7;
      }
      in_stack_00000008._4_4_ = unaff_w21 - iVar13 * iVar7;
      uVar8 = *(uint *)(unaff_x26 + 0x18);
    }
    else {
      *(uint *)(unaff_x19 + 0x24) = uVar4 + 1;
    }
  }
  else {
    if (unaff_x26 == 0) goto LAB_04a6c5f8;
    uVar8 = *(uint *)(unaff_x26 + 0x18);
    if (uVar8 <= uVar4) goto LAB_04a6c5b8;
    *(undefined4 *)(unaff_x19 + 0x28) = *(undefined4 *)(unaff_x26 + (ulong)uVar4 * 0x10 + 0x24);
  }
  if (uVar4 < uVar8) {
    piVar10 = (int *)(unaff_x26 + 0x20 + (long)(int)uVar4 * 0x10);
    *(undefined8 *)(piVar10 + 2) = unaff_x20;
    lVar11 = *(long *)(unaff_x19 + 0x10);
    *piVar10 = unaff_w21;
    if (lVar11 == 0) {
LAB_04a6c5f8:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    if ((in_stack_00000008._4_4_ < *(uint *)(lVar11 + 0x18)) &&
       (uVar4 < *(uint *)(unaff_x26 + 0x18))) {
      lVar11 = lVar11 + (ulong)in_stack_00000008._4_4_ * 4;
      *(int *)(unaff_x26 + 0x20 + (long)(int)uVar4 * 0x10 + 4) = *(int *)(lVar11 + 0x20) + -1;
      *(uint *)(lVar11 + 0x20) = uVar4 + 1;
      *(int *)(unaff_x19 + 0x20) = *(int *)(unaff_x19 + 0x20) + 1;
      *(int *)(unaff_x19 + 0x38) = *(int *)(unaff_x19 + 0x38) + 1;
      return 1;
    }
  }
LAB_04a6c5b8:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


