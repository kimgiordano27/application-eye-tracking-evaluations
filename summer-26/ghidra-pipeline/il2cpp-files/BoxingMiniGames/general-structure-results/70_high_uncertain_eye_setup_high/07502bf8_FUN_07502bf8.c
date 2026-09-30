/*
FUNCTION_NAME: FUN_07502bf8
ENTRY_POINT: 07502bf8
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_07502bf8(long param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  
  puVar2 = Method_OVRTaskBuilder<OVRResult<OVRAnchor_ConfigureTrackerResult>>_SetException__;
  if ((DAT_07ef4a8a & 1) == 0) {
    FUN_03642964(System_Globalization_InternalCodePageDataItem___TypeInfo);
    FUN_03642964(Method_OVRTaskBuilder<OVRResult<OVRAnchor_ConfigureTrackerResult>>_SetResult__);
    FUN_03642964(PTR_DAT_079ffd68);
    FUN_03642964(PTR_DAT_07a21b38);
    FUN_03642964(Method_OVRResult<ulong,_OVRPlugin_Result>_op_Implicit__);
    FUN_03642964(PTR_DAT_079fd4b0);
    FUN_03642964(
                Method_OVRTaskBuilder<OVRResult<OVRAnchor_ConfigureTrackerResult>>_SetStateMachine__
                );
    FUN_03642964(Method_OVRTaskBuilder<OVRResult<OVRAnchor_ConfigureTrackerResult>>_get_Task__);
    FUN_03642964(Method_OVRTaskBuilder<OVRResult<OVRAnchor_ConfigureTrackerResult>>_SetException__);
    FUN_03642964(
                Method_OVRTaskBuilder<OVRResult<OVRAnchor_ShareResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<OVRAnchor_ShareResult>>,_MRUK_<ShareRoomsAsync>d__70>__
                );
    DAT_07ef4a8a = 1;
  }
  lVar6 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
  FUN_05e5ae34(lVar6,0);
  if (lVar6 != 0) {
    plVar10 = (long *)(lVar6 + 0x10);
    *plVar10 = param_2;
    thunk_FUN_036b7ad0(plVar10,param_2);
    puVar3 = 
    Method_OVRTaskBuilder<OVRResult<OVRAnchor_ShareResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<OVRAnchor_ShareResult>>,_MRUK_<ShareRoomsAsync>d__70>__
    ;
    puVar2 = Method_OVRResult<ulong,_OVRPlugin_Result>_op_Implicit__;
    if (*plVar10 != 0) {
      uVar9 = *(undefined8 *)(*plVar10 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_079fd4b0 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      uVar5 = FUN_03f55ad8(uVar9,*(undefined8 *)puVar2);
      FUN_074ef380(uVar5 & 1,*(undefined8 *)puVar3);
      if (*plVar10 != 0) {
        FUN_074eeee0(*(undefined8 *)(*plVar10 + 0x30));
        if (*plVar10 != 0) {
          plVar10 = *(long **)(*plVar10 + 0x30);
          if (plVar10 == (long *)0x0) {
            *(undefined8 *)(lVar6 + 0x18) = 0;
          }
          else {
            lVar8 = *(long *)PTR_DAT_07a21b38;
            bVar1 = *(byte *)(lVar8 + 0x130);
            if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != lVar8)) {
LAB_07502d9c:
                    /* WARNING: Subroutine does not return */
              FUN_03643084(plVar10,lVar8);
            }
            *(long **)(lVar6 + 0x18) = plVar10;
            if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != lVar8))
            goto LAB_07502d9c;
          }
          thunk_FUN_036b7ad0((long *)(lVar6 + 0x18));
          puVar4 = 
          Method_OVRTaskBuilder<OVRResult<OVRAnchor_ConfigureTrackerResult>>_SetStateMachine__;
          puVar3 = Method_OVRTaskBuilder<OVRResult<OVRAnchor_ConfigureTrackerResult>>_SetResult__;
          puVar2 = PTR_DAT_079ffd68;
          if ((*(long *)(param_1 + 0x18) != 0) && (lVar8 = *(long *)(lVar6 + 0x18), lVar8 != 0)) {
            uVar9 = FUN_071bd5ac(lVar8,*(undefined8 *)(param_1 + 0x10),
                                 *(undefined1 *)(*(long *)(param_1 + 0x18) + 0x10),0);
            uVar7 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
            FUN_04159004(uVar7,lVar6,*(undefined8 *)puVar4,0);
            uVar9 = FUN_03cc7aa0(uVar9,uVar7,*(undefined8 *)puVar3);
            puVar4 = Method_OVRTaskBuilder<OVRResult<OVRAnchor_ConfigureTrackerResult>>_get_Task__;
            lVar8 = *(long *)(param_1 + 0x18);
            if (lVar8 != 0) {
              if (*(char *)(lVar8 + 0x11) != '\0') {
                uVar7 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
                FUN_04159004(uVar7,lVar6,*(undefined8 *)puVar4,0);
                uVar9 = FUN_03cc7aa0(uVar9,uVar7,*(undefined8 *)puVar3);
                lVar8 = *(long *)(param_1 + 0x18);
                if (lVar8 == 0) goto LAB_07502eb4;
              }
              puVar2 = System_Globalization_InternalCodePageDataItem___TypeInfo;
              if (*(long *)(lVar8 + 0x18) != 0) {
                uVar9 = FUN_03cc7aa0(uVar9,*(long *)(lVar8 + 0x18),*(undefined8 *)puVar3);
              }
              FUN_03c9d4a0(uVar9,*(undefined8 *)puVar2);
              return;
            }
          }
        }
      }
    }
  }
LAB_07502eb4:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


