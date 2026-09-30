/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$.ctor
ENTRY_POINT: 03cb322c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>___ctor(undefined8 param_1)

{
  int iVar1;
  int in_w8;
  long unaff_x19;
  int unaff_w21;
  
  Newtonsoft_Json_Linq_JObject__LoadAsync(param_1,unaff_w21,in_w8 - unaff_w21,0);
  iVar1 = *(int *)(unaff_x19 + 0x18);
  *(int *)(unaff_x19 + 0x18) = unaff_w21;
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  return iVar1 - unaff_w21;
}


