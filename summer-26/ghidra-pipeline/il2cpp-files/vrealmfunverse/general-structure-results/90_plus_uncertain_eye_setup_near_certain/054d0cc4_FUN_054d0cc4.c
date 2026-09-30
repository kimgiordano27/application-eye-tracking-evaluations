/*
FUNCTION_NAME: FUN_054d0cc4
ENTRY_POINT: 054d0cc4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 98
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_054d0cc4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  if ((DAT_066d118a & 1) == 0) {
    FUN_02b3c81c(Method_OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>_GetResult__);
    FUN_02b3c81c(Method_OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>_get_IsCompleted__);
    FUN_02b3c81c(
                Method_OVRTask_Awaiter<ValueTuple<OVRSceneManager_LoadSceneModelResult,_int>>_GetResult__
                );
    DAT_066d118a = 1;
  }
  local_38 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar2 = FUN_0452f928(*(long *)(param_1 + 0x10),param_2,&local_38,
                         *(undefined8 *)
                          Method_OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>_GetResult__);
    if ((uVar2 & 1) == 0) {
      FUN_054d0b84(param_1,param_2,param_3);
      return;
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_0452ddac(*(long *)(param_1 + 0x10),param_2,param_3,
                   *(undefined8 *)
                    Method_OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>_get_IsCompleted__);
      uVar1 = FUN_054d0de4(param_1,local_38);
      lVar3 = *(long *)(param_1 + 0x18);
      local_40 = 0;
      local_48 = param_2;
      thunk_FUN_02bb0e9c(&local_48,param_2);
      local_40 = param_3;
      thunk_FUN_02bb0e9c(&local_40,param_3);
      if (lVar3 != 0) {
        FUN_039a0558(lVar3,uVar1,local_48,local_40,
                     *(undefined8 *)
                      Method_OVRTask_Awaiter<ValueTuple<OVRSceneManager_LoadSceneModelResult,_int>>_GetResult__
                    );
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


