/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$CopySafe
ENTRY_POINT: 044ecd50
PROGRAM: waitwhat-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__CopySafe(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  __cxa_end_catch();
  uVar3 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x68);
  if (*(int *)(DAT_07562970 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  uVar3 = FUN_0593e698(uVar3,0);
  uVar1 = thunk_FUN_031edd38(PTR_DAT_070c2638,uVar3,0);
  uVar1 = FUN_03188b1c(uVar1,2);
  FUN_02d342ac();
  FUN_02d36658(uVar1);
  FUN_02d39e20(uVar1,0);
  FUN_02d36658(uVar1,uVar3);
  FUN_02d39e20(uVar1,1,uVar3);
  uVar3 = thunk_FUN_031edd38(PTR_DAT_07106298);
  uVar3 = FUN_05973588(uVar3,uVar1,0);
  thunk_FUN_031edd38(PTR_DAT_070c3af0);
  uVar1 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed();
  uVar2 = thunk_FUN_031edd38(PTR_DAT_070c7b10);
  FUN_0589b344(uVar1,uVar3,uVar2,0);
  uVar3 = thunk_FUN_031edd38(PTR_DAT_071062a8);
                    /* WARNING: Subroutine does not return */
  FUN_03188b9c(uVar1,uVar3);
}


