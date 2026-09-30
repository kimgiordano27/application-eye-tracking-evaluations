/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$get_IsCreated
ENTRY_POINT: 05f175c4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__get_IsCreated
               (long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long in_x9;
  long unaff_x19;
  
  lVar1 = *(long *)(param_1 + 0xb0) + 8;
  do {
    if (*(long *)(lVar1 + -8) == param_3) goto LAB_05f17600;
    in_x9 = in_x9 + -1;
    lVar1 = lVar1 + 0x10;
  } while (in_x9 != 0);
  FUN_044822ac();
LAB_05f17600:
  FUN_0710fad0();
  lVar1 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x48);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_04481fb8();
  }
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  FUN_05f17d84();
  return;
}


