/*
FUNCTION_NAME: Unity.Collections.NativeArray<XRRaycastHit>$$Copy
ENTRY_POINT: 0232f160
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 136
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;ray_or_cast_sink_hits_4;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


void Unity_Collections_NativeArray<XRRaycastHit>__Copy
               (long param_1,int param_2,int param_3,void *param_4)

{
  undefined8 uVar1;
  
  if (param_2 < 0) {
    OVRManager_PassthroughCapabilities___ctor(0);
  }
  if (param_3 < 0) {
    FUN_033b3224(0x10,4,0);
  }
  if (*(int *)(param_1 + 0x18) - param_2 < param_3) {
    FUN_033b2d60(0x17,0);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  memcpy(&stack0x00000000,param_4,0x60);
  memcpy(&stack0x00000060,&stack0x00000000,0x60);
  FUN_02046c28(uVar1,param_2,param_3,&stack0x00000060);
  return;
}


