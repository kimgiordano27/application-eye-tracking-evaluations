/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$Allocate
ENTRY_POINT: 03b5e8a8
PROGRAM: hellodot-libil2cpp.so
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
Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Allocate(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 unaff_w21;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02ce0978();
  }
  uVar2 = FUN_02ce7ad4(lVar1,unaff_w21);
  FUN_04f53d58(*(undefined8 *)(param_2 + 0x10),0,uVar2,0,*(undefined4 *)(param_2 + 0x18),0);
  return uVar2;
}


