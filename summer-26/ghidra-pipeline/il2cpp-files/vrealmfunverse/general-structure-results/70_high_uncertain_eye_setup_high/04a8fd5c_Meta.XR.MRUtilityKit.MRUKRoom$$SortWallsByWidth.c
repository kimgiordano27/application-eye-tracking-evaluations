/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$SortWallsByWidth
ENTRY_POINT: 04a8fd5c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKRoom__SortWallsByWidth(undefined8 param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long unaff_x19;
  int unaff_w20;
  undefined8 *unaff_x22;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  lVar4 = FUN_02b3c908(param_1,unaff_w20);
  lVar5 = FUN_02b3c908(*unaff_x22,unaff_w20);
  iVar9 = *(int *)(unaff_x19 + 0x24);
  if (iVar9 < 1) {
    uVar6 = 0;
  }
  else {
    uVar7 = 0;
    uVar6 = 0;
    lVar8 = 0x20;
    do {
      lVar11 = *(long *)(unaff_x19 + 0x18);
      if (lVar11 == 0) {
LAB_04a8feb4:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      if (*(uint *)(lVar11 + 0x18) <= uVar7) goto LAB_04a8feb0;
      if (-1 < *(int *)(lVar11 + lVar8)) {
        if (lVar4 == 0) goto LAB_04a8feb4;
        if (*(uint *)(lVar4 + 0x18) <= uVar6) {
LAB_04a8feb0:
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        lVar10 = (long)(int)uVar6;
        puVar1 = (undefined8 *)(lVar11 + lVar8);
        uVar14 = *puVar1;
        uVar13 = puVar1[3];
        uVar12 = puVar1[2];
        lVar11 = lVar4 + lVar10 * 0x20;
        *(undefined8 *)(lVar11 + 0x28) = puVar1[1];
        *(undefined8 *)(lVar11 + 0x20) = uVar14;
        *(undefined8 *)(lVar11 + 0x38) = uVar13;
        *(undefined8 *)(lVar11 + 0x30) = uVar12;
        if (*(uint *)(lVar4 + 0x18) <= uVar6) goto LAB_04a8feb0;
        if (lVar5 == 0) goto LAB_04a8feb4;
        iVar9 = *(int *)(lVar4 + 0x20 + lVar10 * 0x20);
        iVar3 = 0;
        if (unaff_w20 != 0) {
          iVar3 = iVar9 / unaff_w20;
        }
        uVar2 = iVar9 - iVar3 * unaff_w20;
        if (*(uint *)(lVar5 + 0x18) <= uVar2) goto LAB_04a8feb0;
        lVar11 = lVar5 + (long)(int)uVar2 * 4;
        uVar6 = uVar6 + 1;
        *(int *)(lVar4 + 0x20 + lVar10 * 0x20 + 4) = *(int *)(lVar11 + 0x20) + -1;
        *(uint *)(lVar11 + 0x20) = uVar6;
        iVar9 = *(int *)(unaff_x19 + 0x24);
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 0x20;
    } while ((long)uVar7 < (long)iVar9);
  }
  *(uint *)(unaff_x19 + 0x24) = uVar6;
  *(long *)(unaff_x19 + 0x18) = lVar4;
  thunk_FUN_02bb0e9c((long *)(unaff_x19 + 0x18),lVar4);
  *(long *)(unaff_x19 + 0x10) = lVar5;
  thunk_FUN_02bb0e9c((long *)(unaff_x19 + 0x10),lVar5);
  *(undefined4 *)(unaff_x19 + 0x28) = 0xffffffff;
  return;
}


