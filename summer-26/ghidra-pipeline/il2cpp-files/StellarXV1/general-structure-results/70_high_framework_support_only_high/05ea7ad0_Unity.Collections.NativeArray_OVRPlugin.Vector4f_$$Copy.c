/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$Copy
ENTRY_POINT: 05ea7ad0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__Copy(long *param_1,long param_2)

{
  uint unaff_w20;
  uint unaff_w21;
  
  if (param_2 == 0) {
    if (unaff_w20 != 0 || unaff_w21 != 0) {
      FUN_0769a508(0);
    }
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    if ((*(uint *)(param_2 + 0x18) < unaff_w21) ||
       (*(uint *)(param_2 + 0x18) - unaff_w21 < unaff_w20)) {
      FUN_0769a508(0);
    }
    *param_1 = param_2;
    thunk_FUN_040ec700(param_1,param_2);
    *(uint *)(param_1 + 1) = unaff_w21;
    *(uint *)((long)param_1 + 0xc) = unaff_w20;
  }
  return;
}


