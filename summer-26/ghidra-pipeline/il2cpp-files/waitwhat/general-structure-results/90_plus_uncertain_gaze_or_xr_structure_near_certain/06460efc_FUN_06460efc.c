/*
FUNCTION_NAME: FUN_06460efc
ENTRY_POINT: 06460efc
PROGRAM: waitwhat-libil2cpp.so
SCORE: 102
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;functionality_gaze_retrieval_or_extraction
*/


void FUN_06460efc(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  
  if ((DAT_07556a64 & 1) == 0) {
    FUN_03188a78(System_Action<OVRManager_TrackingOrigin,_Nullable<OVRPose>>_TypeInfo);
    DAT_07556a64 = 1;
  }
  if (*(char *)(param_1 + 0x10) != '\0') {
    uVar3 = thunk_FUN_031edd38(PTR_DAT_070f39f8);
    uVar3 = FUN_057a2060(uVar3,0);
    thunk_FUN_031edd38(PTR_DAT_070c2da8);
    uVar4 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed();
    FUN_0592abbc(uVar4,uVar3,0);
    uVar3 = thunk_FUN_031edd38(
                              System_Action<NetworkRunner,_NetAddress,_NetConnectFailedReason>_TypeInfo
                              );
                    /* WARNING: Subroutine does not return */
    FUN_03188b9c(uVar4,uVar3);
  }
  lVar1 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)
                      System_Action<OVRManager_TrackingOrigin,_Nullable<OVRPose>>_TypeInfo);
  FUN_05971910(lVar1,0);
  *(long *)(lVar1 + 0x10) = param_2;
  *(undefined8 *)(lVar1 + 0x18) = param_3;
  if (param_2 == 0) {
    lVar2 = *(long *)(param_1 + 0x30);
    thunk_FUN_03195150();
    if (lVar2 == 0) {
      thunk_FUN_03195150();
      *(long *)(param_1 + 0x30) = lVar1;
    }
  }
  else {
    plVar5 = *(long **)(param_1 + 0x28);
    thunk_FUN_03195150();
    if (plVar5 == (long *)0x0) goto LAB_06461000;
    lVar2 = (**(code **)(*plVar5 + 0x2f8))(plVar5,param_2,*(undefined8 *)(*plVar5 + 0x300));
    if (lVar2 == 0) {
      plVar5 = *(long **)(param_1 + 0x28);
      thunk_FUN_03195150();
      if (plVar5 == (long *)0x0) goto LAB_06461000;
      (**(code **)(*plVar5 + 0x298))(plVar5,param_2,lVar1,*(undefined8 *)(*plVar5 + 0x2a0));
    }
  }
  plVar5 = *(long **)(param_1 + 0x18);
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x308))(plVar5,lVar1,*(undefined8 *)(*plVar5 + 0x310));
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
    return;
  }
LAB_06461000:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


