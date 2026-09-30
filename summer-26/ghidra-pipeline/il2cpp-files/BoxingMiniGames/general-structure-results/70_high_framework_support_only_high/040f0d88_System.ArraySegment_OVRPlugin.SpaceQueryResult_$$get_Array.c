/*
FUNCTION_NAME: System.ArraySegment<OVRPlugin.SpaceQueryResult>$$get_Array
ENTRY_POINT: 040f0d88
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_ArraySegment<OVRPlugin_SpaceQueryResult>__get_Array
               (long param_1,undefined1 param_2 [16],int param_3)

{
  int in_w9;
  undefined8 *puVar1;
  undefined8 in_x10;
  
  puVar1 = (undefined8 *)(param_1 + (long)param_3 * (long)in_w9);
  puVar1[2] = in_x10;
  puVar1[1] = param_2._8_8_;
  *puVar1 = param_2._0_8_;
  *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xc0) + 1;
  return;
}


