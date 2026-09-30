/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$CopyFrom
ENTRY_POINT: 03cb47c8
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


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__CopyFrom
               (long param_1,void *param_2,long param_3)

{
  undefined4 uVar1;
  long lVar2;
  
                    /* try { // try from 03cb47c8 to 03db4823 has its CatchHandler @ 03cb46a4 */
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  lVar2 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
  memcpy(&stack0x00000008,param_2,0x48);
  FUN_03cb4700(param_1,0,uVar1,&stack0x00000008,0,*(undefined8 *)(lVar2 + 0xc0));
  return;
}


