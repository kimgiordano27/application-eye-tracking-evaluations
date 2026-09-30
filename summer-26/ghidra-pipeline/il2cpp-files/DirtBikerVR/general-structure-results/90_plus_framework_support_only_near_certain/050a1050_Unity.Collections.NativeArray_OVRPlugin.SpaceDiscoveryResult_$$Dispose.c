/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$Dispose
ENTRY_POINT: 050a1050
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 93
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__Dispose(undefined1 param_1 [16])

{
  int in_w8;
  long lVar1;
  undefined8 in_x9;
  long unaff_x19;
  int unaff_w29;
  
  lVar1 = unaff_x19 + (long)unaff_w29 * (long)in_w8;
  *(long *)(lVar1 + 0x28) = param_1._8_8_;
  *(long *)(lVar1 + 0x20) = param_1._0_8_;
  *(undefined8 *)(lVar1 + 0x30) = in_x9;
  return;
}


