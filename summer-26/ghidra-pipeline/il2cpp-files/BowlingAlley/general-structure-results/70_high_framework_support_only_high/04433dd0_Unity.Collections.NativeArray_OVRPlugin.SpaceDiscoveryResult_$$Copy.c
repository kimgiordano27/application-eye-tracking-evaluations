/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$Copy
ENTRY_POINT: 04433dd0
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__Copy(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  long *unaff_x19;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  if ((*(byte *)(param_2 + 0x135) & 1) == 0) {
    FUN_032934b8();
  }
  if (lVar1 == *unaff_x19) {
    bVar3 = (int)unaff_x19[1] == (int)lVar2;
  }
  else {
    bVar3 = false;
  }
                    /* try { // try from 04433e00 to 04533e5b has its CatchHandler @ 04433e5c */
  return bVar3;
}


