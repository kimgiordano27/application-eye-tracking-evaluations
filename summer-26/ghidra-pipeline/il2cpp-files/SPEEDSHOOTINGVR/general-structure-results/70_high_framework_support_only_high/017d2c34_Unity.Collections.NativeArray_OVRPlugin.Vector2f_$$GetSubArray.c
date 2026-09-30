/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$GetSubArray
ENTRY_POINT: 017d2c34
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__GetSubArray(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined4 unaff_w22;
  
  uVar1 = FUN_0103c244();
  uVar1 = FUN_00fdc388(uVar1,unaff_w22);
  if (0 < *(int *)(unaff_x20 + 0x18)) {
    FUN_01d6ade4(*unaff_x19,0,uVar1,0,*(int *)(unaff_x20 + 0x18),0);
  }
  *unaff_x19 = uVar1;
  thunk_FUN_0106e12c();
  return;
}


