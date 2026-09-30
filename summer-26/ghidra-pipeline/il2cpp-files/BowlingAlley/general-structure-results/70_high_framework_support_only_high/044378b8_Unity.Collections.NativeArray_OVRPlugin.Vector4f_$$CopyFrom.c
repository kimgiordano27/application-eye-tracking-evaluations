/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$CopyFrom
ENTRY_POINT: 044378b8
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__CopyFrom(long *param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((*(byte *)(*(long *)(param_2 + 0x20) + 0x135) & 1) == 0) {
    FUN_032934b8(*(long *)(param_2 + 0x20));
  }
  if (*param_1 != 0) {
    iVar1 = *(int *)((long)param_1 + 0xc);
    if (iVar1 == 0) {
      thunk_FUN_032e1da0(PTR_DAT_07279578);
      uVar2 = thunk_FUN_032a56a0();
      uVar3 = thunk_FUN_032e1da0(PTR_DAT_072835b8);
      FUN_0592371c(uVar2,uVar3,0);
                    /* WARNING: Subroutine does not return */
      FUN_032d5dbc(uVar2,param_2);
    }
    if (1 < iVar1) {
      FUN_06baa93c(*param_1,iVar1,0);
      *(undefined4 *)((long)param_1 + 0xc) = 0;
    }
    *param_1 = 0;
  }
  return;
}


