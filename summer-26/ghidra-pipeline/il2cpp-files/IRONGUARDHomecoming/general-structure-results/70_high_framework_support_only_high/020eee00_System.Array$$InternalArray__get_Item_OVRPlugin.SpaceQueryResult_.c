/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 020eee00
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


float System_Array__InternalArray__get_Item<OVRPlugin_SpaceQueryResult>
                (float param_1,undefined1 param_2 [16],undefined1 param_3 [16],float param_4)

{
  float in_s18;
  float fVar1;
  float in_stack_00000000;
  float in_stack_00000010;
  
  fVar1 = 1.0 - in_s18;
  return in_stack_00000000 * in_s18 * in_s18 * in_s18 +
         in_stack_00000010 * in_s18 * in_s18 * fVar1 * 3.0 +
         param_1 * fVar1 * fVar1 * fVar1 + param_4 * fVar1 * fVar1 * 3.0 * in_s18;
}


