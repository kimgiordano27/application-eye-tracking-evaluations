/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$CopySafe
ENTRY_POINT: 01995ca4
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__CopySafe
              (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 in_w9;
  long in_x10;
  long unaff_x19;
  
                    /* try { // try from 01995ca4 to 01a95cff has its CatchHandler @ 01995b78 */
  param_1 = param_1 + in_x10 * 0x10;
  *(undefined4 *)(unaff_x19 + 0x18) = in_w9;
  *(undefined8 *)(param_1 + 0x20) = param_3;
  *(undefined8 *)(param_1 + 0x28) = param_4;
  return *(int *)(unaff_x19 + 0x18) + -1;
}


