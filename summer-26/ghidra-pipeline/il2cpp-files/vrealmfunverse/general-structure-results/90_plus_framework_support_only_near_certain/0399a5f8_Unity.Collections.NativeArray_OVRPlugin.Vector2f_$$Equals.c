/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$Equals
ENTRY_POINT: 0399a5f8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__Equals
               (long param_1,int param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  
  if (param_2 < *(int *)(param_1 + 0x18)) {
    FUN_04d9c54c(0xf,0x15,0);
  }
  plVar2 = (long *)(param_1 + 0x10);
  if (*plVar2 != 0) {
    if (*(int *)(*plVar2 + 0x18) == param_2) {
      return;
    }
    lVar1 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
    if (param_2 < 1) {
      lVar1 = *(long *)(lVar1 + 0x10);
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_02b76218();
      }
      if (*(int *)(lVar1 + 0xe4) == 0) {
                    /* try { // try from 0399a6c8 to 03a9a6ef has its CatchHandler @ 0399a818 */
        thunk_FUN_02b9ad44();
      }
      lVar1 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x10);
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_02b76218();
      }
      lVar1 = **(long **)(lVar1 + 0xb8);
    }
    else {
      lVar1 = *(long *)(lVar1 + 0x18);
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_02b76218();
      }
      lVar1 = FUN_02b3c908(lVar1,param_2);
      if (0 < *(int *)(param_1 + 0x18)) {
        FUN_04d9e334(*plVar2,0,lVar1,0,*(int *)(param_1 + 0x18),0);
      }
    }
    *plVar2 = lVar1;
    thunk_FUN_02bb0e9c(plVar2,lVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


