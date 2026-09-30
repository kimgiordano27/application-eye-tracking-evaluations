/*
FUNCTION_NAME: FUN_07503f44
ENTRY_POINT: 07503f44
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * FUN_07503f44(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  
  puVar1 = Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_SetResult__;
  if ((DAT_07ef4a95 & 1) == 0) {
    FUN_03642964(PTR_DAT_079ffa88);
    FUN_03642964(Method_OVRResult<ulong,_OVRPlugin_Result>_get_Value__);
    FUN_03642964(
                Method_OVRTaskBuilder<OVRResult<OVRAnchor_ShareResult>>_Start<MRUK_<ShareRoomsAsync>d__70>__
                );
    FUN_03642964(
                Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_SetStateMachine__
                );
    FUN_03642964(Method_OVRTaskBuilder<OVRResult<OVRAnchor_ConfigureTrackerResult>>_SetResult__);
    FUN_03642964(PTR_DAT_079ffd68);
    FUN_03642964(Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_get_Task__
                );
    FUN_03642964(PTR_DAT_079f4558);
    FUN_03642964(PTR_DAT_079f4e28);
    FUN_03642964(
                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>,_OVRSpatialAnchor_<LoadUnboundAnchorsAsync>d__71>__
                );
    FUN_03642964(
                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_Start<OVRSpatialAnchor_<LoadUnboundAnchorsAsync>d__71>__
                );
    FUN_03642964(
                Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_SetResult__
                );
    FUN_03642964(
                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_Create__
                );
    DAT_07ef4a95 = 1;
  }
  lVar6 = thunk_FUN_0367fe20(*(undefined8 *)puVar1);
  FUN_05e5ae34(lVar6,0);
  if (lVar6 != 0) {
    plVar11 = (long *)(lVar6 + 0x10);
    *plVar11 = param_2;
    thunk_FUN_036b7ad0(plVar11,param_2);
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (plVar7 = (long *)FUN_03c8d1b0(*(long *)(param_1 + 0x10),*(undefined8 *)PTR_DAT_079ffa88),
       puVar5 = 
       Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_Start<OVRSpatialAnchor_<LoadUnboundAnchorsAsync>d__71>__
       , puVar4 = 
         Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_SetStateMachine__,
       puVar3 = 
       Method_OVRTaskBuilder<OVRResult<OVRAnchor_ShareResult>>_Start<MRUK_<ShareRoomsAsync>d__70>__,
       puVar2 = Method_OVRTaskBuilder<OVRResult<OVRAnchor_ConfigureTrackerResult>>_SetResult__,
       puVar1 = PTR_DAT_079ffd68, plVar7 != (long *)0x0)) {
      uVar8 = (**(code **)(*plVar7 + 0x188))(plVar7,*(undefined8 *)(*plVar7 + 400));
      lVar12 = *(long *)(param_1 + 0x28);
      if (lVar12 == 0) {
        lVar12 = thunk_FUN_0367fe20(*(undefined8 *)
                                     Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_get_Task__
                                   );
        FUN_04159c38(lVar12,param_1,
                     *(undefined8 *)
                      Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>,_OVRSpatialAnchor_<LoadUnboundAnchorsAsync>d__71>__
                     ,0);
        *(long *)(param_1 + 0x28) = lVar12;
        thunk_FUN_036b7ad0((long *)(param_1 + 0x28),lVar12);
      }
      uVar8 = FUN_03cb9310(uVar8,lVar12,*(undefined8 *)puVar4);
      uVar9 = thunk_FUN_0367fe20(*(undefined8 *)puVar1);
      FUN_04159004(uVar9,lVar6,*(undefined8 *)puVar5,0);
      uVar8 = FUN_03cc7aa0(uVar8,uVar9,*(undefined8 *)puVar2);
      lVar6 = FUN_03cb08a0(uVar8,*(undefined8 *)puVar3);
      if (*(int *)(*(long *)PTR_DAT_079f4e28 + 0xe4) == 0) {
        thunk_FUN_036a1978(*(long *)PTR_DAT_079f4e28);
      }
      uVar10 = FUN_071c24dc(lVar6,0,0);
      if ((uVar10 & 1) == 0) {
        plVar11 = (long *)FUN_03642a4c(*(undefined8 *)PTR_DAT_079f4558,1);
        if (plVar11 == (long *)0x0) goto LAB_07504254;
        if ((lVar6 != 0) &&
           (lVar12 = thunk_FUN_0367fd24(lVar6,*(undefined8 *)(*plVar11 + 0x40)), lVar12 == 0)) {
          uVar8 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
          FUN_03642acc(uVar8,0);
        }
        if ((int)plVar11[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c20();
        }
        plVar11[4] = lVar6;
        thunk_FUN_036b7ad0(plVar11 + 4,lVar6);
      }
      else {
        if (*plVar11 == 0) goto LAB_07504254;
        FUN_074ef3c8(*(undefined1 *)(*plVar11 + 0x40),
                     *(undefined8 *)
                      Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_Create__
                     ,*(undefined8 *)(param_1 + 0x18));
        lVar12 = *(long *)Method_OVRResult<ulong,_OVRPlugin_Result>_get_Value__;
        lVar6 = *(long *)(lVar12 + 0x38);
        if (lVar6 == 0) {
          FUN_0367ca58(lVar12);
          lVar6 = *(long *)(lVar12 + 0x38);
        }
        lVar6 = *(long *)(lVar6 + 0x10);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_0367c9fc();
        }
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        lVar6 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_0367c9fc();
        }
        plVar11 = (long *)**(long **)(lVar6 + 0xb8);
      }
      return plVar11;
    }
  }
LAB_07504254:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


