/*
FUNCTION_NAME: FUN_051df508
ENTRY_POINT: 051df508
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x051df744) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

bool FUN_051df508(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  int iVar11;
  int iVar12;
  
  if ((DAT_06a51f1d & 1) == 0) {
    FUN_02d4dc40(UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_SortedColumnState_var);
    FUN_02d4dc40(
                UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_NativePassCompiler_RenderGraphInputInfo_var
                );
    FUN_02d4dc40(UnityEngine_UIElements_NavigateFocusRing_FocusableHierarchyTraversal_var);
    FUN_02d4dc40(PlayFab_EconomyModels_SearchItemsRequest_var);
    DAT_06a51f1d = 1;
  }
  if (*(char *)(param_1 + 0x40) != '\0') {
    FUN_051debe0(param_1);
    if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    uVar8 = FUN_051b22c4(*(long *)(param_1 + 0x28),0);
    if ((uVar8 & 1) != 0) {
      uVar5 = FUN_051b2544(param_1,0);
      uVar10 = *(undefined8 *)(param_1 + 0x128);
      *(undefined4 *)(param_1 + 0xd8) = uVar5;
      thunk_FUN_02d5b8bc(uVar10,0);
      puVar3 = UnityEngine_UIElements_NavigateFocusRing_FocusableHierarchyTraversal_var;
      puVar2 = PlayFab_EconomyModels_SearchItemsRequest_var;
      lVar9 = *(long *)(param_1 + 0x128);
      if (lVar9 == 0) {
LAB_051df738:
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      if (*(int *)(lVar9 + 0x18) < 1) {
        iVar11 = 0;
        bVar4 = true;
      }
      else {
        iVar12 = 0;
        iVar1 = 0;
        do {
          iVar11 = iVar1;
          lVar9 = FUN_036a5b38(lVar9,iVar11,*(undefined8 *)puVar3);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          iVar6 = FUN_051df7ac(param_1,*(undefined8 *)(lVar9 + 0x18),*(undefined4 *)(lVar9 + 0x14));
          if (iVar6 == 4) {
            lVar9 = *(long *)(param_1 + 0x128);
            bVar4 = false;
            goto joined_r0x051df6a8;
          }
          iVar1 = *(int *)(lVar9 + 0x14);
                    /* try { // try from 051df624 to 052df62b has its CatchHandler @ 051df750 */
          if (iVar6 != 5) {
                    /* try { // try from 051df62c to 052df64f has its CatchHandler @ 051df758 */
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_02dabd98();
            }
            FUN_051b42e8(lVar9,0);
          }
          iVar7 = FUN_051aea98(param_1,0);
                    /* try { // try from 051df650 to 052df663 has its CatchHandler @ 051df754 */
          lVar9 = *(long *)(param_1 + 0x128);
                    /* try { // try from 051df664 to 052df76f has its CatchHandler @ 051df2e0 */
          if ((iVar6 == 5) || (iVar12 = iVar1 + iVar12, iVar7 <= iVar12)) break;
          if (lVar9 == 0) goto LAB_051df738;
          iVar1 = iVar11 + 1;
        } while (iVar11 + 1 < *(int *)(lVar9 + 0x18));
        iVar11 = iVar11 + 1;
        bVar4 = iVar6 - 6U < 0xfffffffe;
      }
joined_r0x051df6a8:
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      FUN_036a7530(lVar9,0,iVar11,
                   *(undefined8 *)
                    UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_SortedColumnState_var
                  );
      *(int *)(param_1 + 0xe0) = *(int *)(param_1 + 0xe0) - iVar11;
      if (bVar4) {
        if (*(long *)(param_1 + 0x128) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        bVar4 = 0 < *(int *)(*(long *)(param_1 + 0x128) + 0x18);
      }
      else {
        bVar4 = false;
      }
      RootMotion_FinalIK_GrounderQuadruped_Foot___ctor(uVar10,0);
      return bVar4;
    }
  }
  return false;
}


