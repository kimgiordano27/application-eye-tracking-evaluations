/*
FUNCTION_NAME: FUN_07503bf0
ENTRY_POINT: 07503bf0
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_07503bf0(long param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  
  puVar2 = 
  Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_Start<OVRAnchor_<FetchSharedAnchorsAsync>d__9>__
  ;
  if ((DAT_07ef4a93 & 1) == 0) {
    FUN_03642964(System_Globalization_InternalCodePageDataItem___TypeInfo);
    FUN_03642964(Method_OVRTaskBuilder<OVRResult<OVRAnchor_ConfigureTrackerResult>>_SetResult__);
    FUN_03642964(PTR_DAT_079ffd68);
    FUN_03642964(PTR_DAT_07a21b38);
    FUN_03642964(Method_OVRResult<ulong,_OVRPlugin_Result>_op_Implicit__);
    FUN_03642964(PTR_DAT_079fd4b0);
    FUN_03642964(
                Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_Start<OVRAnchor_<FetchTrackablesAsync>d__66>__
                );
    FUN_03642964(
                Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_Start<OVRAnchor_<FetchSharedAnchorsAsync>d__9>__
                );
    FUN_03642964(Method_OVRTaskBuilder<OVRResult<OVRAnchor_ShareResult>>_SetException__);
    DAT_07ef4a93 = 1;
  }
  lVar7 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
  FUN_05e5ae34(lVar7,0);
  puVar3 = Method_OVRTaskBuilder<OVRResult<OVRAnchor_ShareResult>>_SetException__;
  puVar2 = Method_OVRResult<ulong,_OVRPlugin_Result>_op_Implicit__;
  if (param_2 != 0) {
    uVar11 = *(undefined8 *)(param_2 + 0x20);
    if (*(int *)(*(long *)PTR_DAT_079fd4b0 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    uVar6 = FUN_03f55ad8(uVar11,*(undefined8 *)puVar2);
    FUN_074ef380(uVar6 & 1,*(undefined8 *)puVar3);
    FUN_074eeee0(*(undefined8 *)(param_2 + 0x30));
    if (lVar7 != 0) {
      plVar9 = *(long **)(param_2 + 0x30);
      if (plVar9 == (long *)0x0) {
        *(undefined8 *)(lVar7 + 0x10) = 0;
      }
      else {
        lVar10 = *(long *)PTR_DAT_07a21b38;
        bVar1 = *(byte *)(lVar10 + 0x130);
        if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != lVar10)) {
LAB_07503d60:
                    /* WARNING: Subroutine does not return */
          FUN_03643084(plVar9,lVar10);
        }
        *(long **)(lVar7 + 0x10) = plVar9;
        if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != lVar10))
        goto LAB_07503d60;
      }
      thunk_FUN_036b7ad0((long *)(lVar7 + 0x10));
      puVar5 = 
      Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_Start<OVRAnchor_<FetchTrackablesAsync>d__66>__
      ;
      puVar4 = Method_OVRTaskBuilder<OVRResult<OVRAnchor_ConfigureTrackerResult>>_SetResult__;
      puVar3 = System_Globalization_InternalCodePageDataItem___TypeInfo;
      puVar2 = PTR_DAT_079ffd68;
      lVar10 = *(long *)(lVar7 + 0x10);
      if (lVar10 != 0) {
        uVar11 = FUN_071bd810(lVar10,*(undefined8 *)(param_1 + 0x10),0);
        uVar8 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
        FUN_04159004(uVar8,lVar7,*(undefined8 *)puVar5,0);
        uVar11 = FUN_03cc7aa0(uVar11,uVar8,*(undefined8 *)puVar4);
        FUN_03c9d4a0(uVar11,*(undefined8 *)puVar3);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


