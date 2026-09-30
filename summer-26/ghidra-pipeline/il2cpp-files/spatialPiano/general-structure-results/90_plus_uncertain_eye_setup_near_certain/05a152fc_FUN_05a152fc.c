/*
FUNCTION_NAME: FUN_05a152fc
ENTRY_POINT: 05a152fc
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_9;weak_xr_or_state_hits_9;validity_or_gating_hits_6;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_9
*/


void FUN_05a152fc(long param_1,long param_2,ulong param_3,ulong param_4,uint param_5)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  int local_54;
  
  puVar3 = PTR_DAT_067cafa0;
  if ((DAT_06bc2045 & 1) == 0) {
    FUN_02f08768(Method_OVRNativeList<OVRAnchor_FilterUnion>_get_Count__);
    FUN_02f08768(PTR_DAT_067c9aa0);
    FUN_02f08768(Method_OVRTaskBuilder<OVRResult<OVRAnchor_ShareResult>>_SetStateMachine__);
    FUN_02f08768(Method_OVRTaskBuilder<OVRResult<OVRAnchor_ShareResult>>_get_Task__);
    FUN_02f08768(
                Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_AwaitOnCompleted<OVRTask_Awaiter<List<OVRPlugin_Result>>,_OVRAnchor_<FetchTrackablesAsync>d__66>__
                );
    FUN_02f08768(
                Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<FetchSharedAnchorsAsync>d__10>__
                );
    FUN_02f08768(PTR_DAT_067ce588);
    FUN_02f08768(PTR_DAT_067cafa0);
    FUN_02f08768(
                Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<FetchSharedAnchorsAsync>d__9>__
                );
    FUN_02f08768(
                Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_Start<OVRAnchor_<FetchSharedAnchorsAsync>d__10>__
                );
    FUN_02f08768(
                Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_Start<OVRAnchor_<FetchSharedAnchorsAsync>d__9>__
                );
    FUN_02f08768(
                Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_Start<OVRAnchor_<FetchTrackablesAsync>d__66>__
                );
    FUN_02f08768(Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_Create__);
    FUN_02f08768(
                Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_SetException__
                );
    FUN_02f08768(
                Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_SetResult__
                );
    FUN_02f08768(
                Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_SetStateMachine__
                );
    FUN_02f08768(Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_get_Task__
                );
    FUN_02f08768(
                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>,_OVRSpatialAnchor_<LoadUnboundAnchorsAsync>d__71>__
                );
    FUN_02f08768(
                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_Start<OVRSpatialAnchor_<LoadUnboundAnchorsAsync>d__71>__
                );
    FUN_02f08768(
                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_Create__
                );
    FUN_02f08768(
                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_SetException__
                );
    FUN_02f08768(
                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_SetResult__
                );
    FUN_02f08768(
                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_SetStateMachine__
                );
    FUN_02f08768(
                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_get_Task__
                );
    FUN_02f08768(
                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__68>__
                );
    DAT_06bc2045 = 1;
  }
  puVar4 = Method_OVRNativeList<OVRAnchor_FilterUnion>_get_Count__;
  puVar2 = PTR_DAT_067c9aa0;
  plVar6 = (long *)thunk_FUN_02f45270(*(undefined8 *)puVar3);
  FUN_04f77e78(plVar6,0);
  if (((param_4 & 1) == 0) &&
     (((param_2 != 0 && (uVar7 = FUN_05a11d6c(param_2), (uVar7 & 1) != 0)) ||
      (uVar7 = FUN_05a149e8(param_1), (uVar7 & 1) != 0)))) {
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar8 = FUN_05a159ec(*(undefined8 *)
                          Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_SetResult__
                         ,0);
    FUN_05a15ac4(plVar6,uVar8);
  }
  puVar3 = 
  Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_SetStateMachine__;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar7 = FUN_05a1219c(*(undefined8 *)puVar3);
  puVar3 = Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_get_Task__;
  if ((uVar7 & 1) == 0) {
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar8 = FUN_05a159ec(*(undefined8 *)puVar3,0);
    FUN_05a15ac4(plVar6,uVar8);
  }
  puVar2 = 
  Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_Create__
  ;
  puVar3 = Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_Create__;
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar8 = FUN_05a159ec(*(undefined8 *)puVar3,*(undefined8 *)puVar2);
  FUN_05a15ac4(plVar6,uVar8);
  puVar3 = 
  Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__68>__
  ;
  if ((param_3 & 1) != 0) {
    local_54 = 2;
    uVar8 = thunk_FUN_02f44ec4(*(undefined8 *)
                                Method_OVRTaskBuilder<OVRResult<OVRAnchor_ShareResult>>_SetStateMachine__
                               ,&local_54);
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_02f6670c(*(long *)puVar4);
    }
    uVar8 = FUN_05a159ec(*(undefined8 *)puVar3,uVar8);
    FUN_05a15ac4(plVar6,uVar8);
  }
  iVar10 = 2;
  if ((param_5 & 1) == 0) {
    iVar10 = 0;
  }
  if (param_2 != 0) {
    if (*(int *)(param_2 + 0x10) != 0) {
      iVar10 = *(int *)(param_2 + 0x10);
    }
    if (*(int *)(param_2 + 0x14) != 0) {
      local_54 = *(int *)(param_2 + 0x14);
      uVar8 = thunk_FUN_02f44ec4(*(undefined8 *)
                                  Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_AwaitOnCompleted<OVRTask_Awaiter<List<OVRPlugin_Result>>,_OVRAnchor_<FetchTrackablesAsync>d__66>__
                                 ,&local_54);
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_02f6670c(*(long *)puVar4);
      }
      uVar8 = FUN_05a159ec(*(undefined8 *)
                            Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_Start<OVRAnchor_<FetchTrackablesAsync>d__66>__
                           ,uVar8);
      FUN_05a15ac4(plVar6,uVar8);
    }
    uVar7 = FUN_05a11f14(param_2);
    if ((uVar7 & 1) != 0) {
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar8 = FUN_05a159ec(*(undefined8 *)
                            Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_SetStateMachine__
                           ,0);
      FUN_05a15ac4(plVar6,uVar8);
    }
    lVar12 = *(long *)(param_2 + 0x28);
    if ((lVar12 != 0) && (0 < (int)*(ulong *)(lVar12 + 0x18))) {
      uVar7 = 0;
      uVar11 = *(ulong *)(lVar12 + 0x18) & 0xffffffff;
      do {
        if (uVar11 <= uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
        uVar8 = *(undefined8 *)(lVar12 + 0x20 + uVar7 * 8);
        uVar11 = FUN_04f6ebb4(uVar8,0);
        if ((uVar11 & 1) == 0) {
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          FUN_05a15ac4(plVar6,uVar8);
        }
        uVar11 = (ulong)*(uint *)(lVar12 + 0x18);
        uVar7 = uVar7 + 1;
      } while ((long)uVar7 < (long)(int)*(uint *)(lVar12 + 0x18));
    }
    iVar1 = *(int *)(param_2 + 0x20);
    if (iVar1 < 2) {
      if (iVar1 == 0) {
LAB_05a1571c:
        local_54 = 2;
      }
      else {
        if (iVar1 != 1) goto LAB_05a157e0;
        local_54 = 3;
      }
LAB_05a15794:
      uVar8 = thunk_FUN_02f44ec4(*(undefined8 *)(PTR_DAT_067c9338 + 0x48),&local_54);
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_02f6670c(*(long *)puVar4);
      }
      uVar9 = *(undefined8 *)
               Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_SetException__
      ;
    }
    else {
      if (iVar1 != 2) {
        if (iVar1 == 3) {
          local_54 = 1;
          goto LAB_05a15794;
        }
        if (iVar1 == 4) goto LAB_05a1571c;
        goto LAB_05a157e0;
      }
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar8 = FUN_05a159ec(*(undefined8 *)
                            Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<FetchSharedAnchorsAsync>d__9>__
                           ,0);
      FUN_05a15ac4(plVar6,uVar8);
      local_54 = 3;
      uVar8 = thunk_FUN_02f44ec4(*(undefined8 *)(PTR_DAT_067c9338 + 0x48),&local_54);
      uVar9 = *(undefined8 *)
               Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_SetException__
      ;
    }
    uVar8 = FUN_05a159ec(uVar9,uVar8);
    FUN_05a15ac4(plVar6,uVar8);
  }
