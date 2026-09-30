/*
FUNCTION_NAME: FUN_06a031f8
ENTRY_POINT: 06a031f8
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 123
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_11;weak_xr_or_state_hits_11;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_gaze_retrieval_or_extraction
*/


undefined8 FUN_06a031f8(long param_1,long param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auVar6 [16];
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
  undefined8 local_a0;
  undefined8 uStack_8c;
  undefined8 local_80 [2];
  undefined8 uStack_6c;
  
  if ((DAT_076e2879 & 1) == 0) {
    thunk_FUN_032e1da0(
                      Method_OVRTaskBuilder<OVRPlugin_Result>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>,_OVRAnchor_Tracker_<SetupDynamicObjectTracker>d__5>__
                      );
    thunk_FUN_032e1da0(Method_OVRTaskBuilder<bool>_Start<OVRSpatialAnchor_<WhenCreatedAsync>d__19>__
                      );
    thunk_FUN_032e1da0(Method_OVRTaskBuilder<OVRPlugin_Result>_Start<OVRFuture_<When>d__0>__);
    thunk_FUN_032e1da0(PTR_DAT_072794f0);
    thunk_FUN_032e1da0(
                      Method_OVRTaskBuilder<bool>_Start<OVRSpatialAnchor_<WhenLocalizedAsync>d__22>__
                      );
    DAT_076e2879 = 1;
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
    puVar3 = 
    Method_OVRTaskBuilder<OVRPlugin_Result>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<<FetchTrackablesAsync>g__QuerySingleComponentAsync_67_0>d>__
    ;
  }
  else {
    if (*(long *)(param_1 + 0x20) != 0) {
      if (*(int *)(*(long *)PTR_DAT_072794f0 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      uVar1 = FUN_06bece64(param_2,0,0);
      if ((uVar1 & 1) == 0) {
        if (*(long *)(param_1 + 0x28) != 0) {
          uStack_fc = *(undefined8 *)((long)param_3 + 0x14);
          uStack_110 = *param_3;
          uStack_100 = (undefined4)((ulong)*(undefined8 *)((long)param_3 + 0xc) >> 0x20);
          uStack_108 = (undefined4)param_3[1];
          local_104 = (undefined4)((ulong)param_3[1] >> 0x20);
          UnityEngine_XR_Interaction_Toolkit_AR_ARBaseGestureInteractable__set_xrOrigin
                    (local_80,*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x28),&uStack_110,0);
          local_a0 = local_80[0];
          uStack_8c = uStack_6c;
          if (param_2 != 0) {
            lVar5 = *(long *)(param_1 + 0x20);
            auVar6 = FUN_05013cdc(param_2,*(undefined8 *)
                                           Method_OVRTaskBuilder<OVRPlugin_Result>_Start<OVRFuture_<When>d__0>__
                                 );
            local_80[0] = local_a0;
            uStack_6c = uStack_8c;
            if (lVar5 != 0) {
              local_130[0] = local_a0;
              uStack_11c = uStack_8c;
              uVar1 = FUN_06a2f7b0(lVar5,auVar6._0_8_,auVar6._8_8_,local_130,&local_f0,0);
              uVar2 = 0;
              if ((uVar1 & 1) != 0) {
                uVar2 = *(undefined8 *)
                         Method_OVRTaskBuilder<OVRPlugin_Result>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>,_OVRAnchor_Tracker_<SetupDynamicObjectTracker>d__5>__
                ;
                memcpy(local_80,&local_f0,0x48);
                uVar2 = FUN_04f13250(param_1,local_80,uVar2);
              }
              return uVar2;
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      thunk_FUN_032e1da0(PTR_DAT_0727dbc0);
      uVar2 = thunk_FUN_032a56a0();
      uVar4 = thunk_FUN_032e1da0(
                                Method_OVRTaskBuilder<OVRPlugin_Result>_Start<OVRAnchor_Tracker_<SetupDynamicObjectTracker>d__5>__
                                );
      FUN_05897d14(uVar2,uVar4,0);
      goto LAB_06a03430;
    }
    thunk_FUN_032e1da0(PTR_DAT_07279578);
    uVar2 = thunk_FUN_032a56a0();
    puVar3 = 
    Method_OVRTaskBuilder<OVRPlugin_Result>_AwaitUnsafeOnCompleted<YieldAwaitable_YieldAwaiter,_OVRFuture_<When>d__0>__
    ;
  }
  uVar4 = thunk_FUN_032e1da0(puVar3);
  FUN_0592371c(uVar2,uVar4,0);
LAB_06a03430:
  uVar4 = thunk_FUN_032e1da0(Method_OVRTaskBuilder<OVRPlugin_Result>_Create__);
                    /* WARNING: Subroutine does not return */
  FUN_032d5dbc(uVar2,uVar4);
}


