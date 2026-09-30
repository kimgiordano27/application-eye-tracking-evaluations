/*
FUNCTION_NAME: FUN_0317aa68
ENTRY_POINT: 0317aa68
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_1;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_0317aa68(long param_1,int param_2,int param_3,long param_4)

{
  if (param_2 < 0) {
    OVRManager_PassthroughCapabilities___ctor(0);
  }
  if (param_3 < 0) {
                    /* try { // try from 0317aafc to 0327ab4f has its CatchHandler @ 0317abc8 */
    FUN_033b3224(0x10,4,0);
  }
  if (*(int *)(param_1 + 0x18) - param_2 < param_3) {
    FUN_033b2d60(0x17,0);
  }
  if (1 < param_3) {
                    /* try { // try from 0317aab8 to 0327aabb has its CatchHandler @ 0317abc4 */
    UnityEngine_NoAllocHelpers__EnsureListElemCount<Vector3>
              (*(undefined8 *)(param_1 + 0x10),param_2,param_3,
               *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x188));
  }
                    /* try { // try from 0317aad8 to 0327aae3 has its CatchHandler @ 0317abbc */
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  return;
}


