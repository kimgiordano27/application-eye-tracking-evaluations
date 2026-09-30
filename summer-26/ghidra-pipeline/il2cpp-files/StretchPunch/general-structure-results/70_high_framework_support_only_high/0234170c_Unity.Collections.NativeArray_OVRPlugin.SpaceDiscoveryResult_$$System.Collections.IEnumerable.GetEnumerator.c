/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 0234170c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__System_Collections_IEnumerable_GetEnumerator
          (long param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined4 unaff_w21;
  
  if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_01dde7f8();
  }
  uVar1 = FUN_01d7d9bc(param_1,unaff_w21);
  FUN_033b4f38(*(undefined8 *)(unaff_x20 + 0x10),0,uVar1,0,*(undefined4 *)(unaff_x20 + 0x18),0);
  return uVar1;
}


