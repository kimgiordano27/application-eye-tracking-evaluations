/*
FUNCTION_NAME: FUN_034e0aa8
ENTRY_POINT: 034e0aa8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


long FUN_034e0aa8(long *param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  int local_14;
  
  if ((DAT_04832dae & 1) == 0) {
    thunk_FUN_01efb3a4(Method_OVRTask_FromGuid<bool>__);
    DAT_04832dae = 1;
  }
  local_14 = 0;
  if (param_1[7] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar2 = FUN_034a3c44(param_1[7],0);
  if ((uVar2 & 1) == 0) {
    uVar2 = (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
    if ((uVar2 & 1) != 0) {
      if ((char)param_1[8] == '\0') {
        lVar5 = param_1[0xd] + (long)*(int *)((long)param_1 + 100);
      }
      else {
        lVar5 = param_1[7];
        if (*(int *)(*(long *)Method_OVRTask_FromGuid<bool>__ + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        lVar5 = FUN_034e0684(lVar5,0,1,&local_14);
        if (local_14 != 0) {
          uVar3 = System_Threading_Tasks_DebuggerSupport__RemoveFromActiveTasksNonInlined
                            (param_1,param_1[6]);
          iVar1 = local_14;
          thunk_FUN_01efb3a4(Method_OVRTask_FromGuid<bool>__);
          FUN_01bc4c70();
          uVar3 = FUN_034dfb20(uVar3,iVar1);
          goto LAB_034e0bf8;
        }
      }
      return lVar5;
    }
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<double2>__ctor__);
    uVar3 = thunk_FUN_01f117cc();
    uVar4 = thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_VisualElementPanelActivator_OnEnter__);
    FUN_0356663c(uVar3,uVar4,0);
  }
  else {
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_ComputedStyle_ApplyPropertyAnimation__);
    uVar3 = thunk_FUN_01f117cc();
    uVar4 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_VisualElementFocusRing_GetFocusChangeDirection__
                              );
    FUN_03579608(uVar3,uVar4,0);
  }
LAB_034e0bf8:
  uVar4 = thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_VisualElementStyleSheetSet_Add__);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar3,uVar4);
}


