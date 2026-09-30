/*
FUNCTION_NAME: UniRx.ReactiveProperty<Vector2>$$set_Value
ENTRY_POINT: 0716dbdc
PROGRAM: Hyper-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void UniRx_ReactiveProperty<Vector2>__set_Value(long *param_1,void *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined1 auStack_7c [76];
  
  if (*param_1 != 0) {
    iVar1 = thunk_FUN_04980658(*param_1 + 8,0);
    if ((long *)*param_1 != (long *)0x0) {
      lVar2 = *(long *)*param_1;
      memcpy(auStack_7c,param_2,0x4c);
      if ((*(ushort *)(*(long *)(param_3 + 0x20) + 0x135) & 1) == 0) {
        FUN_04980b34();
      }
      memcpy((void *)(lVar2 + (long)(iVar1 + -1) * 0x4c),auStack_7c,0x4c);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


