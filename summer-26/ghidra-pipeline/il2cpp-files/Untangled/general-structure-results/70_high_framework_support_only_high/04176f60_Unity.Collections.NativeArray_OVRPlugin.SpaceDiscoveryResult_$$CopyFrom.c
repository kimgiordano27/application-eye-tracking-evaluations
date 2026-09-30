/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$CopyFrom
ENTRY_POINT: 04176f60
PROGRAM: Untangled-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__CopyFrom
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000030;
  
  uStack0000000000000000 = param_2;
  uStack0000000000000010 = param_1;
  uStack0000000000000020 = param_2;
  uStack0000000000000030 = param_1;
  FUN_03beae78(*(undefined8 *)(unaff_x20 + 0x10),param_4,0,*(undefined4 *)(unaff_x20 + 0x18),
               *(undefined8 *)
                (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xd0)
                                    + 0x20) + 0xc0) + 0x150));
  return;
}


