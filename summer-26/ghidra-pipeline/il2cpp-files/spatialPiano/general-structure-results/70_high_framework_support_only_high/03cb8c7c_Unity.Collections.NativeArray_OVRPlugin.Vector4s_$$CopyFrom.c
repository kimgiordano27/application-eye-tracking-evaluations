/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$CopyFrom
ENTRY_POINT: 03cb8c7c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__CopyFrom
               (undefined8 param_1,undefined8 param_2)

{
  long unaff_x19;
  int unaff_w20;
  int unaff_w21;
  long unaff_x22;
  
  FUN_050f6004(param_1,param_2,0);
  if (*(int *)(unaff_x19 + 0x18) - unaff_w21 < unaff_w20) {
    FUN_050f5b58(0x17,0);
  }
  if (1 < unaff_w20) {
    FUN_032a94c4(*(undefined8 *)(unaff_x19 + 0x10),unaff_w21,unaff_w20,
                 *(undefined8 *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x180));
  }
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  return;
}


