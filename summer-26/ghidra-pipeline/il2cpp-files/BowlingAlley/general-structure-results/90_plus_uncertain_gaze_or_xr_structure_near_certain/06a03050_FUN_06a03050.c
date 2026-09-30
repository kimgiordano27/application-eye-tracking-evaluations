/*
FUNCTION_NAME: FUN_06a03050
ENTRY_POINT: 06a03050
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 120
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_8;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_gaze_retrieval_or_extraction
*/


undefined8 FUN_06a03050(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_130 [2];
  undefined8 uStack_11c;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined4 local_104;
  undefined4 uStack_100;
  undefined8 uStack_fc;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a0;
  undefined8 uStack_8c;
  undefined8 auStack_80 [2];
  undefined8 uStack_6c;
  undefined *puVar4;
  
  if ((DAT_076e2877 & 1) == 0) {
    thunk_FUN_032e1da0(
                      Method_OVRTaskBuilder<OVRPlugin_Result>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>,_OVRAnchor_Tracker_<SetupDynamicObjectTracker>d__5>__
                      );
    thunk_FUN_032e1da0(Method_OVRTaskBuilder<bool>_Start<OVRSpatialAnchor_<WhenCreatedAsync>d__19>__
                      );
    thunk_FUN_032e1da0(
                      Method_OVRTaskBuilder<bool>_Start<OVRSpatialAnchor_<WhenLocalizedAsync>d__22>__
                      );
    DAT_076e2877 = 1;
  }
  local_b0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uVar1 = FUN_06be5fd4(param_1,0);
  if ((uVar1 & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_07279578);
    uVar2 = thunk_FUN_032a56a0();
    puVar4 = 
    Method_OVRTaskBuilder<OVRPlugin_Result>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<<FetchTrackablesAsync>g__QuerySingleComponentAsync_67_0>d>__
    ;
  }
  else {
    if (*(long *)(param_1 + 0x20) != 0) {
      if (*(long *)(param_1 + 0x28) != 0) {
        uStack_fc = *(undefined8 *)((long)param_2 + 0x14);
        uStack_110 = *param_2;
        uStack_100 = (undefined4)((ulong)*(undefined8 *)((long)param_2 + 0xc) >> 0x20);
        uStack_108 = (undefined4)param_2[1];
        local_104 = (undefined4)((ulong)param_2[1] >> 0x20);
        UnityEngine_XR_Interaction_Toolkit_AR_ARBaseGestureInteractable__set_xrOrigin
                  (auStack_80,*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x28),&uStack_110,0);
        uStack_8c = uStack_6c;
        uStack_a0 = auStack_80[0];
        if (*(long *)(param_1 + 0x20) != 0) {
          local_130[0] = auStack_80[0];
          uStack_11c = uStack_6c;
          uVar1 = FUN_06a2f718(*(long *)(param_1 + 0x20),local_130,&local_f0,0);
          uVar2 = 0;
          if ((uVar1 & 1) != 0) {
            uVar2 = *(undefined8 *)
                     Method_OVRTaskBuilder<OVRPlugin_Result>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>,_OVRAnchor_Tracker_<SetupDynamicObjectTracker>d__5>__
            ;
            memcpy(auStack_80,&local_f0,0x48);
            uVar2 = FUN_04f13250(param_1,auStack_80,uVar2);
          }
          return uVar2;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    thunk_FUN_032e1da0(PTR_DAT_07279578);
    uVar2 = thunk_FUN_032a56a0();
    puVar4 = 
    Method_OVRTaskBuilder<OVRPlugin_Result>_AwaitUnsafeOnCompleted<YieldAwaitable_YieldAwaiter,_OVRFuture_<When>d__0>__
    ;
  }
  uVar3 = thunk_FUN_032e1da0(puVar4);
  FUN_0592371c(uVar2,uVar3,0);
  uVar3 = thunk_FUN_032e1da0(
                            Method_OVRTaskBuilder<OVRPlugin_Result>_Start<OVRAnchor_<<FetchTrackablesAsync>g__QuerySingleComponentAsync_67_0>d>__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_032d5dbc(uVar2,uVar3);
}


