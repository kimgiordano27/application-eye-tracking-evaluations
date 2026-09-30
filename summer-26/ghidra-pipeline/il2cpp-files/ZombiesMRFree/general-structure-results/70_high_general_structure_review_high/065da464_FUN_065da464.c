/*
FUNCTION_NAME: FUN_065da464
ENTRY_POINT: 065da464
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


void FUN_065da464(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  if ((DAT_073a07cd & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06f74390);
    FUN_02fe925c(Unity_Entities_FastEquality_ManagedCompareImpl<T>_var);
    FUN_02fe925c(PTR_DAT_06f6d668);
    FUN_02fe925c(PTR_DAT_06f98e18);
    FUN_02fe925c(UnityEngine_UIElements_NavigateFocusRing_FocusableHierarchyTraversal_var);
    FUN_02fe925c(Pathfinding_NavmeshCut_Contour_var);
    FUN_02fe925c(Pathfinding_NavmeshCutJobs_CalculateContour_0000091D_PostfixBurstDelegate_var);
    DAT_073a07cd = 1;
  }
  if (*(int *)(param_1 + 0x2c) == 1) {
    lVar4 = param_1 + 0x40;
    lVar3 = FUN_065377c4(lVar4,0);
    if (lVar3 == 0) {
      if (*(int *)(*(long *)PTR_DAT_06f6d668 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      FUN_068bda60(*(undefined8 *)
                    Pathfinding_NavmeshCutJobs_CalculateContour_0000091D_PostfixBurstDelegate_var,
                   param_1,0);
      goto LAB_065da64c;
    }
    if (*(char *)(param_1 + 0x78) == '\0') {
      if (*(long *)(param_1 + 0x80) == 0) {
        uVar2 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06f74390);
        FUN_05116a3c(uVar2,param_1,
                     *(undefined8 *)
                      UnityEngine_UIElements_NavigateFocusRing_FocusableHierarchyTraversal_var,0);
        *(undefined8 *)(param_1 + 0x80) = uVar2;
        thunk_FUN_03048534((long *)(param_1 + 0x80),uVar2);
      }
      lVar3 = FUN_065377c4(lVar4,0);
      if (lVar3 == 0) goto LAB_065da664;
      FUN_06524440(lVar3,*(undefined8 *)(param_1 + 0x80),0);
      *(undefined1 *)(param_1 + 0x78) = 1;
    }
    lVar4 = FUN_065377c4(lVar4,0);
    if (lVar4 == 0) {
LAB_065da664:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    FUN_06524c40(lVar4,0);
  }
  else if ((*(int *)(param_1 + 0x2c) == 0) && (*(char *)(param_1 + 0x79) == '\0')) {
    lVar4 = *(long *)(param_1 + 0x88);
    if (lVar4 == 0) {
      uVar2 = thunk_FUN_0301080c(*(undefined8 *)
                                  Unity_Entities_FastEquality_ManagedCompareImpl<T>_var);
      FUN_0511cd08(uVar2,param_1,*(undefined8 *)Pathfinding_NavmeshCut_Contour_var,0);
      *(undefined8 *)(param_1 + 0x88) = uVar2;
      thunk_FUN_03048534((long *)(param_1 + 0x88),uVar2);
      lVar4 = *(long *)(param_1 + 0x88);
    }
    if (*(int *)(*(long *)PTR_DAT_06f98e18 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    FUN_065d7e84(lVar4);
    *(undefined1 *)(param_1 + 0x79) = 1;
    iVar1 = FUN_065d803c();
    FUN_065d8094(iVar1 + 1);
  }
LAB_065da64c:
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}


