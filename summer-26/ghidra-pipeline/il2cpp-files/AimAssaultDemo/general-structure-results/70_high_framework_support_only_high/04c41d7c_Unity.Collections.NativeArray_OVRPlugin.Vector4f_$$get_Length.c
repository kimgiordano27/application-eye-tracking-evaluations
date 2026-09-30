/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$get_Length
ENTRY_POINT: 04c41d7c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 Unity_Collections_NativeArray<OVRPlugin_Vector4f>__get_Length(ulong param_1,long param_2)

{
  long unaff_x20;
  
  if ((param_1 & 1) == 0) {
    FUN_0373b518(PTR_DAT_07d98450);
    *(undefined1 *)(unaff_x20 + 0x7c3) = 1;
  }
  if (param_2 != 0) {
    return *(undefined8 *)(param_2 + 0x20);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


