/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<OVRPlugin.Vector4f>
ENTRY_POINT: 01ec4940
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


float System_Array__InternalArray__get_Item<OVRPlugin_Vector4f>(void)

{
  int in_w8;
  float fVar1;
  float fVar2;
  float unaff_s8;
  float unaff_s9;
  
  if (in_w8 == 0) {
    thunk_FUN_01dc4f30();
  }
  fVar1 = fmodf(ABS(unaff_s9),unaff_s8);
  fVar2 = -(unaff_s8 - fVar1);
  if (fVar1 <= unaff_s8 * 0.5) {
    fVar2 = fVar1;
  }
  if (unaff_s9 < 0.0) {
    fVar2 = -fVar2;
  }
  return fVar2;
}


