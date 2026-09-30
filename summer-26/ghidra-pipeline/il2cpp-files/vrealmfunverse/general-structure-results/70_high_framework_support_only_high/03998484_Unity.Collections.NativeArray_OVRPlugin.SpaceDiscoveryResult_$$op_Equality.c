/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$op_Equality
ENTRY_POINT: 03998484
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__op_Equality
               (undefined8 param_1,undefined8 param_2)

{
  int unaff_w20;
  int unaff_w22;
  long unaff_x23;
  
  FUN_04d9c54c(param_1,param_2,0);
  if (*(int *)(unaff_x23 + 0x18) - unaff_w20 < unaff_w22) {
    Oculus_Interaction_SecondaryInteractorConnection__Start(0x17,0);
  }
  FUN_03256884(*(undefined8 *)(unaff_x23 + 0x10),unaff_w20,unaff_w22);
  return;
}


