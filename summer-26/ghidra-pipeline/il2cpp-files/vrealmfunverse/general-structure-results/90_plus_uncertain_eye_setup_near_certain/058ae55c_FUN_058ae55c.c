/*
FUNCTION_NAME: FUN_058ae55c
ENTRY_POINT: 058ae55c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_7;validity_or_gating_hits_7;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_7
*/


void FUN_058ae55c(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  puVar3 = 
  Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_Start<OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__62>__
  ;
  if ((DAT_066d31ec & 1) == 0) {
    FUN_02b3c81c(
                Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>,_OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_5_1>d>__
                );
    FUN_02b3c81c(Method_OVRTask<OVRAnchor_Tracker_AsyncLock>_GetAwaiter__);
    FUN_02b3c81c(
                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__62>__
                );
    FUN_02b3c81c(
                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__63>__
                );
    FUN_02b3c81c(
                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_Start<OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__62>__
                );
    FUN_02b3c81c(Method_UnityEngine_UIElements_ObjectListPool<string>_Get__);
    DAT_066d31ec = 1;
  }
  puVar2 = Method_OVRTask<OVRAnchor_Tracker_AsyncLock>_GetAwaiter__;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  FUN_0499de70(param_1 + 0xd0,param_3,*(undefined8 *)puVar2);
  *(undefined1 *)(param_1 + 0x2c0) = 1;
  puVar2 = 
  Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__62>__
  ;
  iVar1 = *(int *)(param_1 + 400) + -1;
  if (iVar1 != 0) {
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    puVar6 = (undefined8 *)FUN_0499dea4(param_1 + 0xd0,0,*(undefined8 *)puVar2);
    puVar7 = (undefined8 *)FUN_0499dea4(param_1 + 0xd0,iVar1,*(undefined8 *)puVar2);
    puVar8 = (undefined8 *)FUN_0499dea4(param_1 + 0xd0,iVar1,*(undefined8 *)puVar2);
    uVar15 = puVar8[1];
    uVar14 = *puVar8;
    uVar10 = puVar8[2];
    puVar8 = (undefined8 *)FUN_0499dea4(param_1 + 0xd0,0,*(undefined8 *)puVar2);
    uVar17 = puVar8[1];
    uVar16 = *puVar8;
    uVar11 = puVar8[2];
    puVar6[1] = uVar15;
    *puVar6 = uVar14;
    puVar6[2] = uVar10;
    puVar7[1] = uVar17;
    *puVar7 = uVar16;
    puVar7[2] = uVar11;
    uVar4 = FUN_058ad150(param_1);
    puVar2 = Method_UnityEngine_UIElements_ObjectListPool<string>_Get__;
    puVar3 = 
    Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>,_OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_5_1>d>__
    ;
    iVar12 = *(int *)(param_1 + 0x2a4);
    if (iVar12 < *(int *)(param_1 + 0x2a8) + iVar12) {
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      do {
        lVar9 = FUN_03ab7248(param_2 + 0x68,iVar12,*(undefined8 *)puVar2);
        iVar13 = 0;
        *(undefined4 *)(lVar9 + 0x48) = uVar4;
        while( true ) {
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          iVar5 = FUN_05cc0738(lVar9 + 0x24,0);
          if (iVar5 <= iVar13) break;
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          iVar5 = FUN_05cc05c8(lVar9 + 0x24,iVar13,0);
          if (iVar5 == 0) {
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
            }
            FUN_05cc0680(lVar9 + 0x24,iVar13,iVar1,0);
          }
          iVar13 = iVar13 + 1;
        }
        iVar13 = 0;
        while( true ) {
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          iVar5 = FUN_05cc0738(lVar9,0);
          if (iVar5 <= iVar13) break;
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          iVar5 = FUN_05cc05c8(lVar9,iVar13,0);
          if (iVar5 == 0) {
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
            }
            FUN_05cc0680(lVar9,iVar13,iVar1,0);
          }
          iVar13 = iVar13 + 1;
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 < *(int *)(param_1 + 0x2a8) + *(int *)(param_1 + 0x2a4));
    }
    if (*(int *)(param_1 + 700) == 0) {
      *(int *)(param_1 + 700) = iVar1;
    }
  }
  return;
}


