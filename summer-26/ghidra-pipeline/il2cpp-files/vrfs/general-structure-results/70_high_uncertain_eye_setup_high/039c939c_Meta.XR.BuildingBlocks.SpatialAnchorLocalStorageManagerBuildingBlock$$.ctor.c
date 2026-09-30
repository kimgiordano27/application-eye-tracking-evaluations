/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.SpatialAnchorLocalStorageManagerBuildingBlock$$.ctor
ENTRY_POINT: 039c939c
PROGRAM: vrfs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_BuildingBlocks_SpatialAnchorLocalStorageManagerBuildingBlock___ctor(ulong param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  ulong in_x9;
  long in_x10;
  long in_x11;
  int in_w12;
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  long unaff_x23;
  ulong unaff_x24;
  
  while( true ) {
    lVar2 = param_1 * in_x10;
    param_1 = param_1 + 1;
                    /* try { // try from 039c93a8 to 03ac93eb has its CatchHandler @ 039c9504 */
    *(int *)(unaff_x23 + lVar2 + 0x24) = in_w12 + -1;
    *(int *)(in_x11 + 0x20) = (int)param_1;
    while( true ) {
      if (param_1 == unaff_x24) {
        *(long *)(unaff_x19 + 0x10) = unaff_x21;
        thunk_FUN_01656ef8((long *)(unaff_x19 + 0x10));
        *(long *)(unaff_x19 + 0x18) = unaff_x23;
        thunk_FUN_01656ef8();
        return;
      }
      if (in_x9 <= param_1)
      goto Meta_XR_BuildingBlocks_SpatialAnchorSpawnerBuildingBlock__get_AnchorPrefab;
      iVar1 = *(int *)(unaff_x23 + param_1 * in_x10 + 0x20);
      if (-1 < iVar1) break;
      param_1 = param_1 + 1;
    }
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 039c9400 to 03ac9407 has its CatchHandler @ 039c9478 */
      FUN_0160eeb4();
    }
    iVar4 = 0;
    if (unaff_w20 != 0) {
      iVar4 = iVar1 / unaff_w20;
    }
    uVar3 = iVar1 - iVar4 * unaff_w20;
    if (*(uint *)(unaff_x21 + 0x18) <= uVar3) break;
    in_x11 = unaff_x21 + (long)(int)uVar3 * 4;
    in_w12 = *(int *)(in_x11 + 0x20);
  }
Meta_XR_BuildingBlocks_SpatialAnchorSpawnerBuildingBlock__get_AnchorPrefab:
                    /* WARNING: Subroutine does not return */
  FUN_0160eebc();
}


