/*
FUNCTION_NAME: FUN_0750842c
ENTRY_POINT: 0750842c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_15;weak_xr_or_state_hits_15;validity_or_gating_hits_7;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_15
*/


void FUN_0750842c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  puVar1 = Method_OVRTaskBuilder<bool>_SetResult__;
  if ((DAT_07ef4ade & 1) == 0) {
    FUN_03642964(PTR_DAT_079fdb30);
    FUN_03642964(PTR_DAT_079fff00);
    FUN_03642964(Method_OVRTaskBuilder<bool>_SetStateMachine__);
    FUN_03642964(Method_OVRTaskBuilder<bool>_get_Task__);
    FUN_03642964(Method_Unity_AppUI_UI_NumericalField<float>_set_unit__);
    FUN_03642964(PTR_DAT_079ff9e8);
    FUN_03642964(
                Method_OVRTaskBuilder<OVRPlugin_Result>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>,_OVRAnchor_Tracker_<SetupDynamicObjectTracker>d__7>__
                );
    FUN_03642964(Method_OVRTaskBuilder<bool>_SetResult__);
    FUN_03642964(
                Method_OVRTaskBuilder<OVRPlugin_Result>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>,_OVRAnchor_Tracker_<SetupMarkerTracker>d__5>__
                );
    FUN_03642964(
                Method_OVRTaskBuilder<OVRPlugin_Result>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<<FetchTrackablesAsync>g__QuerySingleComponentAsync_66_0>d>__
                );
    FUN_03642964(
                Method_OVRTaskBuilder<OVRPlugin_Result>_AwaitUnsafeOnCompleted<YieldAwaitable_YieldAwaiter,_OVRFuture_<When>d__0>__
                );
    DAT_07ef4ade = 1;
  }
  lVar4 = thunk_FUN_0367fe20(*(undefined8 *)puVar1);
  FUN_05e5ae34(lVar4,0);
  if (lVar4 != 0) {
    *(long *)(lVar4 + 0x10) = param_1;
    thunk_FUN_036b7ad0((long *)(lVar4 + 0x10),param_1);
    *(undefined8 *)(lVar4 + 0x18) = param_2;
    thunk_FUN_036b7ad0((undefined8 *)(lVar4 + 0x18),param_2);
    iVar2 = FUN_07508ad4(param_1);
    if (iVar2 != 2) {
      if (iVar2 != 1) {
        uVar5 = FUN_074ef718();
        uVar10 = thunk_FUN_036aa1c8(
                                   Method_OVRTaskBuilder<OVRPlugin_Result>_Start<OVRAnchor_<<FetchTrackablesAsync>g__QuerySingleComponentAsync_66_0>d>__
                                   );
                    /* WARNING: Subroutine does not return */
        FUN_03642acc(uVar5,uVar10);
      }
      uVar10 = *(undefined8 *)(lVar4 + 0x18);
      uVar5 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_079fdb30);
      FUN_04164968(uVar5,lVar4,
                   *(undefined8 *)
                    Method_OVRTaskBuilder<OVRPlugin_Result>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>,_OVRAnchor_Tracker_<SetupDynamicObjectTracker>d__7>__
                   ,0);
LAB_07508728:
      FUN_07509278(param_1,uVar10,uVar5);
      return;
    }
    lVar6 = thunk_FUN_0367fe20(*(undefined8 *)
                                Method_OVRTaskBuilder<OVRPlugin_Result>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<<FetchTrackablesAsync>g__QuerySingleComponentAsync_66_0>d>__
                              );
    FUN_05e5ae34(lVar6,0);
    if (lVar6 != 0) {
      plVar11 = (long *)(lVar6 + 0x18);
      *plVar11 = lVar4;
      thunk_FUN_036b7ad0(plVar11,lVar4);
      if (*(long *)(param_1 + 0x10) != 0) {
        uVar5 = FUN_03d9b618(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30),
                             *(undefined8 *)Method_OVRTaskBuilder<bool>_SetStateMachine__);
        if (*(int *)(*(long *)(PTR_DAT_079f4610 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_036a1978(*(long *)(PTR_DAT_079f4610 + 0xe0));
        }
        uVar7 = FUN_05e30794(uVar5,0,0);
        if ((uVar7 & 1) != 0) {
          if (*(long *)(param_1 + 0x10) == 0) goto LAB_0750874c;
          uVar3 = FUN_03d9b58c(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x70),
                               *(undefined8 *)PTR_DAT_079fff00);
          FUN_074ef380(uVar3 & 1,
                       *(undefined8 *)
                        Method_OVRTaskBuilder<OVRPlugin_Result>_AwaitUnsafeOnCompleted<YieldAwaitable_YieldAwaiter,_OVRFuture_<When>d__0>__
                      );
        }
        if ((*plVar11 != 0) && (lVar4 = *(long *)(param_1 + 0x10), lVar4 != 0)) {
          uVar10 = *(undefined8 *)(param_1 + 0x18);
          uVar9 = *(undefined8 *)(param_1 + 0x20);
          uVar14 = *(undefined8 *)(*plVar11 + 0x18);
          uVar12 = *(undefined8 *)(lVar4 + 0x30);
          uVar13 = *(undefined8 *)(lVar4 + 0x70);
          uVar8 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_079ff9e8);
          FUN_07527314(uVar8,uVar9,0);
          if (*(long *)(param_1 + 0x10) != 0) {
            uVar15 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x78);
            uVar9 = thunk_FUN_0367fe20(*(undefined8 *)
                                        Method_Unity_AppUI_UI_NumericalField<float>_set_unit__);
            FUN_075265a4(uVar9,uVar14,uVar10,uVar5,uVar12,uVar13,uVar8,uVar15,0);
            uVar5 = thunk_FUN_0367fe20(*(undefined8 *)Method_OVRTaskBuilder<bool>_get_Task__);
            FUN_07526ec8(uVar5,uVar9,0);
            *(undefined8 *)(lVar6 + 0x10) = uVar5;
            thunk_FUN_036b7ad0((undefined8 *)(lVar6 + 0x10),uVar5);
            if (*(long *)(lVar6 + 0x18) != 0) {
              uVar10 = *(undefined8 *)(*(long *)(lVar6 + 0x18) + 0x18);
              uVar5 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_079fdb30);
              FUN_04164968(uVar5,lVar6,
                           *(undefined8 *)
                            Method_OVRTaskBuilder<OVRPlugin_Result>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>,_OVRAnchor_Tracker_<SetupMarkerTracker>d__5>__
                           ,0);
              goto LAB_07508728;
            }
          }
        }
      }
    }
  }
LAB_0750874c:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