LAB_05a157e0:
  puVar3 = 
  Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_get_Task__
  ;
  if (iVar10 != 0) {
    local_54 = iVar10;
    uVar8 = thunk_FUN_02f44ec4(*(undefined8 *)
                                Method_OVRTaskBuilder<OVRResult<OVRAnchor_ShareResult>>_get_Task__,
                               &local_54);
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_02f6670c(*(long *)puVar4);
    }
    uVar8 = FUN_05a159ec(*(undefined8 *)puVar3,uVar8);
    FUN_05a15ac4(plVar6,uVar8);
  }
  puVar3 = 
  Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_Start<OVRSpatialAnchor_<LoadUnboundAnchorsAsync>d__71>__
  ;
  if (*(char *)(param_1 + 0x15) == '\0') {
    if (*(char *)(param_1 + 0x12) == '\0') {
      uVar8 = *(undefined8 *)
               Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<FetchSharedAnchorsAsync>d__10>__
      ;
      local_54 = 0;
      goto LAB_05a15868;
    }
    local_54 = 1;
  }
  else {
    local_54 = 2;
  }
  uVar8 = *(undefined8 *)
           Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<FetchSharedAnchorsAsync>d__10>__
  ;
LAB_05a15868:
  uVar8 = thunk_FUN_02f44ec4(uVar8,&local_54);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_02f6670c(*(long *)puVar4);
  }
  uVar8 = FUN_05a159ec(*(undefined8 *)puVar3,uVar8);
  FUN_05a15ac4(plVar6,uVar8);
  puVar3 = 
  Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_SetResult__
  ;
  if (*(char *)(param_1 + 0x13) != '\0') {
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar8 = FUN_05a159ec(*(undefined8 *)puVar3,0);
    FUN_05a15ac4(plVar6,uVar8);
  }
  puVar3 = PTR_DAT_067ce588;
  if ((*(char *)(param_1 + 0x14) != '\0') ||
     ((param_2 != 0 && (uVar7 = FUN_05a11e40(param_2), (uVar7 & 1) != 0)))) {
    puVar2 = 
    Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_Start<OVRAnchor_<FetchSharedAnchorsAsync>d__10>__
    ;
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar8 = FUN_05a159ec(*(undefined8 *)puVar2,0);
    FUN_05a15ac4(plVar6,uVar8);
  }
  puVar5 = 
  Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>,_OVRSpatialAnchor_<LoadUnboundAnchorsAsync>d__71>__
  ;
  puVar2 = 
  Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_Start<OVRAnchor_<FetchSharedAnchorsAsync>d__9>__
  ;
  uVar8 = FUN_0511a4dc(0);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02f6670c(*(long *)puVar3);
  }
  puVar3 = Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_SetException__;
  uVar8 = Newtonsoft_Json_Utilities_ImmutableCollectionsUtils___cctor
                    (uVar8,*(undefined8 *)puVar2,*(undefined8 *)puVar5,0);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_02f6670c(*(long *)puVar4);
  }
  uVar8 = FUN_05a159ec(*(undefined8 *)puVar3,uVar8);
  FUN_05a15ac4(plVar6,uVar8);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
  return;
}


