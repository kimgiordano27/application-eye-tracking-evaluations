/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$Copy
ENTRY_POINT: 03b60ed8
PROGRAM: hellodot-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Copy(void)

{
  undefined8 *puVar1;
  long unaff_x19;
  long unaff_x21;
  int unaff_w24;
  
  puVar1 = (undefined8 *)FUN_02ce0a7c();
  (*(code *)*puVar1)();
  if (unaff_x21 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02cbedc4();
  }
  if (unaff_w24 != 5) {
    if (unaff_w24 != 0) {
      return;
    }
    FUN_03b61948();
  }
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  return;
}


