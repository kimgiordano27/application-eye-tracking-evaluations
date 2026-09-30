/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$CopyTo
ENTRY_POINT: 03c6d614
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__CopyTo(long param_1,int param_2)

{
  int unaff_w21;
  
  if (param_2 < 0) {
    FUN_05027ebc(0);
  }
  if (unaff_w21 < 0) {
    FUN_05027b00(0x10,4,0);
  }
  if (*(int *)(param_1 + 0x18) - param_2 < unaff_w21) {
    FUN_05027654(0x17,0);
  }
  if (1 < unaff_w21) {
    FUN_032b5834(*(undefined8 *)(param_1 + 0x10),param_2,unaff_w21);
  }
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  return;
}


