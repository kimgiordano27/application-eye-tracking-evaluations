/*
FUNCTION_NAME: FUN_069b4484
ENTRY_POINT: 069b4484
PROGRAM: waitwhat-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void FUN_069b4484(long *param_1,long param_2,int param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((DAT_0755bea8 & 1) == 0) {
    FUN_03188a78(PTR_DAT_070c2418);
    FUN_03188a78(Method_UnityEngine_UIElements_BaseField<Vector2>_set_value__);
    DAT_0755bea8 = 1;
  }
  uVar1 = (**(code **)(*param_1 + 0x1e8))(param_1,*(undefined8 *)(*param_1 + 0x1f0));
  if ((uVar1 & 1) == 0) {
    uVar2 = FUN_069b22cc(uVar1,param_1);
  }
  else {
    if ((param_2 == 0) || (param_3 == 0)) {
      if (*(int *)(*(long *)PTR_DAT_070c2418 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      FUN_0698f1f0(*(undefined8 *)Method_UnityEngine_UIElements_BaseField<Vector2>_set_value__,
                   param_1,0);
      return;
    }
    uVar1 = FUN_069b320c(param_1,param_2,(long)param_3);
    if ((uVar1 & 1) != 0) {
      return;
    }
    thunk_FUN_031edd38(PTR_DAT_070f2748);
    uVar2 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed();
    uVar3 = thunk_FUN_031edd38(
                              Method_UnityEngine_UIElements_BaseField<Vector2Int>_get_labelElement__
                              );
    FUN_069d8918(uVar2,uVar3,0);
  }
  uVar3 = thunk_FUN_031edd38(Method_UnityEngine_UIElements_BaseField<Vector2Int>_get_visualInput__);
                    /* WARNING: Subroutine does not return */
  FUN_03188b9c(uVar2,uVar3);
}


