/*
FUNCTION_NAME: FUN_0361f9a8
ENTRY_POINT: 0361f9a8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 76
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_11;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_3
*/


void FUN_0361f9a8(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long local_28;
  
  puVar1 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<LeaderboardVersionTierScoresPage>>_get_Task__
  ;
  if ((DAT_0412e60c & 1) == 0) {
    FUN_01ab69ac(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<LeaderboardVersionTierScoresPage>>_get_Task__
                );
    FUN_01ab69ac(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<LeaderboardVersions>>_AwaitUnsafeOnCompleted<TaskAwaiter<HttpClientResponse>,_InternalLeaderboardsApiClient_<GetLeaderboardVersionsAsync>d__18>__
                );
    DAT_0412e60c = 1;
  }
  local_28 = 0;
  uVar3 = FUN_01f4a16c(param_1,&local_28,*(undefined8 *)puVar1);
  puVar1 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<LeaderboardVersions>>_AwaitUnsafeOnCompleted<TaskAwaiter<HttpClientResponse>,_InternalLeaderboardsApiClient_<GetLeaderboardVersionsAsync>d__18>__
  ;
  if ((uVar3 & 1) == 0) {
    return;
  }
  if ((local_28 != 0) && (*(long *)(local_28 + 0x248) != 0)) {
    uVar3 = FUN_02216960(*(long *)(local_28 + 0x248),param_1,
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<LeaderboardVersions>>_AwaitUnsafeOnCompleted<TaskAwaiter<HttpClientResponse>,_InternalLeaderboardsApiClient_<GetLeaderboardVersionsAsync>d__18>__
                        );
    if ((uVar3 & 1) != 0) {
      return;
    }
    if ((local_28 != 0) && (*(long *)(local_28 + 0x250) != 0)) {
      uVar3 = FUN_02216960(*(long *)(local_28 + 0x250),param_1,*(undefined8 *)puVar1);
      if ((uVar3 & 1) != 0) {
        return;
      }
      if (local_28 != 0) {
        iVar2 = FUN_035d3228(local_28,0);
        while (iVar2 = iVar2 + -1, local_28 != 0) {
          if (iVar2 < 0) {
            iVar2 = FUN_035d3278(local_28,0);
            goto LAB_0361fa94;
          }
          plVar4 = (long *)FUN_035d5090(local_28,iVar2,0);
          if (plVar4 == param_1) {
            return;
          }
        }
      }
    }
  }
UnityEngine_GUISkin__get_verticalScrollbarUpButton:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
LAB_0361fa94:
  iVar2 = iVar2 + -1;
  if (iVar2 < 0) {
    iVar2 = (**(code **)(*param_1 + 0x1e8))(param_1,*(undefined8 *)(*param_1 + 0x1f0));
    if (iVar2 == 3) {
      if (local_28 == 0) goto UnityEngine_GUISkin__get_verticalScrollbarUpButton;
      FUN_035d3b70(local_28,param_1,0);
    }
    else if (iVar2 != 2) {
      if (iVar2 != 1) {
        return;
      }
      if (local_28 != 0) {
        FUN_035d3b70(local_28,param_1,0);
        return;
      }
      goto UnityEngine_GUISkin__get_verticalScrollbarUpButton;
    }
    if (local_28 != 0) {
      FUN_035d3b80(local_28,param_1,0);
      return;
    }
    goto UnityEngine_GUISkin__get_verticalScrollbarUpButton;
  }
  if (local_28 == 0) goto UnityEngine_GUISkin__get_verticalScrollbarUpButton;
  plVar4 = (long *)FUN_035d50b0(local_28,iVar2,0);
  if (plVar4 == param_1) {
    return;
  }
  goto LAB_0361fa94;
}


