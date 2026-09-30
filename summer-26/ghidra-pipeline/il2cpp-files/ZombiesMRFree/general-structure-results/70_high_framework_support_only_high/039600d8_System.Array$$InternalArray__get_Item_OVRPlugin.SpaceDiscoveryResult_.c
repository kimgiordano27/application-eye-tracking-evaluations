/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 039600d8
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__get_Item<OVRPlugin_SpaceDiscoveryResult>
               (undefined1 param_1 [16],undefined1 param_2 [16])

{
  undefined8 *unaff_x20;
  
  unaff_x20[1] = param_1._8_8_;
  *unaff_x20 = param_1._0_8_;
  unaff_x20[3] = param_2._8_8_;
  unaff_x20[2] = param_2._0_8_;
  return;
}


