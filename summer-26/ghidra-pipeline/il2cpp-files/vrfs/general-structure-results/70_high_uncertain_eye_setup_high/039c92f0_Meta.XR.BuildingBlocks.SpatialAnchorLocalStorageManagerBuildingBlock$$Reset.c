/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.SpatialAnchorLocalStorageManagerBuildingBlock$$Reset
ENTRY_POINT: 039c92f0
PROGRAM: vrfs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_BuildingBlocks_SpatialAnchorLocalStorageManagerBuildingBlock__Reset(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  char in_NG;
  char in_OV;
  uint uVar4;
  ulong uVar5;
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  long unaff_x23;
  ulong unaff_x24;
  long unaff_x25;
  long lVar6;
  ulong uVar7;
  
  if (in_NG == in_OV) {
    if (unaff_x23 == 0) goto LAB_039c9400;
    uVar5 = (ulong)*(uint *)(unaff_x23 + 0x18);
    uVar7 = 0;
    lVar6 = unaff_x23 + 0x28;
    do {
      if (uVar5 <= uVar7)
      goto Meta_XR_BuildingBlocks_SpatialAnchorSpawnerBuildingBlock__get_AnchorPrefab;
      if (-1 < *(int *)(lVar6 + -8)) {
        uVar4 = FUN_028ff1f4(lVar6,*(undefined8 *)
                                    (*(long *)(*(long *)(unaff_x25 + 0x20) + 0xc0) + 0x130));
        uVar5 = (ulong)*(uint *)(unaff_x23 + 0x18);
        if (uVar5 <= uVar7)
        goto Meta_XR_BuildingBlocks_SpatialAnchorSpawnerBuildingBlock__get_AnchorPrefab;
        *(uint *)(lVar6 + -8) = uVar4 & 0x7fffffff;
      }
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 0xc;
    } while (unaff_x24 != uVar7);
  }
  if (0 < (int)unaff_x24) {
    if (unaff_x23 == 0) {
LAB_039c9400:
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    uVar4 = *(uint *)(unaff_x23 + 0x18);
    uVar7 = 0;
    do {
      if (uVar4 <= uVar7) {
Meta_XR_BuildingBlocks_SpatialAnchorSpawnerBuildingBlock__get_AnchorPrefab:
                    /* WARNING: Subroutine does not return */
        FUN_0160eebc();
      }
      iVar1 = *(int *)(unaff_x23 + uVar7 * 0xc + 0x20);
      if (-1 < iVar1) {
        if (unaff_x21 == 0) goto LAB_039c9400;
        iVar3 = 0;
        if (unaff_w20 != 0) {
          iVar3 = iVar1 / unaff_w20;
        }
        uVar2 = iVar1 - iVar3 * unaff_w20;
        if (*(uint *)(unaff_x21 + 0x18) <= uVar2)
        goto Meta_XR_BuildingBlocks_SpatialAnchorSpawnerBuildingBlock__get_AnchorPrefab;
        lVar6 = unaff_x21 + (long)(int)uVar2 * 4;
        *(int *)(unaff_x23 + uVar7 * 0xc + 0x24) = *(int *)(lVar6 + 0x20) + -1;
        *(int *)(lVar6 + 0x20) = (int)uVar7 + 1;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != unaff_x24);
  }
  *(long *)(unaff_x19 + 0x10) = unaff_x21;
  thunk_FUN_01656ef8((long *)(unaff_x19 + 0x10));
  *(long *)(unaff_x19 + 0x18) = unaff_x23;
  thunk_FUN_01656ef8();
  return;
}


