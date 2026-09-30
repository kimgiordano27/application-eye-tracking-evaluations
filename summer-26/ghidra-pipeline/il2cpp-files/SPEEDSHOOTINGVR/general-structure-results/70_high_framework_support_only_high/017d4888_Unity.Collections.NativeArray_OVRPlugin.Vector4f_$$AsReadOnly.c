/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$AsReadOnly
ENTRY_POINT: 017d4888
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__AsReadOnly
               (long param_1,int param_2,int param_3,undefined8 param_4,long param_5)

{
  if (param_2 < 0) {
    FUN_01d69368(0);
  }
  if (param_3 < 0) {
    FUN_01d68fac(0x10,4,0);
  }
  if (*(int *)(param_1 + 0x18) - param_2 < param_3) {
    FUN_01d68ae8(0x17,0);
  }
  if (1 < param_3) {
    FUN_0117a7c4(*(undefined8 *)(param_1 + 0x10),param_2,param_3,param_4,
                 *(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 400));
  }
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  return;
}


