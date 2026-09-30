/*
FUNCTION_NAME: FUN_06a03448
ENTRY_POINT: 06a03448
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_3;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_6
*/


uint FUN_06a03448(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auVar7 [16];
  
  if ((DAT_076e287a & 1) == 0) {
    thunk_FUN_032e1da0(Method_OVRTaskBuilder<OVRPlugin_Result>_SetException__);
    thunk_FUN_032e1da0(
                      Method_OVRTaskBuilder<bool>_Start<OVRAnchor_<>c__DisplayClass54_0_<<FetchAnchorsAsync>g__execute_0>d>__
                      );
    thunk_FUN_032e1da0(PTR_DAT_072794f0);
    thunk_FUN_032e1da0(
                      Method_OVRTaskBuilder<bool>_Start<OVRSpatialAnchor_<WhenLocalizedAsync>d__22>__
                      );
    DAT_076e287a = 1;
  }
  uVar2 = FUN_06be5fd4(param_1,0);
  if ((uVar2 & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_07279578);
    uVar4 = thunk_FUN_032a56a0();
    puVar3 = 
    Method_OVRTaskBuilder<OVRPlugin_Result>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<<FetchTrackablesAsync>g__QuerySingleComponentAsync_67_0>d>__
    ;
  }
  else {
    if (*(long *)(param_1 + 0x20) != 0) {
      if (*(int *)(*(long *)PTR_DAT_072794f0 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      uVar2 = FUN_06bece64(param_2,0,0);
      puVar3 = 
      Method_OVRTaskBuilder<bool>_Start<OVRAnchor_<>c__DisplayClass54_0_<<FetchAnchorsAsync>g__execute_0>d>__
      ;
      if ((uVar2 & 1) == 0) {
        if (param_2 != 0) {
          lVar6 = *(long *)(param_1 + 0x20);
          auVar7 = FUN_05013e90(param_2,*(undefined8 *)
                                         Method_OVRTaskBuilder<bool>_Start<OVRAnchor_<>c__DisplayClass54_0_<<FetchAnchorsAsync>g__execute_0>d>__
                               );
          if (lVar6 != 0) {
            uVar1 = UnityEngine_XR_Interaction_Toolkit_AR_ARBaseGestureInteractable___cctor
                              (lVar6,auVar7._0_8_,auVar7._8_8_,0);
            if ((uVar1 & 1) != 0) {
              auVar7 = FUN_05013e90(param_2,*(undefined8 *)puVar3);
              FUN_04f13304(param_1,auVar7._0_8_,auVar7._8_8_,
                           *(undefined8 *)Method_OVRTaskBuilder<OVRPlugin_Result>_SetException__);
            }
            return uVar1 & 1;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      thunk_FUN_032e1da0(PTR_DAT_0727dbc0);
      uVar4 = thunk_FUN_032a56a0();
      uVar5 = thunk_FUN_032e1da0(PTR_DAT_072b8590);
      FUN_05897d14(uVar4,uVar5,0);
      goto LAB_06a035f4;
    }
    thunk_FUN_032e1da0(PTR_DAT_07279578);
    uVar4 = thunk_FUN_032a56a0();
    puVar3 = 
    Method_OVRTaskBuilder<OVRPlugin_Result>_AwaitUnsafeOnCompleted<YieldAwaitable_YieldAwaiter,_OVRFuture_<When>d__0>__
    ;
  }
  uVar5 = thunk_FUN_032e1da0(puVar3);
  FUN_0592371c(uVar4,uVar5,0);
LAB_06a035f4:
  uVar5 = thunk_FUN_032e1da0(Method_OVRTaskBuilder<OVRPlugin_Result>_SetResult__);
                    /* WARNING: Subroutine does not return */
  FUN_032d5dbc(uVar4,uVar5);
}


