/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$CopyFrom
ENTRY_POINT: 05f177b8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__CopyFrom
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
               undefined8 param_5,long param_6)

{
  long lVar1;
  long unaff_x19;
  
  if (param_6 == 0) {
    FUN_070dd334(*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 8));
  }
  lVar1 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x48);
                    /* try { // try from 05f177ec to 06017833 has its CatchHandler @ 05f177ec
                       catch() { ... } // from try @ 05f177ec with catch @ 05f177ec
                       catch() { ... } // from try @ 05f1788c with catch @ 05f177ec
                       catch() { ... } // from try @ 05f178bc with catch @ 05f177ec
                       catch() { ... } // from try @ 05f17938 with catch @ 05f177ec */
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_04481fb8();
  }
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  FUN_05f17ac4(param_2,param_3,param_4);
  return;
}


