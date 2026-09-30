/*
FUNCTION_NAME: FUN_069a1b0c
ENTRY_POINT: 069a1b0c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_069a1b0c(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  if ((DAT_0755b5fa & 1) == 0) {
    FUN_03188a78(Method_OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>_get_IsCompleted__);
    FUN_03188a78(
                Method_OVRTask_Awaiter<ValueTuple<OVRSceneManager_LoadSceneModelResult,_int>>_GetResult__
                );
    DAT_0755b5fa = 1;
  }
  puVar2 = Method_OVRTask_Awaiter<ValueTuple<OVRSceneManager_LoadSceneModelResult,_int>>_GetResult__
  ;
  puVar1 = Method_OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>_get_IsCompleted__;
  if (param_2 == 0) {
    thunk_FUN_031edd38(PTR_DAT_070c2888);
    uVar4 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed();
    uVar5 = thunk_FUN_031edd38(
                              Method_OVRTask_Awaiter<ValueTuple<OVRSceneManager_LoadSceneModelResult,_int>>_get_IsCompleted__
                              );
    uVar6 = thunk_FUN_031edd38(PTR_DAT_070c59b8);
    FUN_058a3364(uVar4,uVar5,uVar6,0);
    uVar5 = thunk_FUN_031edd38(Method_OVRTask_Awaiter<bool>_get_IsCompleted__);
                    /* WARNING: Subroutine does not return */
    FUN_03188b9c(uVar4,uVar5);
  }
  uVar3 = FUN_069a1880(param_1);
  FUN_03b38d8c(param_2,uVar3,*(undefined8 *)puVar1);
  lVar8 = *(long *)puVar2;
  lVar7 = *(long *)(lVar8 + 0x38);
  if (lVar7 == 0) {
    FUN_031c0a30(lVar8);
    lVar7 = *(long *)(lVar8 + 0x38);
  }
  lVar7 = FUN_03cd0794(param_2,*(undefined8 *)(lVar7 + 8));
  if (lVar7 != 0) {
    FUN_069a0498(param_1,*(undefined8 *)(lVar7 + 0x10));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


