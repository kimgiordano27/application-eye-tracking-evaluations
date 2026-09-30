/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 01ec475c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__get_Item<OVRPlugin_SpaceQueryResult>(float param_1)

{
  float fVar1;
  long unaff_x19;
  ulong unaff_d8;
  
  if ((float)unaff_d8 <= param_1) {
    fVar1 = *(float *)(unaff_x19 + 400);
    if (param_1 <= *(float *)(unaff_x19 + 400)) {
      fVar1 = param_1;
    }
    unaff_d8 = (ulong)(uint)fVar1;
  }
  FUN_01ec3cbc(unaff_d8);
  FUN_01ec3b28(((float)unaff_d8 - *(float *)(unaff_x19 + 0x194)) /
               (*(float *)(unaff_x19 + 400) - *(float *)(unaff_x19 + 0x194)));
  return;
}


