/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$Copy
ENTRY_POINT: 02e077b0
PROGRAM: gunraiders-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__Copy(long param_1)

{
  long in_x9;
  long unaff_x20;
  
  (**(code **)(param_1 + in_x9 * 0x10 + 0x138))();
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01cf64e4();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c01e80();
}


