/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$AsReadOnlySpan
ENTRY_POINT: 0399ae34
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__AsReadOnlySpan
               (long param_1,int param_2,int param_3,void *param_4)

{
  undefined8 uVar1;
  
  if (param_2 < 0) {
    FUN_04d9c908(0);
  }
  if (param_3 < 0) {
    FUN_04d9c54c(0x10,4,0);
  }
  if (*(int *)(param_1 + 0x18) - param_2 < param_3) {
    Oculus_Interaction_SecondaryInteractorConnection__Start(0x17,0);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  memcpy(&stack0x00000000,param_4,0x1b0);
  FUN_03256a9c(uVar1,param_2,param_3);
  return;
}


