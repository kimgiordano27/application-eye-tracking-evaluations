/*
FUNCTION_NAME: FUN_0750364c
ENTRY_POINT: 0750364c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_8;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_8
*/


void FUN_0750364c(long param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  
  puVar2 = 
  Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_AwaitOnCompleted<OVRTask_Awaiter<List<OVRPlugin_Result>>,_OVRAnchor_<FetchTrackablesAsync>d__66>__
  ;
  if ((DAT_07ef4a90 & 1) == 0) {
    FUN_03642964(System_Globalization_InternalCodePageDataItem___TypeInfo);
    FUN_03642964(Method_OVRTaskBuilder<OVRResult<OVRAnchor_ConfigureTrackerResult>>_SetResult__);
    FUN_03642964(PTR_DAT_079ffd68);
    FUN_03642964(PTR_DAT_07a21b38);
    FUN_03642964(Method_OVRResult<ulong,_OVRPlugin_Result>_op_Implicit__);
    FUN_03642964(PTR_DAT_079fd4b0);
    FUN_03642964(
                Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<FetchSharedAnchorsAsync>d__10>__
                );
    FUN_03642964(
                Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<FetchSharedAnchorsAsync>d__9>__
                );
    FUN_03642964(
                Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_AwaitOnCompleted<OVRTask_Awaiter<List<OVRPlugin_Result>>,_OVRAnchor_<FetchTrackablesAsync>d__66>__
                );
    FUN_03642964(Method_OVRTaskBuilder<OVRResult<OVRAnchor_ShareResult>>_SetException__);
    DAT_07ef4a90 = 1;
  }
  lVar7 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
  FUN_05e5ae34(lVar7,0);
  if (lVar7 != 0) {
    plVar11 = (long *)(lVar7 + 0x10);
    *plVar11 = param_2;
    thunk_FUN_036b7ad0(plVar11,param_2);
    puVar4 = Method_OVRTaskBuilder<OVRResult<OVRAnchor_ShareResult>>_SetException__;
    puVar2 = Method_OVRResult<ulong,_OVRPlugin_Result>_op_Implicit__;
    if (*plVar11 != 0) {
      uVar10 = *(undefined8 *)(*plVar11 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_079fd4b0 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      uVar6 = FUN_03f55ad8(uVar10,*(undefined8 *)puVar2);
      FUN_074ef380(uVar6 & 1,*(undefined8 *)puVar4);
      if (*plVar11 != 0) {
        FUN_074eeee0(*(undefined8 *)(*plVar11 + 0x30));
        if (*plVar11 != 0) {
          plVar11 = *(long **)(*plVar11 + 0x30);
          if (plVar11 == (long *)0x0) {
            *(undefined8 *)(lVar7 + 0x18) = 0;
          }
          else {
            lVar9 = *(long *)PTR_DAT_07a21b38;
            bVar1 = *(byte *)(lVar9 + 0x130);
            if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != lVar9)) {
LAB_075037f0:
                    /* WARNING: Subroutine does not return */
              FUN_03643084(plVar11,lVar9);
            }
            *(long **)(lVar7 + 0x18) = plVar11;
            if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != lVar9))
            goto LAB_075037f0;
          }
          thunk_FUN_036b7ad0((long *)(lVar7 + 0x18));
          puVar3 = 
          Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<FetchSharedAnchorsAsync>d__10>__
          ;
          puVar4 = Method_OVRTaskBuilder<OVRResult<OVRAnchor_ConfigureTrackerResult>>_SetResult__;
          puVar2 = PTR_DAT_079ffd68;
          if ((*(long *)(param_1 + 0x18) != 0) && (lVar9 = *(long *)(lVar7 + 0x18), lVar9 != 0)) {
            uVar10 = FUN_071bd74c(lVar9,*(undefined8 *)(param_1 + 0x10),
                                  *(undefined1 *)(*(long *)(param_1 + 0x18) + 0x10),0);
            uVar8 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
            FUN_04159004(uVar8,lVar7,*(undefined8 *)puVar3,0);
            uVar10 = FUN_03cc7aa0(uVar10,uVar8,*(undefined8 *)puVar4);
            puVar5 = 
            Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<FetchSharedAnchorsAsync>d__9>__
            ;
            puVar3 = System_Globalization_InternalCodePageDataItem___TypeInfo;
            if (*(long *)(param_1 + 0x18) != 0) {
              if (*(char *)(*(long *)(param_1 + 0x18) + 0x11) != '\0') {
                uVar8 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
                FUN_04159004(uVar8,lVar7,*(undefined8 *)puVar5,0);
                uVar10 = FUN_03cc7aa0(uVar10,uVar8,*(undefined8 *)puVar4);
              }
              FUN_03c9d4a0(uVar10,*(undefined8 *)puVar3);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


