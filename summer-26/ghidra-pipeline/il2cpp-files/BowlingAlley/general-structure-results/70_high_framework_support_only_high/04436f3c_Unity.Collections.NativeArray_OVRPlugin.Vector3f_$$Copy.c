/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$Copy
ENTRY_POINT: 04436f3c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Copy
               (long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  
  if (param_1 != 0) {
    lVar1 = *(long *)(param_4 + 0x20);
    uVar2 = *(ulong *)(param_1 + 0x18);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_032934b8();
    }
    FUN_04437338(param_1,0,param_2,param_3,0,uVar2 & 0xffffffff,
                 *(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0xc0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


