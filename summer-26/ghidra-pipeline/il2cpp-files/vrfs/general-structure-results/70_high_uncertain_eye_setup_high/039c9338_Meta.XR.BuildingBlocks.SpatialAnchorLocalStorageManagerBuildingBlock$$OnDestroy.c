/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.SpatialAnchorLocalStorageManagerBuildingBlock$$OnDestroy
ENTRY_POINT: 039c9338
PROGRAM: vrfs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_BuildingBlocks_SpatialAnchorLocalStorageManagerBuildingBlock__OnDestroy(ulong param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  uint in_w9;
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  long unaff_x23;
  ulong unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long lVar7;
  ulong unaff_x27;
  
  while( true ) {
    *(uint *)(unaff_x26 + -8) = in_w9;
    lVar7 = unaff_x26;
    do {
      unaff_x27 = unaff_x27 + 1;
      unaff_x26 = lVar7 + 0xc;
      if (unaff_x24 == unaff_x27) {
        if ((int)unaff_x24 < 1) goto LAB_039c93c0;
        if (unaff_x23 == 0) goto LAB_039c9400;
        uVar5 = *(uint *)(unaff_x23 + 0x18);
        uVar6 = 0;
        goto LAB_039c9364;
      }
      if ((param_1 & 0xffffffff) <= unaff_x27)
      goto Meta_XR_BuildingBlocks_SpatialAnchorSpawnerBuildingBlock__get_AnchorPrefab;
      piVar1 = (int *)(lVar7 + 4);
      lVar7 = unaff_x26;
    } while (*piVar1 < 0);
    uVar5 = FUN_028ff1f4(unaff_x26,
                         *(undefined8 *)(*(long *)(*(long *)(unaff_x25 + 0x20) + 0xc0) + 0x130));
    param_1 = (ulong)*(uint *)(unaff_x23 + 0x18);
    if (param_1 <= unaff_x27) break;
    in_w9 = uVar5 & 0x7fffffff;
  }
Meta_XR_BuildingBlocks_SpatialAnchorSpawnerBuildingBlock__get_AnchorPrefab:
                    /* WARNING: Subroutine does not return */
  FUN_0160eebc();
LAB_039c9364:
  if (uVar5 <= uVar6)
  goto Meta_XR_BuildingBlocks_SpatialAnchorSpawnerBuildingBlock__get_AnchorPrefab;
  iVar2 = *(int *)(unaff_x23 + uVar6 * 0xc + 0x20);
  if (-1 < iVar2) {
                    /* catch() { ... } // from try @ 039c9478 with catch @ 039c9378
                       catch() { ... } // from try @ 039c94f4 with catch @ 039c9378
                       catch() { ... } // from try @ 039c9538 with catch @ 039c9378
                       catch() { ... } // from try @ 039c95a0 with catch @ 039c9378 */
    if (unaff_x21 == 0) {
LAB_039c9400:
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    iVar4 = 0;
    if (unaff_w20 != 0) {
      iVar4 = iVar2 / unaff_w20;
    }
    uVar3 = iVar2 - iVar4 * unaff_w20;
    if (*(uint *)(unaff_x21 + 0x18) <= uVar3)
    goto Meta_XR_BuildingBlocks_SpatialAnchorSpawnerBuildingBlock__get_AnchorPrefab;
    lVar7 = unaff_x21 + (long)(int)uVar3 * 4;
    *(int *)(unaff_x23 + uVar6 * 0xc + 0x24) = *(int *)(lVar7 + 0x20) + -1;
    *(int *)(lVar7 + 0x20) = (int)uVar6 + 1;
  }
  uVar6 = uVar6 + 1;
  if (uVar6 == unaff_x24) {
LAB_039c93c0:
    *(long *)(unaff_x19 + 0x10) = unaff_x21;
    thunk_FUN_01656ef8((long *)(unaff_x19 + 0x10));
    *(long *)(unaff_x19 + 0x18) = unaff_x23;
    thunk_FUN_01656ef8();
    return;
  }
  goto LAB_039c9364;
}


