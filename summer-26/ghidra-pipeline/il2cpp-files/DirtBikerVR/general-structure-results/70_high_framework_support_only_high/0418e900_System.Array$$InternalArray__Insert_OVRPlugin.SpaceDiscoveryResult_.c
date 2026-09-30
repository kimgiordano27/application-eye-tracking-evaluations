/*
FUNCTION_NAME: System.Array$$InternalArray__Insert<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 0418e900
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1  [16]
System_Array__InternalArray__Insert<OVRPlugin_SpaceDiscoveryResult>(long param_1,void *param_2)

{
  long in_x9;
  long unaff_x20;
  undefined1 auVar1 [16];
  undefined1 in_stack_00000000 [12];
  
  memcpy(param_2,(void *)(unaff_x20 + (ulong)*(uint *)(param_1 + 0x104) * in_x9 + 0x20),
         (ulong)*(uint *)(param_1 + 0x104));
  auVar1._12_4_ = 0;
  auVar1._0_12_ = in_stack_00000000;
  return auVar1;
}


